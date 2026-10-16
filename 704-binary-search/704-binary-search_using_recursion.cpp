class Solution {
public:

int binarySearch(vector<int>& arr, int target,int st ,int end){
   if(st<=end){
        int mid = st +(end-st)/2;

    if(arr[mid]==target){
        return mid;
        }
    else if(arr[mid]<=target){
       return binarySearch(arr,target,mid+1,end);
    } else{
         return binarySearch(arr,target,st,mid-1);
    }
   }
   return -1;
}
    int search(vector<int>& arr, int target) {
     return binarySearch(arr,target,0,arr.size()-1);
    }
};