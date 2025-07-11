#ifdef VERSION_JP
#define VAL_DIFF 25000
#else
#define VAL_DIFF 60000
#endif

// Define lists for list of level for macros. Each of the following fields are described:
// Argument 1: Internal ROM name of the level.
// Argument 2: Level enumerator for enum used to identify the level ID.
// Argument 3: Course enumerator for enum used to identify the course ID.
// Argument 4: Shorthand name of the level which should be the name of the levels/ folder of the level.
// Argument 5: The shared texture bin used.
// Argument 6: Acoustic reaches for each levels.
// Argument 7, 8, 9: Echo levels for individual areas.
// Argument 10: Specify dynamic music tables for levels, if specified. _ for none.
// Argument 11: Specify level camera table, if specified. _ for none.

// NOTE: Be sure to edit sZoomOutAreaMasks in camera.c, as there isnt a good way to macro those right now.
// TODO: Figure something out for sZoomOutAreaMasks?
DEFINE_LEVEL("CASTLE",         LEVEL_TEST_CASTLE,      COURSE_NONE,     castle,           generic,  15000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("TEST",           LEVEL_TEST,             COURSE_NONE,     test,             generic,  15000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("DONJON",         LEVEL_DONJON,           COURSE_NONE,     donjon,           generic,  15000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("TERESA OBAKE",   LEVEL_BBH,              COURSE_BBH,      bbh,              spooky,   28000,    0x00, 0x00, 0x00, sDynBbh,   sCamBBH)
DEFINE_LEVEL("YYAMA1 % YSLD1", LEVEL_CCM,              COURSE_CCM,      ccm,              snow,     17000,    0x00, 0x00, 0x00, _,         sCamCCM)
DEFINE_LEVEL("SELECT ROOM",    LEVEL_CASTLE,           COURSE_NONE,     castle_inside,    inside,   20000,    0x00, 0x00, 0x00, _,         sCamCastle)
DEFINE_LEVEL("HORROR DUNGEON", LEVEL_HMC,              COURSE_HMC,      hmc,              cave,     16000,    0x00, 0x00, 0x00, sDynHmc,   sCamHMC)
DEFINE_LEVEL("SABAKU % PYRMD", LEVEL_SSL,              COURSE_SSL,      ssl,              generic,  15000,    0x00, 0x00, 0x00, _,         sCamSSL)
DEFINE_LEVEL("BATTLE FIELD",   LEVEL_BOB,              COURSE_BOB,      bob,              generic,  15000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("YUKIYAMA2",      LEVEL_SL,               COURSE_SL,       sl,               snow,     14000,    0x00, 0x00, 0x00, _,         sCamSL)
DEFINE_LEVEL("POOL KAI",       LEVEL_WDW,              COURSE_WDW,      wdw,              grass,    17000,    0x00, 0x00, 0x00, sDynWdw,   _)
DEFINE_LEVEL("WTDG % TINBOTU", LEVEL_JRB,              COURSE_JRB,      jrb,              water,    20000,    0x00, 0x00, 0x00, sDynJrb,   _)
DEFINE_LEVEL("BIG WORLD",      LEVEL_THI,              COURSE_THI,      thi,              grass,    20000,    0x00, 0x00, 0x00, _,         sCamTHI)
DEFINE_LEVEL("CLOCK TOWER",    LEVEL_TTC,              COURSE_TTC,      ttc,              machine,  18000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("RAINBOW CRUISE", LEVEL_RR,               COURSE_NONE,     rr,               sky,      20000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("MAIN MAP",       LEVEL_CASTLE_GROUNDS,   COURSE_NONE,     castle_grounds,   outside,  25000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("EXT1 YOKO SCRL", LEVEL_BITDW,            COURSE_BITDW,    bitdw,            sky,      16000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("EXT7 HORI MINI", LEVEL_VCUTM,            COURSE_VCUTM,    vcutm,            outside,  30000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("EXT2 TIKA LAVA", LEVEL_BITFS,            COURSE_BITFS,    bitfs,            sky,      16000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("EXT9 SUISOU",    LEVEL_SA,               COURSE_SA,       sa,               inside,   20000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("EXT3 HEAVEN",    LEVEL_BITS,             COURSE_BITS,     bits,             sky,      16000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("FIREB1 % INVLC", LEVEL_LLL,              COURSE_LLL,      lll,              fire,     22000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("WATER LAND",     LEVEL_DDD,              COURSE_DDD,      ddd,              water,    17000,    0x00, 0x00, 0x00, sDynDdd,   _)
DEFINE_LEVEL("MOUNTAIN",       LEVEL_WF,               COURSE_WF,       wf,               grass,    13000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("ENDING",         LEVEL_ENDING,           COURSE_CAKE_END, ending,           generic,  20000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("URANIWA",        LEVEL_CASTLE_COURTYARD, COURSE_NONE,     castle_courtyard, outside,  20000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("EXT4 MINI SLID", LEVEL_PSS,              COURSE_PSS,      pss,              mountain, 20000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("IN THE FALL",    LEVEL_COTMC,            COURSE_COTMC,    cotmc,            cave,     18000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("EXT6 MARIO FLY", LEVEL_TOTWC,            COURSE_TOTWC,    totwc,            sky,      20000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("KUPPA1",         LEVEL_BOWSER_1,         COURSE_BITDW,    bowser_1,         generic,  VAL_DIFF, 0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("EXT8 BLUE SKY",  LEVEL_WMOTR,            COURSE_NONE,     wmotr,            generic,  20000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("YAJIMA TEST",    LEVEL_YAJIMA_TEST,      COURSE_NONE,     yajima_test,      generic,  15000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("KUPPA2",         LEVEL_BOWSER_2,         COURSE_BITFS,    bowser_2,         fire,     VAL_DIFF, 0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("KUPPA3",         LEVEL_BOWSER_3,         COURSE_BITS,     bowser_3,         generic,  VAL_DIFF, 0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("DUMMY",          LEVEL_DUMMY,            COURSE_NONE,     dummy,            generic,  15000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("DONKEY % SLID2", LEVEL_TTM,              COURSE_TTM,      ttm,              mountain, 15000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("IWTEST",         LEVEL_IWTEST,           COURSE_NONE,     iwtest,           generic,  15000,    0x00, 0x00, 0x00, _,         _)
DEFINE_LEVEL("SAND",           LEVEL_SAND,             COURSE_NONE,     sand,             generic,  15000,    0x00, 0x00, 0x00, _,         _)
