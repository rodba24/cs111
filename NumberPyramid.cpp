#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for (int r=1; r<=n; r++){
    for(int blank=1; blank<=n-r; blank++){
      cout<<" ";
    }
    for(int c=1; c<=r; c++){
      cout<<c <<" ";
    }
    cout<<endl;
    }
  }