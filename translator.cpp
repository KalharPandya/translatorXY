#include "translator.h"
double degreeToRadian(double t){
    return (t/180)*3.14;
}
translateXY::translateXY(){
    translateXY::fx = 0;
    translateXY::fy = 0;
    translateXY::currentTheta = 0;
    translateXY::targetTheta = 0;
}

void translateXY::setXY(double x, double y){
    translateXY::fx = x;
    translateXY::fy = y;
}
void translateXY::setAngle(double a){
    // Serial.println(a);
    translateXY::currentTheta = degreeToRadian(a);
}

void translateXY::compute(){
    // Serial.println(translateXY::currentTheta);
    translateXY::ox=translateXY::fx*cos(translateXY::currentTheta)+translateXY::fy*sin(translateXY::currentTheta);
    translateXY::oy=translateXY::fy*cos(translateXY::currentTheta)+translateXY::fx*sin(translateXY::currentTheta);
}

double translateXY::getX(){
    return translateXY::ox;
}
double translateXY::getY(){
    return translateXY::oy;
}