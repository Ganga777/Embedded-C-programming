// EXP-2: SUM OF FIRST 10 INTEGERS
// @Author B. GANGA BHAVANI GOUD,192212041
#include <reg51.h>

void main() {
    int sum = 0;
    int i;

    for(i = 1; i <= 10; i++) {
        sum += i;
    }
		P0=sum;

    while(1); 
}
