#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void summiddle(int a[][2], int b[], int r, int c){
  for(int r=0; r<3; r++){
    int sum=0;
    for(int c=0; c<2; c++){
      sum= sum+ (a[r][c]/10)%10;
      b[r]= sum;
    }
  }
}


  int main(){
int a[3][2]= {{147, 823},{273, 490},{189, 435}};
int b[3]={0};
  summiddle(a,b,3,2);
  for(int i=0; i<3; i++){
    cout<<b[i]<<" ";
  }
    }


