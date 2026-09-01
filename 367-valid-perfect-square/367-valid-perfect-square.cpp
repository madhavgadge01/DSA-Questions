class Solution {
public:
    bool isPerfectSquare(int num) {
       int low =0;
       int high=num;
    while(low<=high){
        int mid = low+(high-low)/2;
        long long product = 1LL * mid * mid;
        if(product == num){
            return true;
        }else if(product<num){
            low =mid+1;
            }else{
                high=mid-1;
            }
    }
    return false;
    }
};