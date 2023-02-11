#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
  srand(time(0));
  char a[3][3];
  for(int i=0; i<3;i++){
    for(int j=0; j<3; j++){
      a[i][j]= 'a'+ rand()% ('z'-'a'+1);
    }
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<< a[i][j]<< " ";

    }
    cout<<endl;
  }
  int count=0;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u') count ++;        
      }
}
  cout<< "# of Vowels: "<<count<<endl;
  }

  
