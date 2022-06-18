#include <cmath>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        /* newton's method
        y**2 = a
        f(y) = y**2 - a
        f'(y) = 2y
        y1 = y0 - f(y)/f'(y), 
        equal to 
        y1 = y0 - (y0**2-a) / 2y0  
            */
        double y0 = 4;
        double y1 = 0;
        for(int i=0; i<=30; i++){
            y1 = y0 - (y0 * y0 - x)/(2*y0);
            y0 = y1;
        }
        return trunc(y1);
    }
};