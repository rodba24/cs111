//Khondoker Rodba Yasmin

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	
	srand(time(0));
	int mat[5][4];
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			mat[i][j] = 10 + rand()%90;
		}
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			cout<<mat[i][j]<<" ";
		}cout<<endl;
	}
    int smallestGap;
  for(int i=0; i<4; i++){
    smallestGap= mat[1][i]- mat[0][i];
    if (smallestGap<0) smallestGap= -smallestGap;
    for(int j=0; j<5; j++){
      int gap= mat[j][i]- mat[j+1][i];
      if (gap<0) gap=-gap;
      if(gap<smallestGap) smallestGap= gap;
    }
    cout<<"Min gap in column "<<i << " : "<< smallestGap<<endl; 
  }
  
  int count= 0;
    double sum=0;
  for(int i=0; i<5; i++){
    for(int j=0; j<4; j++){
      if(mat[i][j]%2==0) count++;
      sum= sum+ mat[i][j];
    }
  
  }
  
    double average = sum/count;
    cout<<"Average of even numbers: "<< average<<endl;

  
  }
