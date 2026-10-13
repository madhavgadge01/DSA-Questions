class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        if (n == 0) return 0;
        
        int count = 0;
        
      
        vector<int> prefixSum(n);
        prefixSum[0] = arr[0];

        // 2. Loop '1' se start kiya taaki i-1 negative na ho
        for(int i = 1; i < n; i++){
            prefixSum[i] = prefixSum[i-1] + arr[i];
        }
        
        unordered_map<int,int> m;
        for(int j = 0; j < n; j++){
            if(prefixSum[j] == k) count++;
            
            int val = prefixSum[j] - k;
            if(m.find(val) != m.end()){
                count += m[val];
            } 

            // C++ me m[prefixSum[j]]++ direct kaam karta hai, if wali check ki zaroorat nahi
            m[prefixSum[j]]++;
        }
     
        return count;
    }
};