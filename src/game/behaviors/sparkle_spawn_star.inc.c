// sparkle_spawn_star.c.inc

struct ObjectHitbox sSparkleSpawnStarHitbox = {
    /* interactType: */ INTERACT_STAR_OR_KEY,
    /* downOffset: */ 0,
    /* damageOrCoinValue: */ 0,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */ 80,
    /* height: */ 50,
    /* hurtboxRadius: */ 0,
    /* hurtboxHeight: */ 0,
};

void bhv_spawned_star_init(void) {
    s32 sp24;
    if (!(o->oInteractionSubtype & INT_SUBTYPE_NO_EXIT))
        o->oBehParams = o->parentObj->oBehParams;
    sp24 = (o->oBehParams >> 24) & 0xFF;
    if (bit_shift_left(sp24) & save_file_get_star_flags(gCurrSaveFileNum - 1, gCurrCourseNum - 1))
        cur_obj_set_model(MODEL_TRANSPARENT_STAR);
}

void set_sparkle_spawn_star_hitbox(void) {
    obj_set_hitbox(o, &sSparkleSpawnStarHitbox);
    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        mark_obj_for_deletion(o);
        o->oInteractStatus = 0;
    }
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"

void set_home_to_mario(void) {
    f32 sp1C;
    f32 sp18;
    o->oPosX = o->oHomeX;
    o->oPosY = o->oHomeY;
    o->oPosZ = o->oHomeZ;
    // o->oPosY = o->oHomeY;
    sp1C = o->oHomeX - o->oPosX;
    sp18 = o->oHomeZ - o->oPosZ;
    // o->oForwardVel = sqrtf(sp1C * sp1C + sp18 * sp18) / 23.0f;
}

#pragma GCC diagnostic pop

void set_y_home_to_pos(void) {
    o->oForwardVel = 0;
    o->oHomeY = o->oPosY;
}

void slow_star_rotation(void) {
    if (o->oAngleVelYaw > 0x400)
        o->oAngleVelYaw -= 0x40;
}

void bhv_spawned_star_loop(void) {
    o->oAngleVelYaw = 0x400;
    set_sparkle_spawn_star_hitbox();
    slow_star_rotation();
    o->oFaceAngleYaw += o->oAngleVelYaw;
}

void bhv_spawn_star_no_level_exit(u32 sp20) {
    struct Object *sp1C = spawn_object(o, MODEL_STAR, bhvSpawnedStarNoLevelExit);
    sp1C->oBehParams = sp20 << 24;
    sp1C->oInteractionSubtype = INT_SUBTYPE_NO_EXIT;
    obj_set_angle(sp1C, 0, 0, 0);
}
