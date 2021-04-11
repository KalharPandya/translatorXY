#include<math.h>
#include<Arduino.h>
class translateXY
{
public:
    double fx, fy, ox, oy, currentTheta, targetTheta;
    translateXY();
    void setXY(double x, double y = 0);
    void setAngle(double ang = 0);
    void compute();
    double getX();
    double getY();
};