#include <cmath>

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1){
            return false;
        }
        else{
            int root = ceil(sqrt(num));
            int qiuhe = 1;
            for (int i = 2;i<root; i++){
                if (num%i ==0){
                    qiuhe = qiuhe + i + num/i;
                }
            }
            if (qiuhe == num){
                return true;
            }
            else{
                return false;
            }
        }
    }
};

/* Brute force, but too long
int qiuhe = 0;
        for (int i = 1;i<num; i++){
            if (num%i ==0){
                qiuhe = qiuhe + i;
            }
        }
        if (qiuhe == num){
            return true;
        }
        else{
            return false;
        }



*/

