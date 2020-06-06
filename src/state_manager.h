#include <gb/gb.h>
#include <stdio.h>

#ifndef _STATE_MANAGER_H
#define _STATE_MANAGER_H

#define SPLASH_LOGO 0U
#define MAIN_MENU 1U
#define LEVEL_1 2U

unsigned int currentState;

void set_state(unsigned int);
void update_state();
void init_state();
void get_state_input();

#endif