#pragma once

#include "diffbuild.hpp"
#include "inttypes.hpp"
#include <Windows.h>

#include "GuiImpl.hpp"

struct Gui
{

    u32 flags;
    GuiImpl *impl;
    f32 unk_8;
    f32 blueSpellcardBarLength;
    u32 unk_10;
    i32 eclSetLives;
    i32 eclSpellcardRelated;
    i32 unk_1c;
    bool bossPresent;
    f32 bossHealthBar1;
    f32 bossHealthBar2;
};
C_ASSERT(sizeof(Gui) == 0x2c);

DIFFABLE_EXTERN(Gui, g_Gui);