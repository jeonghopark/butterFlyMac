// https://www.google.com/search?q=butterfly+curve&newwindow=1&client=safari&rls=en&biw=1474&bih=1016&tbm=isch&tbo=u&source=univ&sa=X&ei=eGAqVPPzEYfXavGkgWA&ved=0CDUQsAQ

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

//--------------------------------------------------------------
void ofApp::butterFlySetUp(){
	for (int i = 0; i < NUM_X; i++) {
		for (int j = 0; j < NUM_Y; j++) {
			int index = i + j*NUM_X;
			butterFly[index] = ButterFly();
		}
	}
}

//--------------------------------------------------------------
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

<<<<<<< HEAD
    if (key == 'f' ){
        fullscreen = !fullscreen;
        ofSetFullscreen(fullscreen);
    } else {
        butterFlySetUp();
    }
=======
	butterFlySetUp();
>>>>>>> dc6bfd5098444bef30cb8a818770c56f8e7406fa

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