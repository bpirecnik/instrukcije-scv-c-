#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
  float tab[2][20];

  /*
  tab[3][4]
     0    1   2  3   4
  0 [23][43][17][76][99]
  1 [33][53][55][  ][  ]


nakljucna = 3;

tab[1][2] = tab[0][2] + 10;

tab[3][27] = 13;

tab[0][2] = 17;

  */
  
  for(int i=0; i<20; i++){
    cout<<"Vnesi " << i << " stevilo: "<< endl;
    cin >> tab[0][i];
  }

  srand(time(NULL));
  int nakljucna = rand()%17 + 3;

  for (int i = 0; i < nakljucna; i++) {
    tab[1][i] = tab[0][i] + 10;
  }

  for(int x = 0; x<2; x++){
    for(int y = 0; y<20; y++){ 
      cout << tab[x][y] << "  ";
    }
    cout << endl;
  }
  
  /*
  for(int x = 0; x<3; x++){
    for(int y = 0; y<5; y++){
      cout<<"Vnesi stevilo: "<< endl;
      cin >> tab[x][y];
    }
  }

  for(int x = 0; x<3; x++){
    for(int y = 0; y<5; y++){
      cout << "[" << tab[x][y] << "] ";
    }
    cout << endl;
  }
  */
}