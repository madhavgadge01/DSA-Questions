class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count =0;

        for(int i = 0;i<nums.size();i++){
            int ele;
            ele = nums[i];
           int eleCount=0;
            while(ele>0){

                eleCount++;
                ele = ele/10;
            }
     if(eleCount%2==0){
        count++;
     }
        }
        return count;
    }
};