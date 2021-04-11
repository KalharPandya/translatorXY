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
    translateXY::mag = sqrt(pow(x,2) + pow(y,2));
    if(fx==0){
        translateXY::targetTheta=1.57;
    }
    else
        translateXY::targetTheta = atan(translateXY::fy/translateXY::fx);
}
void translateXY::setAngle(double a){
    // Serial.println(a);
    translateXY::currentTheta = degreeToRadian(a);
}

void translateXY::compute(){
    translateXY::diff = translateXY::targetTheta - translateXY::currentTheta;
    // Serial.println(translateXY::currentTheta);
    translateXY::ox = translateXY::mag*cos(translateXY::diff);
    translateXY::oy = translateXY::mag*sin(translateXY::diff);
    }

double translateXY::getX(){
    return translateXY::ox;
}
double translateXY::getY(){
    return translateXY::oy;
}