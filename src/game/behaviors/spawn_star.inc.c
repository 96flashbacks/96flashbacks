// spawn_default_star.c.inc

static struct ObjectHitbox sCollectStarHitbox = {
    /* interactType:      */ INTERACT_STAR_OR_KEY,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 80,
    /* height:            */ 50,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

void bhv_collect_star_init(void) {
    s8 starId;
    u8 currentLevelStarFlags;

    starId = (o->oBehParams >> 24) & 0xFF;
    currentLevelStarFlags = save_file_get_star_flags(gCurrSaveFileNum - 1, gCurrCourseNum - 1);
    if (currentLevelStarFlags & (1 << starId)) {
        o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_TRANSPARENT_STAR];
    } else {
        o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_STAR];
    }

    obj_set_hitbox(o, &sCollectStarHitbox);
}

void bhv_collect_star_loop(void) {
    o->oFaceAngleYaw += 0x800;

    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        mark_obj_for_deletion(o);
        o->oInteractStatus = 0;
    }
}

void bhv_star_spawn_init(void) {
    o->oVelY = 1.5f;
    o->oForwardVel = o->oStarSpawnDisFromHome / 30.0f;
    o->oStarSpawnUnkFC = o->oPosY;
    o->oPosX = o->oHomeX;
    o->oPosY = o->oHomeY;
    o->oPosZ = o->oHomeZ;
    cur_obj_unused_init_on_floor();
    cur_obj_become_intangible();
}

void bhv_star_spawn_loop(void) {
    switch (o->oAction) {
        case 0:
            o->oFaceAngleYaw += 0x2400;
            spawn_object(o, MODEL_NONE, bhvSparkleSpawn);
            cur_obj_become_intangible(); // to prevent getting star during rise
            if (o->oTimer == 61)
                o->oAction = 1;
            break;

        case 1:
            obj_move_xyz_using_fvel_and_yaw(o);
            o->oStarSpawnUnkFC += o->oVelY;
            o->oFaceAngleYaw += 0x2400;
            spawn_object(o, MODEL_NONE, bhvSparkleSpawn);
            if (o->oPosY > o->oHomeY) {
                o->oAction = 3;
                if (o->oAction == 3) {
                    cur_obj_become_tangible();
                }
                o->oForwardVel = 0;
            }
            if (o->oPosY > o->oHomeY) {
                o->oVelY = 0;
                o->oForwardVel = 0;
                cur_obj_become_tangible();
            }
            break;

        case 3:
            o->oFaceAngleYaw += 0x800;
            if (o->oTimer == 0) {
                clear_time_stop_flags(TIME_STOP_ENABLED | TIME_STOP_MARIO_AND_DOORS);
            }

            if (o->oInteractStatus & INT_STATUS_INTERACTED) {
                mark_obj_for_deletion(o);
                o->oInteractStatus = 0;
            }
            break;
    }
}

struct Object *spawn_star(struct Object *sp30, f32 sp34, f32 sp38, f32 sp3C) {
    sp30 = spawn_object_abs_with_rot(o, 0, MODEL_STAR, bhvStarSpawnCoordinates, o->oPosX, o->oPosY,
                                     o->oPosZ, 0, 0, 0);
    sp30->oBehParams = o->oBehParams;
    sp30->oHomeX = sp34;
    sp30->oHomeY = sp38;
    sp30->oHomeZ = sp3C;
    sp30->oFaceAnglePitch = 0;
    sp30->oFaceAngleRoll = 0;
    return sp30;
}

void spawn_default_star(f32 sp20, f32 sp24, f32 sp28) {
    struct Object *sp1C;
    sp1C = spawn_star(sp1C, sp20, sp24, sp28);
    sp1C->oBehParams2ndByte = 0;
}

void spawn_red_coin_cutscene_star(f32 sp20, f32 sp24, f32 sp28) {
    struct Object *sp1C;
    sp1C = spawn_star(sp1C, sp20, sp24, sp28);
    sp1C->oBehParams2ndByte = 1;
}

void spawn_no_exit_star(f32 sp20, f32 sp24, f32 sp28) {
     struct Object *sp1C;
     sp1C = spawn_star(sp1C, sp20, sp24, sp28);
     sp1C->oBehParams2ndByte = 1;
     sp1C->oInteractionSubtype |= INT_SUBTYPE_NO_EXIT;
}

void bhv_hidden_red_coin_star_init(void) {
    s16 sp36;
    struct Object *sp30;

    if (gCurrCourseNum != COURSE_JRB)
        spawn_object(o, MODEL_TRANSPARENT_STAR, bhvRedCoinStarMarker);

    sp36 = count_objects_with_behavior(bhvRedCoin);
    if (sp36 == 0) {
        sp30 =
            spawn_object_abs_with_rot(o, 0, MODEL_STAR, bhvStar, o->oPosX, o->oPosY, o->oPosZ, 0, 0, 0);
        sp30->oBehParams = o->oBehParams;
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }

    o->oHiddenStarTriggerCounter = 8 - sp36;
}

void bhv_hidden_red_coin_star_loop(void) {
    gRedCoinsCollected = o->oHiddenStarTriggerCounter;
    switch (o->oAction) {
        case 0:
            if (o->oHiddenStarTriggerCounter == 8)
                o->oAction = 1;
            break;

        case 1:
            if (o->oTimer > 2) {
                spawn_red_coin_cutscene_star(o->oPosX, o->oPosY, o->oPosZ);
                spawn_mist_particles();
                o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
            }
            break;
    }
}
