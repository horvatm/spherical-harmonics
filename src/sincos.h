#if !defined(__sincos_h)
#define __sincos_h

/*
  Defining sincos function for different types in std namespace:
  * 
    float
    double
    long double
    
  Double is enabled by pseudo-asm code and TESTED on AMD64 system!
  
  Routines are inlined so that multiple inclusion of .h is not a problem.
  
  Author: Martin Horvat, November 2013
*/
 
namespace std {
 
 inline void sincos(const float &theta, float *s, float *c){
   sincosf(theta, s, c);
 }
  
 inline void sincos(const double &theta, double *s, double *c){
   asm volatile("fsincos" : "=t" (*c), "=u" (*s) : "0" (theta) : "st(7)");
 }
  
 inline void sincos(const long double &theta, long double *s, long double *c){
   sincosl(theta, s, c);
 }
}

#endif // if defined(__sincos_h)
