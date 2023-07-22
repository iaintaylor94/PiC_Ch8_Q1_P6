/* Function to find the greatest common divisor of two non-negative intiger values and return the result */

#include <stdio.h>

// Declare Functions
int gcd (int, int);

int main(void) {

  // Declare result
  int result;
  
  // Use Functions
  result = gcd (150,35);
  printf ("The gcd of 150 and 35 is %d\n",result);

  result = gcd (1026, 405);
  printf ("The gcd of 1026 and 405 is %d\n", result);

  printf ("The gcd of 83 and 240 is %d\n", gcd (83, 240));
  
  return 0;
}

// Define Functions
int gcd (int u, int v) {
  int temp;

  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }

  return u;
}