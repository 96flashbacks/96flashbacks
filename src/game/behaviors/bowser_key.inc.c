// bowser_key.c.inc

struct ObjectHitbox sBowserKeyHitbox = {
    /* interactType: */ INTERACT_STAR_OR_KEY,
    /* downOffset: */ 0,
    /* damageOrCoinValue: */ 0,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */ 80,
    /* height: */ 50,
    /* hurtboxRadius: */ 80,
    /* hurtboxHeight: */ 50,
};

void bhv_bowser_key_loop(void) {
    cur_obj_scale(0.5f);
    // if (o->oAngleVelYaw > 0x400)
    // o->oAngleVelYaw -= 0x900;
    o->oFaceAngleYaw += 0x800;
    o->oFaceAngleRoll = -0x4000;
    o->oGraphYOffset = 165.0f;
    if (o->oAction == 0) {
        if (o->oTimer == 0)
            o->oVelY = 250.0f;
        cur_obj_update_floor_and_walls();
        cur_obj_move_standard(78);
        if (o->oMoveFlags & OBJ_MOVE_IN_AIR)
            o->oAction++;
    } else {
        obj_set_hitbox(o, &sBowserKeyHitbox);
        if (o->oInteractStatus & INT_STATUS_INTERACTED) {
            mark_obj_for_deletion(o);
            o->oInteractStatus = 0;
        }
    }
}
