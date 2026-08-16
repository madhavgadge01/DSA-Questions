// 1431-Kids-With-the-Greatest-Number-of-Candies leetcode problem

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        for(int i = 0;i<candies.size();i++){
           int maxCandies = *max_element(candies.begin(), candies.end());

        if(candies[i]+extraCandies>=maxCandies){
         ans.push_back(true);
        }else{
            ans.push_back(false);
        }
        }
return ans;

    }
};