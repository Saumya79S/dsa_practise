#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> arr={6,2,3,4,7,2,1,7,1};
  int lsum=0, rsum=0, k=4,n=arr.size()-1, Tsum=0;
  int temp=k;
  while(temp>=0){
    lsum+=arr[temp];
    temp--;
  }
  Tsum=lsum;
  while(n>n-k){
    rsum+=arr[n];
    lsum-=arr[k];
    n--;
    k--;
    Tsum=max(Tsum,lsum+rsum);
  }
  cout<<Tsum;

}