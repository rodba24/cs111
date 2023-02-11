#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;



void colSums(int first[][5], int second[], int r, int c) {
for (int i = 0; i < c; i++) {
second[i] = 0;
for (int j = 0; j < r; j++)
second[i] += first[j][i];
}
  }

  int main() {
int first[3][5] = {{9,9,8,1,0},{2,9,8,1,0},{1,1,8,1,0}};
int second[5];
colSums(first, second, 3, 5);
for (int i = 0; i < 5; i++) cout << second[i] << " "; // prints 12 19 24 3 0
cout << endl;
return 0;

  }
  