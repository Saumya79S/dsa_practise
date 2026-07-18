#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> arr={43,5,23,64,12,76,34,87,90};
  for(int i=0; i<arr.size()-1-i;i++){
    for(int j=0; j<arr.size()-1-i; j++){
      if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
    }
  }
  for(auto &i:arr){
    cout<<i<<" ";
  }
  return 0;
}