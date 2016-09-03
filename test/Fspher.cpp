/*
  Testing the Fspher routines.

  Author: Martin Horvat, Januar 2013
  
  Compile:
    make Fspher

  Checking:
 
  Example 1:
    gnuplot> plot 'my_F_n=3m=2.dat' w l, '../F_n=3m=2.dat' w l
    gnuplot> plot 'my_F_n=3m=2.dat' u 1:3 w l, '../F_n=3m=2.dat' u 1:3 w l
  
  Example 2:
    gnuplot> plot 'my_F_n=10m=8.dat' w l, '../F_n=10m=8.dat' w l
    gnuplot> plot 'my_F_n=10m=8.dat' u 1:3 w l, '../F_n=10m=8.dat' u 1:3 w l
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>

#include "Fspher.h"

int main(){
  
  std::ofstream f;
  f << std::scientific;
  f.precision(16);  
  
  char str[255];
  
  // Example 1:
  int n = 3, m = 2;
  
  sprintf(str, "my_F_n=%dm=%d.dat", n,m);
  f.open(str);
  for (double theta = 0; theta <= M_PI; theta += 0.01)
    f << theta << ' ' << Fspher(n, m, theta) << ' ' << dFspher(n, m, theta) << '\n';
  f.close();
  
  
  // Example 2:
  n = 10, m = 8;
  
  sprintf(str, "my_F_n=%dm=%d.dat", n,m);
  f.open(str);
    
  for (double theta = 0; theta <= M_PI; theta += 0.01)
    f << theta << ' ' << Fspher(n, m, theta) << ' ' << dFspher(n, m, theta) << '\n';
  f.close();
  
       
  return EXIT_SUCCESS;  
}
