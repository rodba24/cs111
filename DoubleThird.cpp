#include <iostream>
using namespace std;

int third(int n){
  if (n<100) return n;
  int last= n%10*10+n%10;
  if(n>99 && n<1000) return third(n/10)*100+last;
  return third(n/10)*10+n%10;
}
int main(){
  int x;
  cin>>x;
  cout<<third(x);
}