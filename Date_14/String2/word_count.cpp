#include <bits/stdc++.h>

using namespace std;

int main() {

  string str = "HI AMY AND JAY";

  word_count(str);
  
}
void word_count(String str){
    int spaces=0;
    for(int i=0; i<str.size(); i++){
      if(str[i]==' ')
        spaces = spaces+1;
  }
  return spaces+1; // +1 for last word count
  
}
