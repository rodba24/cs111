#include <iostream>
using namespace std;

int remove0(int x)
{
  if(x<10) return x;
  else if(x%10==0) return remove0(x/10);
  else return remove0(x/10)*10+x%10;
  
}

int main()
{
  int n;
  cout<<"Enter a number with zeros: ";
  cin>>n;
  cout<< remove0(n);
  
}
