class Solution {
public:
    double countPow(double x, long long n) {
        if (n == 0) return 1.0;
        
        if (n % 2 == 0) {
            double half = countPow(x, n / 2);
            return half * half;
        } else {
            return x * countPow(x, n - 1);
        }
    }
    
    double myPow(double x, int n) {
        long long power = n; 
        
       
        if (power < 0) {
            power = -power;
        }
        
       
        double ans = countPow(x, power);
        
       
        if (n < 0) {
            return 1.0 / ans;
        }
        
        return ans;
    }
};