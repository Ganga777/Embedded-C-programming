// EXP-24: reverse the digits of a 16-bit number and store the result in memory. 
// @Author B. GANGA BHAVANI GOUD,192212041

#include <reg51.h>
void main() {
 unsigned int num = 1234; // Example 16-bit number
 unsigned int rev = 0;

 while (num > 0) {
 rev = (rev * 10) + (num % 10);
 num /= 10;
 }
 while (1);
}
