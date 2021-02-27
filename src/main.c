#include <gb/gb.h>
#include <stdio.h>

#include "state_manager.h"
#include "utilities/utils.h"

unsigned int gameRunning;

void main();

void main() {
    SPRITES_8x8;
    gameRunning = 1;
    currentState = SPLASH_LOGO;
    init_state();

    while (gameRunning) {
        //get input and send it to current state
        get_state_input();

        //update state 
        update_state();

        //wait for one frame
        wait_frames(1);
    }
}