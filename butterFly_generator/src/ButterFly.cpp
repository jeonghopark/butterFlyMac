//
//  ButterFly.cpp
//  butterFly_generator
//
//  Created by Admin on 25.11.13.
//
//

#include "ButterFly.h"

ButterFly::ButterFly(){
    
    factorA_1 = ofRandom( -0.2, 0.2 );
    factorA_2 = ofRandom( -0.2, 0.2 );
    factorB = ofRandom( 0.8, 1.5 );
    factorC = ofRandom( 0.8, 1.5 );
    factorD = ofRandom( 0.5, 42.5 );
    
    colorFactorA = ofRandom( 120, 255 );
    colorFactorB = ofRandom( 0.1, 2 );
}

void ButterFly::drawing(){
    
    int Number = 500;
    
    
    ofPushStyle();
    ofFill();
    for (int i=0; i<Number; i++) {
        double u = i * 24.0 * PI / Number;
        int size = 10;
        
        float x = butterFlyCurveX( u ) * size * factorB;
        float y = butterFlyCurveY( u ) * size * factorC;
        
        ofPushStyle();
        ofSetColor( ofColor::fromHsb((float)i/(float)Number*255 * colorFactorB, 255, 255, 255) );
        ofCircle( x, y, 0.7 );
        ofPopStyle();
    }
    ofPopStyle();
    
    ofPopMatrix();
    
}


float ButterFly::butterFlyCurveX(double t){
    float value = sin(t) * (exp(cos(t)) - 2 * cos(4 * t) - pow(sin(t / factorD)+factorA_1,5.0));
    return value;
}


float ButterFly::butterFlyCurveY(double t){
    float value = -cos(t) * (exp(cos(t)) - 2 * cos(4 * t) - pow(sin(t / factorD)+factorA_2,5.0));
    return value;
}
