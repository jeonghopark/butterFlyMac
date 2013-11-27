#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGlutWindow.h"

//========================================================================
int main( ){
    ofAppGlutWindow window;
    window.setGlutDisplayString("rgba double samples>=4");
    ofSetupOpenGL(&window, 1024,768, OF_WINDOW);
    ofRunApp( new ofApp());
}
