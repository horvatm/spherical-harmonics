#if !defined(__spher_harm_h)
#define __spher_harm_h

/*
  Library for calculating spherical harmonics 
    
    Y_n^m 

  for degrees
  
    n <= Fspher_nmax 
  
  where Fspher_nmax is defined in Fspher.h
  
  Author: Martin Horvat, January 2013

  Ref:
  * Abramowitz-Stegun Spherical harmonics: http://www.nr.com/aands/
  * GSL: htp://www.gnu.org/software/gsl/manual/html_node/
         Associated-Legendre-Polynomials-and-Spherical-Harmonics.html
  * http://en.wikipedia.org/wiki/Spherical_harmonics
  * http://mathworld.wolfram.com/SphericalHarmonic.html
*/

#include <cmath>
#include <complex>

#include "Fspher.h"

/*
  Calculation of spherical harmonics defined as
   
    Y_n^m(theta, phi) 
      = sqrt((2n+1)/(4pi)((n-m)!)/((n+m)!))P_n^m(cos(theta))exp(I m phi), 
   
   for given n degree and order m, where P_n^m are associated Legendre polynomials.
  
  Input:
    n - degree: 0, 1, .., nmax 
    m - order: m : - n, ..., n
    theta - angle [0, pi]
    phi - angle [0, 2pi)
    
  Return:
    Y_n^m - spherical harmonics
  
  Ref:
  * http://functions.wolfram.com/Polynomials/SphericalHarmonicY/02/
*/

template <class T> 
std::complex<T> SphericalHarmonicsY(
  const int &n, const int &m, 
  const T &theta, const T &phi){
              
  if (m == 0) return Fspher(n, 0, theta);

  T s, c;
  
  std::sincos(m*phi, &s, &c);
  
  // calc. sqrt{(2n+1)/(4\pi)} \sqrt{(n-m)!/(n+m)!} P_n^m(x)
  T f = Fspher(n, std::abs(m), theta);
  
  if (m > 0) return std::complex<T>(c*f, s*f);
 
  // Y_n^-m = (-1)^m (Y_n^m)^*
  return (m % 2 ? std::complex<T>(-c*f, -s*f) : std::complex<T>(c*f, s*f));
}


/*
  Calculation of the derivate of spherical harmonics
  
    d/d theta Y_n^m(theta, phi)
  
  for given n degree and order m.
  
  Input:
    n - degree: 0, 1, .., nmax 
    m - order: m : - n, ..., n
    theta - angle [0, pi]
    phi - angle [0, 2pi)
    
  Return:
    d/d theta Y_n^m(theta, phi)
  
  Ref: 
  * http://functions.wolfram.com/Polynomials/SphericalHarmonicY/20/01/01/0001/
*/
template <class T> 
std::complex<T> SphericalHarmonicsdYdtheta(
  const int &n, const int &m, 
  const T &theta, const T &phi){

  if (n == 0) return std::complex<T>(T(0),T(0));
  
  T s, c;
  
  std::sincos(m*phi, &s, &c);
  
  T f = dFspher(n, std::abs(m), theta);
  
  if (m > 0) return std::complex<T>(c*f, s*f);
    
  // Y_n^-m = (-1)^m (Y_n^m)^*
  return (m % 2 ? std::complex<T>(-c*f, -s*f) :std::complex<T>(c*f, s*f));
}

/*
  Calculation of the derivate of spherical harmonics
    
    d/d phi Y_n^m(theta, phi) = I m Y_n^m(theta, phi)
     
  for given n degree and order m.

  Input:
    n - degree: 0, 1, .., nmax 
    m - order: m : - n, ..., n
    theta - angle [0, pi]
    phi - angle [0, 2pi)
    
  Return:
    d/d phi Y_n^m(theta, phi)
*/

template <class T> 
std::complex<T> SphericalHarmonicsdYdphi(
  const int &n, const int &m, 
  const T &theta, const T &phi){

  if (m == 0) return std::complex<T>(T(0), T(0));
  
  return std::complex<T>(0.0, m)*SphericalHarmonicsY(n, m, theta, phi);
}

/*
  Calculation of the value and the derivate of spherical harmonics for 
  a given n degree and order m.
 
  Input:
    n - degree: 0, 1, .., nmax 
    m - order: m : - n, ..., n
    theta - angle [0, pi]
    phi - angle [0, 2pi)
    
  Output:
    Y[3] = (Y_n^m(theta, phi), d/d theta Y_n^m(theta, phi), d/d phi Y_n^m(theta, phi))
*/

template <class T> 
void SphericalHarmonicsY(
  const int &n, const int &m, 
  const T &theta, const T &phi, std::complex<T> Y[3]){
              
  if (m == 0) {
    Y[0] = Fspher(n, 0, theta);
    Y[1] = (n==0 ? T(0) : dFspher(n, 0, theta) );
    Y[2] = T(0);
    return;
  }
  
  T s, c;
  
  std::sincos(m*phi, &s, &c);
  
  // calc. sqrt{(2n+1)/(4\pi)} \sqrt{(n-m)!/(n+m)!} P_n^m(x)
  T f1 = Fspher(n, std::abs(m), theta), 
    f2 = dFspher(n, std::abs(m), theta);
  
  if (m > 0) {
    Y[0] = std::complex<T>(c*f1, s*f1);
    Y[1] = std::complex<T>(c*f2, s*f2);
    Y[2] = std::complex<T>(-m*Y[0].imag(), m*Y[0].real());
    return;
  }
  // Y_n^-m = (-1)^m (Y_n^m)^*
  if (m % 2){
    Y[0] = std::complex<T>(-c*f1, -s*f1);
    Y[1] = std::complex<T>(-c*f2, -s*f2);
    Y[2] = std::complex<T>(-m*Y[0].imag(), m*Y[0].real());
    return;
  }
  
  Y[0] = std::complex<T>(c*f1, s*f1);
  Y[1] = std::complex<T>(c*f2, s*f2);
  Y[2] = std::complex<T>(-m*Y[0].imag(), m*Y[0].real());
}


#endif
