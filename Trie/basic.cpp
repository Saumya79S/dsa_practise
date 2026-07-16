#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
  Node* links[26];
  bool flag=false;
  bool containskey(Node* node,char ch){
    return (node->links[ch-'a']!=NULL);
  }
  void put(char ch, Node* node){
    links[ch-'a']=node;
  }
  Node* get(char ch){
    return links[ch-'a'];
  }
}

class Trie{
  private:
  Node* root;
  public:
  Trie(){
    root=new Node();
  }

  void insert(string word){
    Node* node=root;, 
    for(int i=0; i<word.length();i++){
      if(!node->containskey(word[i])){
        node->put(word[i],new Node());
      }
      node=node->get(word[i]);
    }
    node->flag=true;
  }
}
int main(){
}