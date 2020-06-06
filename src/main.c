#include <gb/gb.h>
#include <stdio.h>

#include "state_manager.h"

unsigned int i, ii;
unsigned int gameRunning;

void wait_frames(unsigned int);
void main();

void wait_frames(unsigned int numloops) {
    for (i = 0; i < numloops; i ++) {
        wait_vbl_done();
    }
}

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