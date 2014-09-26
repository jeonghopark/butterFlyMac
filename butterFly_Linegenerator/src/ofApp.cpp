#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofBackground(ofColor::fromHsb(30, 10, 255, 255));
	ofEnableAlphaBlending();

	butterFlySetUp();

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofPushMatrix();
	ofTranslate(200 / 2, 170 / 2);
	butterFlyDraw();
	ofPopMatrix();

}

void ofApp::butterFlySetUp(){
	for (int i = 0; i < NUM_X; i++) {
		for (int j = 0; j < NUM_Y; j++) {
			int index = i + j*NUM_X;
			butterFly[index] = ButterFly();
		}
	}
}

void ofApp::butterFlyDraw(){
	for (int i = 0; i < NUM_X; i++) {
		for (int j = 0; j < NUM_Y; j++) {

			int index = i + j*NUM_X;

			ofPushMatrix();
			ofTranslate(i * 100, j * 100);

			butterFly[index].drawing(10);

			ofPopMatrix();
		}
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	butterFlySetUp();

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

	butterFlySetUp();

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