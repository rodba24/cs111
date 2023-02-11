#include <iostream>
#include<cstdlib>
using namespace std;



void bookEndString(string &s, int num){
    // declare empty string temp
    string temp = "";
    // if first and last character are same
    if (s[0] == s[s.length()-1]){
        char ch = s[0];
        // write first character of string into temp, num times
        for(int i = 0; i < num; i++){
            temp += ch;
        }
    }
    else{
        // if first and last characters are not same, write 'Z' in temp, num times
        char ch = 'Z';
        for(int i = 0; i < num; i++){
            temp += ch;
        }
    }
    // add temp in starting and ending of the string
    s = temp + s + temp;
}
int main(){
  string s= "test";
  string t ="fun";
  bookEndString(s, 3);
  bookEndString(t, 3);
  cout<< s<<endl;
  cout<<t<<endl;
}