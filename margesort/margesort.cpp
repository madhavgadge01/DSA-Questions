#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>&arr,int st,int mid,int end){
    vector <int>temp;
    int i = st,j=mid+1;
    while(i<=mid && j<= end){
if(arr[i]<=arr[j]){
    temp.push_back(arr[i]);
    i++;
}

else if(arr[i]>=arr[j]){
     temp.push_back(arr[j]);
     j++;
}
    }

    while (i<=mid)
    {
        temp.push_back(arr[i]);
    i++;
    }
      while (j<=end)
    {
        temp.push_back(arr[j]);
    j++;
    }

    for(int idx =0;idx<temp.size();idx++){
        arr[idx+st]=temp[idx];
    }
    

}
void mergeshort(vector <int>&arr,int st ,int end){
if(st<end){
    int mid = st+(end-st)/2;
    mergeshort(arr,st,mid);
    mergeshort(arr,mid+1,end);
    merge(arr,st,mid,end);
}

}
int main(){
    vector <int>arr={12,31,44,2,67,23,109,34,1};

mergeshort(arr,0,arr.size()-1);

for(int val:arr){
cout<<val<<endl;
}
    return 0;
}
