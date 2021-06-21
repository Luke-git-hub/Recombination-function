//Function
#include <math.h>       /* log */
#include <iostream>
using namespace std;

float recombination (float E, float F, float rho)
{
  float r;
  float i;
  float j;
  i=(0.930 + (0.212/(F * rho))*(E));
  r= log(i);
  j= r / (0.212 / ( F * rho));
  return j;
}

int main ()
{
  float z;
  z = recombination (1, 1, 1);
  cout << "The result is " << z;
}