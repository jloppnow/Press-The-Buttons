/************************************************************************
* State Manager
* Controls the current state of the game
* 
* set_state(int)    = sets the current state
* update_state()    = updates the current state
* get_state_input() = tells the current state what button was pressed

*
* @Author - Jonathan Loppnow
*************************************************************************/

#include <stdio.h>
#include <gb/gb.h>

#include "../assets/splash_logo_map.h"

#define SPLASH_LOGO 0U
#define MAIN_MENU 1U
#define LEVEL_1 2U

unsigned int currentState;

void set_state(unsigned int newState) {
    currentState = newState;
}

void update_state() {
    //update the state
    //**Note: Splash logo does not have an update method cause it doesnt do anything
    switch(currentState) {
        case MAIN_MENU:
            //update the main menu state
            break;
        case LEVEL_1:
            //update level 1 state
            break;
        default:
            break;
    }
}

void init_state() {
    HIDE_BKG;
    HIDE_SPRITES;
    DISPLAY_OFF;

    switch(currentState) {
        case SPLASH_LOGO:
            //initialize the splash logo state
            init_splash_logo_map();
            break;
        case MAIN_MENU:
            //initialize the main menu state
            break;
        case LEVEL_1:
            //initialize level 1 state
            break;
    }

    SHOW_BKG;
    SHOW_SPRITES;
    DISPLAY_ON;
} 

void get_state_input() {
    unsigned int buttonPress = joypad();

    //update the input in the current state
    switch(currentState) {
        case SPLASH_LOGO:
            //initialize the splash logo state
            splash_logo_input(buttonPress);
            break;
        case MAIN_MENU:
            //initialize the main menu state
            break;
        case LEVEL_1:
            //initialize level 1 state
            break;
    }
}