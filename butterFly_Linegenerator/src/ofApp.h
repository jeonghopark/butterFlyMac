#pragma once

#include "ofMain.h"
#include "ButterFly.h"

#define NUM_X 9
#define NUM_Y 7

class ofApp : public ofBaseApp{
public:
<<<<<<< HEAD
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ButterFly butterFly[NUM_X*NUM_Y];
    void butterFlySetUp();
    void butterFlyDraw();
    
    
    bool fullscreen;
    
=======
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	ButterFly butterFly[NUM_X*NUM_Y];
	void butterFlySetUp();
	void butterFlyDraw();

>>>>>>> dc6bfd5098444bef30cb8a818770c56f8e7406fa
};
