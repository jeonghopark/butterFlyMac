#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(10);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofPushMatrix();
	ofLine( ofGetWidth()/2, 0, ofGetWidth()/2, ofGetHeight() );
	ofLine( 0, ofGetHeight()/2, ofGetWidth(), ofGetHeight()/2 );
	ofPopMatrix();

	ofPushMatrix();
	ofTranslate(ofGetWidth()/2, ofGetHeight()/2);

	int Number = 10000;

	ofPushStyle();
	ofNoFill();
	ofBeginShape();

	for (int i=0; i<Number; i++) {
		double u = i * 24.0 * PI / Number;
		int size = 50;

		float x = butterFlyCurveX( u ) * size;
		float y = butterFlyCurveY( u ) * size;

		ofSetColor( ofColor::fromHsb((float)i/(float)Number*255,255,255,180) );
		ofVertex( x, y );
	}
	ofEndShape();
	ofPopStyle();

	ofPopMatrix();

}

float ofApp::butterFlyCurveX(double t){
	float value = sin(t) * (exp(cos(t)) - 2 * cos(4 * t) - pow(sin(t / 12),5.0));
	return value;
}


float ofApp::butterFlyCurveY(double t){
	float value = -cos(t) * (exp(cos(t)) - 2 * cos(4 * t) - pow(sin(t / 12),5.0));
	return value;
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}