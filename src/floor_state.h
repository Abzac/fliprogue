#pragma once

#include "game_logic.h"

#include <stdbool.h>
#include <stdint.h>

void fr_save_current_floor(FrGame* game);
bool fr_floor_actor_at_except(const FrFloorState* floor, uint8_t x, uint8_t y, uint8_t except_index);
void fr_init_floor_state(FrGame* game, uint8_t floor_id, uint8_t up_x, uint8_t up_y, uint8_t down_x, uint8_t down_y);
void fr_apply_saved_floor_state(FrGame* game, uint8_t floor_id);
void fr_enter_floor(FrGame* game, uint8_t floor, uint8_t entry_stairs);
