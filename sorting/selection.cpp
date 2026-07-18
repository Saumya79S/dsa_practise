#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> arr={43,5,23,64,12,76,34,87,90};
  int n=arr.size();
  for(int i=0; i<n; i++){
   int temp=i;
   int mini=arr[i];
   for(int j=i+1; j<n ; j++){
    if(arr[j]<mini){
      mini=arr[j];
      temp=j;
    }
   }
   swap(arr[i],arr[temp]);
  }
  for(auto &i:arr){
    cout<<i<<" ";
  }
  return 0;
}