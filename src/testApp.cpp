#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    blob.loadImage("blob.png");
    blob.setImageType(OF_IMAGE_GRAYSCALE);
    xMin = ofGetWidth();
    yMin = ofGetHeight();
    xMax = yMax = 0;
    
}

//--------------------------------------------------------------
void testApp::update(){
    unsigned char * pixels = blob.getPixels();
    
    for (int i = 0; i < blob.getWidth() * blob.getHeight(); i++) {

        if (pixels[i] > 200) {
            int x = i % (int)blob.getWidth();
            int y = i / (int)blob.getHeight();
            if ( x < xMin ) xMin = x;
            if ( y < yMin ) yMin = y;
            if ( x > xMax ) xMax = x;
            if ( y > yMax ) yMax = y;
        }
    }
    
    blob.update();
    
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(255);
    blob.draw(0,0);
    ofSetColor(0,255,0);
    ofNoFill();
    ofRect(xMin, yMin, xMax - xMin, yMax - yMin);
    ofFill();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
