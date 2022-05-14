#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
          cout<<"True";
          return 0;
        }
    }
    cout<<"False";
    
}
