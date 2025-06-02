#include "main.h"
// Saving myself a headache (again)
using namespace std;
// code stolen DIRECTLY from
//https://www.geeksforgeeks.org/rounding-floating-point-number-two-decimal-places-c-c/


float fround(float roundvar)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the 
    // value converted into 37.67
    float value = (int)(roundvar * 10000.0 +.5);
    return value / 10000.0;
   
}