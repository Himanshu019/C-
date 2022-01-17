// Program to extract words from an input string using stringstream
#include<bits/stdc++.h>

void main(){
  string s, words;
  getline(cin,s);
  
  stringstream i(s);
  
  while(i >> words){
    cout << words << endl;
  }
}
