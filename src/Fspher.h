#if !defined(__Fspher_h)
#define __Fspher_h

/*
  Library for calculation of weighted associated Legendre polynomials of first kind
   
    F[n_, m_, theta_] =  Sqrt[(2 n + 1) (n - m)!/(4 Pi (n + m)!)] LegendreP[n, m, Cos[theta]].
  
    LegendreP_n^m(x) = (-1)^m(1-x^2)^(m/2)(d^m)/(dx^m)LegendreP_n(x)
   
  and it derivative w.r.t to theta
  
    dF[n_, m_, theta_] = D[F[n, m, theta], theta]
  
  for degree
  
    n <= Fspher_nmax and m in [0,n]
  
 
  Author: Martin Horvat, January 2013

  Ref:
  
  * Abramowitz stegun Legendre polynomials: http://people.math.sfu.ca/~cbm/aands/page_331.htm
  * GSL: htp://www.gnu.org/software/gsl/manual/html_node/
         Associated-Legendre-Polynomials-and-Spherical-Harmonics.html
*/

#include "sincos.h"

// these files are generated by Mathematica notebook Fspher.nb
#include "dFspher_costheta_ge_sintheta.h"
#include "dFspher_costheta_le_sintheta.h"
#include "Fspher_costheta_ge_sintheta.h"
#include "Fspher_costheta_le_sintheta.h"

// maximal supported degree of weighted Legendre polynomials
int Fspher_nmax = 10;  // = nmax

/*
  Calculating rescaled associated Legendre polynomials
  
    F[n_, m_, theta_] = Sqrt[(2 n + 1) (n - m)!/(4 Pi (n + m)!)] P[n, m, Cos[theta]].
  
  Supporting calculation only for n <= nmax (nmax= 10) and m>=0.
  
  Input:
    n - degree: 0, 1, .., nmax
    m - order: 0, ..., n 
    theta: angle : [0, pi]
  Return:
    value of F[n,m,theta]
*/

template <class T>
T Fspher(const int &n, const int &m, const T &theta){
  
  if (theta < T(M_PI_4) || theta > T(3*M_PI_4)) 
    return Fspher_costheta_ge_sintheta(n, m, theta);
  
  return Fspher_costheta_le_sintheta(n, m, theta);
}

/*
  Calculating derivative of the rescaled associated Legendre polynomials
    
    dF[n_, m_, theta_] = D[F[n, m, theta], theta]
     
  Supporting calculation only for 0<=n <= nmax (nmax= 10) and m>=0.
  
  Input:
    n - degree: 0, 1, .., nmax
    m - order: 0, ..., n 
    theta: angle : [0, pi]
  
  Return:
    value of dF[n, m, theta]
*/

template <class T>
T dFspher(const int &n, const int &m, const T &theta){
  
  if (theta < T(M_PI_4) || theta > T(3*M_PI_4))  return dFspher_costheta_ge_sintheta(n, m, theta);
  
  return dFspher_costheta_le_sintheta(n, m, theta);
}

#endif // __Fspher_h
