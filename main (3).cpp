#include <iostream>
using namespace std;

int evendigits (int n) {
  int t= n%10;
  if(t%2==0) t=t+1;
  if (n<10) return t;
  else return evendigits(n/10)*10+t;
}

int main (){
  int x= 2468;
  cout<< evendigits(x);
}