#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  //  from http://1.bp.blogspot.com/-7WRKuYPRUMU/UBYTs6BEcUI/AAAAAAAAL5Q/ZpzBGQhTSl8/s1600/John+Maeda3.jpg John Maeda Morisawa poster series

ofSetBackgroundColor(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

  // get words onto screen - 3d
  // move them down
  // spin them as they are moving down
  // smallify them as they are moving down
  // fade them as they are moving down
  //

  ofSetColor(255);

  string messageText = "MOUWRAO";
  int fontSize = 98;
  font.load("frabk.ttf", fontSize, true, true, true);
  vector <ofPath> myWord = font.getStringAsPoints(messageText);
  float j;
  for (j=0; j< 7; j++){
    myWord[j].draw(300, 50);
  }
  
  float i;
  for (i=0; i< 100; i++){
    ofSetColor(255, 255, 255, 255 / (i* 0.1));
    
//  for (i=0; i< 100; i++){
//    ofPushMatrix();
//    ofTranslate(400, i * 8);
//    ofRotateYDeg(i*10);
//    ofNoFill();
//    ofDrawCircle(0,0,50);
//    ofPopMatrix();
//  }
    
//     this turns the whole word together
//    ofRotateYDeg(i);
    ofPushMatrix();
    float j;
    for (j=0; j< 7; j++){
       // this turns each letter more and more
      ofTranslate(0, i);
      ofRotateYDeg(i);
       // this turns each letter mroe and more, a lot!
       // ofRotateYDeg(j);
       myWord[j].draw(300, (i));
    }
    ofPopMatrix();
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
