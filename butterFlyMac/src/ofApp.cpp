// https://www.google.com/search?q=butterfly+curve&newwindow=1&client=safari&rls=en&biw=1474&bih=1016&tbm=isch&tbo=u&source=univ&sa=X&ei=eGAqVPPzEYfXavGkgWA&ved=0CDUQsAQ


#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofBackground(ofColor::fromHsb(30, 10, 255, 255));
	ofEnableAlphaBlending();

    
    
    numX = ofGetWidth() * 0.02;
    numY = ofGetHeight() * 0.02;
    
    butterFlySize = 10;
    
	butterFlySetUp();

    
}


//--------------------------------------------------------------
void ofApp::update(){

}


//--------------------------------------------------------------
void ofApp::draw(){

	butterFlyDraw();

}


//--------------------------------------------------------------
void ofApp::butterFlySetUp(){
    
    butterFlies.resize( numX * numY );
    
	for (int i=0; i<numX; i++) {
		for (int j=0; j<numY; j++) {
			int _index = i + j * numY;
            ButterFly _butterFlyE;
            _butterFlyE.setup();
			butterFlies[_index] = _butterFlyE;
		}
	}
    
}

//--------------------------------------------------------------
void ofApp::butterFlyDraw(){
    
    for (int i=0; i<numX; i++) {
        for (int j=0; j<numY; j++) {

			int _index = i + j * numY;

			ofPushMatrix();
			ofTranslate(i * 100, j * 100);

			butterFlies[_index].drawing(butterFlySize);

			ofPopMatrix();
            
		}
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == 'f' ){
        fullscreen = !fullscreen;
        ofSetFullscreen(fullscreen);
    } else {
        butterFlySetUp();
    }
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

    numX = ofGetWidth() * 0.02;
    numY = ofGetHeight() * 0.02;
    
    butterFlySize = 10;
    
    butterFlySetUp();

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}