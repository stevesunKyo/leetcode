class Solution {
public:
    double myPow(double x, int n) {
        if (n==0){
            return 1;
        }
        else if (n > 0 and n%2 == 1){
            // 正奇数
            return myPow(x, n-1)*x;
        }
        else if (n%2 == 0){
            // 正偶数
            return myPow(x*x, n/2);
        }
        else{
            return myPow(x, n+1)/x;
        }
    }
};

