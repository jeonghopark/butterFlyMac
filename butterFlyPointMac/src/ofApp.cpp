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
    
    ofTranslate( 100/2, 100/2 );
    
    for (int i=0; i<NUM_X; i++) {
        for (int j=0; j<NUM_Y; j++) {
            
            int index = i + j*NUM_X;
            
            ofPushMatrix();
            ofTranslate(i*100,j*100);
            
            butterFly[index].drawing();
            
            ofPopMatrix();
        }
        
    }
    
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