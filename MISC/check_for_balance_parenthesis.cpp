#include<iostream>
using namespace std;

bool checkForValidParin(string s) {

  int starting = 0, ending =0;
  int n = s.size();

  for(int i=0; i<n; i++) {

    if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        starting++;

    else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
        ending++;
    
    if(ending > starting)
        return false;
    
  }
    if(starting == ending)
        return 1;
    else
        return 0;
    
}
//It is purely a stack problem 
int main() {
  string s = "({)}";
  if(checkForValidParin(s))
    cout<<"Yes";
  else
    cout<<"No";
}