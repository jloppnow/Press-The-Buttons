#include <gb/gb.h>
#include <stdio.h>

UINT8 i;

void wait_frames(UINT8 numloops) {
    for (i = 0; i < numloops; i ++) {
        wait_vbl_done();
    }
}