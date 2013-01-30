#include "testApp.h"


ramGhost ghost;

#pragma mark - oF methods
//--------------------------------------------------------------
void testApp::setup()
{
	ofSetFrameRate(60);
	ofSetVerticalSync(true);
	ofBackground(ramColor::WHITE);
	
	
	/// ram setup
	// ------------------
	ramInit();
	oscReceiver.setup(10000);
	
	
	/// scenes setup
	// ------------------
	ghost.setDistance(150.0);
	ghost.setSpeed(27.0);
	ghost.setHistorySize(10);
}

//--------------------------------------------------------------
void testApp::update()
{
	oscReceiver.update();
	
	// update ghost with passing ramActor
	ghost.update( getActor(myActorName) );
}

//--------------------------------------------------------------
void testApp::draw()
{
	sceneManager.draw();

	// get processed ramActor ref
	ramActor& actor = ghost.getActor();

	ramCameraBegin();
	{
		ramBasicActor(actor);
	}
	ramCameraEnd();
}



#pragma mark - ram methods

//--------------------------------------------------------------
void testApp::drawActor(ramActor &actor)
{
	ramControlPanel &gui = ramGetGUI();
//	if ( gui.getValueB("Draw Actor") )
	{
		ramBasicActor(actor);
		
//		ramGlobal().beginShadowMatrix();
		ramBasicActor(actor, ramColor::SHADOW, ramColor::SHADOW);
//		ramGlobal().endShadowMatrix();
	}

	ramBasicActor(actor);
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

