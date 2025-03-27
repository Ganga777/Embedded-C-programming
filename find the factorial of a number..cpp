// EXP-21:    find the factorial of a number.
// @Author B. GANGA BHAVANI GOUD,192212041

#include <reg51.h>
volatile unsigned char num = 5; // Prevents compiler optimization
unsigned int factorial(unsigned char n) {
 unsigned int fact = 1;
 unsigned char i;
 for (i = 1; i <= n; i++) {
 fact *= i;
 }
 return fact;
}
void main() {
 unsigned int result;
 result = factorial(num);
 while (1);
}
