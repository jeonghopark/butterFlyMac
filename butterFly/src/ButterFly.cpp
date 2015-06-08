//
//  ButterFly.cpp
//  butterFly_generator
//
//  Created by Admin on 25.11.13.
//
//

#include "ButterFly.h"

ButterFly::ButterFly(){


}


void ButterFly::setup(){
    
    randomA_1 = ofRandom( -0.5, 0.5 );
    randomA_2 = ofRandom( -0.5, 0.5 );
    randomB = ofRandom( 0.8, 1.5 );
    randomC = ofRandom( 0.8, 1.5 );
    randomD = ofRandom( 0.5, 42.5 );
    
    colorrandomA = ofRandom( 120, 255 );
    colorrandomB = ofRandom( 0.1, 2 );
    
    Number = 1000;
    
}



void ButterFly::drawing(float _size){

	//    mesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
	mesh.setMode(OF_PRIMITIVE_TRIANGLE_FAN);

	ofPushMatrix();
	ofPushStyle();


#ifdef _WIN32
	//ofBeginShape();
#elif __APPLE__
	ofBeginShape();
#endif

	for (int i=0; i<Number; i++) {
		double u = i * 24.0 * PI / Number;
		int size = _size;

		float x = butterFlyCurveX( u ) * size;
		float y = butterFlyCurveY( u ) * size;

		mesh.addVertex(ofPoint(x,y,0));
		mesh.addColor(ofFloatColor( ofColor::fromHsb((float)i/(float)Number*255, 255, 255, 20)));
	}

#ifdef _WIN32
	//ofEndShape();
#elif __APPLE__
	ofEndShape();
#endif


	ofPopStyle();
	ofPopMatrix();

	mesh.draw();

	mesh.clear();

}


float ButterFly::butterFlyCurveX(double t){
	float value = sin(t) * (exp(cos(t)) - 2 * cos(4 * t) - pow(sin(t / randomD)+randomA_1,5.0));
	return value;
}


float ButterFly::butterFlyCurveY(double t){
	float value = -cos(t) * (exp(cos(t)) - 2 * cos(4 * t) - pow(sin(t / randomD)+randomA_2,5.0));
	return value;
}