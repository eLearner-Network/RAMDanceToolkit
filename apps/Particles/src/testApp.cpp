#include "testApp.h"


#include "Particles.h"
Particles particles;

#pragma mark - oF methods
//--------------------------------------------------------------
void testApp::setup()
{
	ofSetFrameRate(60);
	ofSetVerticalSync(true);
	ofBackground(ramColor::WHITE);
	
	
	/// ram setup
	// ------------------
	ramInitialize();
	oscReceiver.setup(10000);
	
	
	/// stamp setup
	// ------------------
	particles.setup();
	ramGetGUI().addPanel(&particles);
}

//--------------------------------------------------------------
void testApp::update()
{
	/// Entities update
	// ------------------
	oscReceiver.update();
	
	
	particles.update();
}

//--------------------------------------------------------------
void testApp::draw()
{
	particles.draw();
}



#pragma mark - ram methods

//--------------------------------------------------------------
void testApp::drawActor(ramActor &actor)
{
}

//--------------------------------------------------------------
void testApp::drawRigid(ramRigidBody &rigid)
{
}




#pragma mark - oF Events
//--------------------------------------------------------------
void testApp::keyPressed(int key)
{
	
}

//--------------------------------------------------------------
void testApp::keyReleased(int key)
{
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y)
{
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button)
{
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button)
{
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button)
{
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h)
{
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg)
{
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo)
{
	
}

