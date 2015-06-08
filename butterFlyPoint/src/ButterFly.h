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
    
    void drawing();
    
    float butterFlyCurveX(double t);
    float butterFlyCurveY(double t);
    
    float factorA, factorA_1, factorA_2, factorB, factorC, factorD;
    float colorFactorA, colorFactorB;
    
};

#endif /* defined(__butterFly_generator__ButterFly__) */
