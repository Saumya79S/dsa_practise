#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=371;
  int dup=n, sum=0;
  while(n>0){
    int last=n%10;
    sum += last*last*last;
    n = n/10;
  }
  if(sum==dup)  cout<<"true";
  else cout<<"false" ;
}