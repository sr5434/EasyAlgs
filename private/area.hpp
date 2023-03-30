#define _USE_MATH_DEFINES
 
#include <cmath>
//Area related formulas
class area
{
public:
    float circle(float radius){
        return pow((M_PI*radius), 2);
    }
    float rectangle(float width, float length){
        return width*length;
    }
    float triangle(float base, float height){
        return (base*height)/2.0;
    }
    float trapezoid(float base1, float base2, float height){
        return ((base1+base2)/2)*height
    }
}

