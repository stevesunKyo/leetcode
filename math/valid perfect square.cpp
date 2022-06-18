#include <cmath>

class Solution {
public:
    double newton(double a){
        double x1;
        double x0 = 5;
        for(int i=0; i<=30;i++){
            x1 = x0 - (x0*x0-a)/(2*x0);
            x0 = x1;
        }
        return x1;
    }

    bool isPerfectSquare(double num) {
        double newton_result = newton(num);
        double integer_result = round(newton_result);
        if ((abs(newton_result - integer_result)/integer_result) < 1e-10){
            return true;
        }
        else{
            return false;
        }
    }
};