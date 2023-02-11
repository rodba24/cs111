#include <iostream>
using namespace std;
int main(){
  
  int a[5];
  cout<< "Enter 5 numbers: ";
  for(int i=0; i<5; i++){
    cin>> a[i];
  }
  int temp= a[5-1];
  for(int i=4; i>0; i--){
    a[i]= a[i-1];
  }
  a[0]= temp;
cout<<"Shifted array: ";
  for(int i=0; i<5; i++)
    cout<<a[i]<<" ";
}