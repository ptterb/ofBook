//
//  Enemy.h
//  OfBookOsc
//
//  Created by Phoenix Perry on 3/3/14.
//
//

#ifndef __OfBookOsc__Enemy__
#define __OfBookOsc__Enemy__

#include <iostream>
#include "ofMain.h"

class Enemy {
public:
    ofPoint pos;
    float speed;
    float amplitude;
    float width;
    
    float start_shoot;
    float shoot_interval;
    
    void setup(float m_e_a, float m_e_s_i, ofImage * enemy_image);
    void update();
    void draw();
    bool time_to_shoot();
    
    ofImage * img;
};

#endif /* defined(__OfBookOsc__Enemy__) */
