#include <iostream>
using namespace std;

void fact(int n){
    if(n==0){
        
        return 1;
    }
   return n*fact(n-1);
}
int main(){
    cout<<fact(4)<<endl;;
    return 0;

}