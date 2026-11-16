class Solution {
public:
    void totalCount(vector<int>& nums,int i,int &count,int &currOR,int maxOR){

       if (i == nums.size()) {
    if (currOR == maxOR) {
        count++;
    }
    return;
}
 
int oldOR = currOR;
currOR |= nums[i];

    totalCount(nums,i+1,count,currOR,maxOR);
currOR = oldOR;

totalCount(nums, i+1, count, currOR, maxOR);
    

    }
    int countMaxOrSubsets(vector<int>& nums) {
        int count =0;
        int currOR =0;
    int maxOR = 0;
for(auto x : nums){
    maxOR |= x;
}

        totalCount(nums,0,count,currOR,maxOR);
        return count;
    }
};