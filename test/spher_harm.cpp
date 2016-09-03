/*
  Testing routines for generating spherical harmonics and its derivatives 
  in spher_harm.h.

  Author: Martin Horvat, Januar 2013
  
  Compile: 
    make spher_harm
  
  Run: ./spher_harm
  
  Checking:
 
  Example 1:
    gnuplot> plot 'my_Y_n=6m=-5.dat' w l, '../test/Y_n=6m=-5.dat' w l
    gnuplot> plot 'my_Y_n=6m=-5.dat' u 1:3 w l, '../test/Y_n=6m=-5.dat' u 1:3 w l
    gnuplot> plot 'my_Y_n=6m=-5.dat' u 1:4 w l, '../test/Y_n=6m=-5.dat' u 1:4 w l
    gnuplot> plot 'my_Y_n=6m=-5.dat' u 1:5 w l, '../test/Y_n=6m=-5.dat' u 1:5 w l
   
  Example 2:
    gnuplot> plot 'my_Y_n=9m=-4.dat' w l, '../test/Y_n=9m=-4.dat' w l
    gnuplot> plot 'my_Y_n=9m=-4.dat' u 1:3 w l, '../test/Y_n=9m=-4.dat' u 1:3 w l
    gnuplot> plot 'my_Y_n=9m=-4.dat' u 1:4 w l, '../test/Y_n=9m=-4.dat' u 1:4 w l
    gnuplot> plot 'my_Y_n=9m=-4.dat' u 1:5 w l, '../test/Y_n=9m=-4.dat' u 1:5 w l
 
  Example 3:
    gnuplot> plot 'my_Y_n=9m=4.dat' w l, 'Y_n=9m=4.dat' w l
    gnuplot> plot 'my_Y_n=9m=4.dat' u 1:3 w l, '../Y_n=9m=4.dat' u 1:3 w l
    gnuplot> plot 'my_Y_n=9m=4.dat' u 1:4 w l, '../Y_n=9m=4.dat' u 1:4 w l
    gnuplot> plot 'my_Y_n=9m=4.dat' u 1:5 w l, '../Y_n=9m=4.dat' u 1:5 w l
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>

typedef double myreal;

#include "spherical_harmonics.h"

template < class T>
std::ostream& operator<< ( std::ostream& os, const std::complex<T> & z ) {
  os << z.real() << ' ' << z.imag();
  return os;
}

int main(){
  
  #if 0
  std::cout << std::scientific;
  std::cout.precision(16);  

  myreal theta = 0.1,
         phi = 0.6;
         
  std::cout  
    << SphericalHarmonicsY(9, 4, theta, phi) << ' ' 
    << SphericalHarmonicsdYdt(9, 4, theta, phi) << '\n'
    << SphericalHarmonicsY(9, -4, theta, phi) << ' ' 
    << SphericalHarmonicsdYdt(9, -4, theta, phi) << '\n';
    
  #else
  
  std::ofstream f;
  f << std::scientific;
  f.precision(16);  
  
  char str[255];
  
  // Example 1:
  int n = 6, m = -5;
  myreal phi = 0.6;
    
  sprintf(str, "my1_Y_n=%dm=%d.dat", n,m);
  f.open(str);
  for (myreal theta = 0; theta <= M_PI; theta += 0.01)
    f << theta << ' ' 
        << SphericalHarmonicsY(n, m, theta, phi) << ' ' 
        << SphericalHarmonicsdYdtheta(n, m, theta, phi) << '\n';
  f.close();
  
  
  // Example 2:
  n = 9, m = -4;
  
  sprintf(str, "my1_Y_n=%dm=%d.dat", n,m);
  f.open(str);
    
  for (myreal theta = 0; theta <= M_PI; theta += 0.01)
    f << theta << ' ' 
        << SphericalHarmonicsY(n, m, theta, phi) << ' ' 
        << SphericalHarmonicsdYdtheta(n, m, theta, phi) << '\n';
        
  f.close();
  
  
    // Example 3:
  n = 9, m = 4;
  
  sprintf(str, "my1_Y_n=%dm=%d.dat", n,m);
  f.open(str);
    
  for (myreal theta = 0; theta <= M_PI; theta += 0.01)
    f << theta << ' ' 
        << SphericalHarmonicsY(n, m, theta, phi) << ' ' 
        << SphericalHarmonicsdYdtheta(n, m, theta, phi) << '\n';
        
  f.close();
  #endif
       
  return EXIT_SUCCESS;  
}
