// EXP-23: find and store all prime numbers between 1 and 50 in an array.  
// @Author B. GANGA BHAVANI GOUD,192212041

#include <reg51.h>
void main() {
 unsigned char primes[50];
 unsigned char i, j, count = 0;
 bit isPrime;
 for (i = 2; i <= 50; i++) {
 isPrime = 1;
 for (j = 2; j * j <= i; j++) {
 if (i % j == 0) {
 isPrime = 0;
 break;
 }
 }
 if (isPrime) {
 primes[count++] = i;
 }
 }
 while (1);
}
