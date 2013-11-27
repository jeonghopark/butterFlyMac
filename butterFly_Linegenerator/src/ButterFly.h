//
//  ButterFly.h
//  butterFly_generator
//
//  Created by Admin on 25.11.13.
//
//

#ifndef __butterFly_generator__ButterFly__
#define __butterFly_generator__ButterFly__

#include "ofMain.h"

class ButterFly {
    
public:
    ButterFly();
    
    void drawing(float _size);
    
    float butterFlyCurveX(double t);
    float butterFlyCurveY(double t);
    
    float randomA, randomA_1, randomA_2, randomB, randomC, randomD;
    float colorrandomA, colorrandomB;
    
    ofMesh mesh;
    int Number;
};

#endif /* defined(__butterFly_generator__ButterFly__) */
