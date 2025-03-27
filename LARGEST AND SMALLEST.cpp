// EXP-6: LARGEST AND SMALLEST NUMBER 
// @Author B. GANGA BHAVANI GOUD,192212041
#include <reg51.h>

void main() {
    unsigned char numbers[] = {45, 34, 12, 56, 78, 23};
    unsigned char largest = numbers[0];
    unsigned char smallest = numbers[0];
    unsigned char i;

    for (i = 1; i < sizeof(numbers); i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    P0 = largest; // Output largest number to port 1
    P1 = smallest; // Output smallest number to port 2

    while (1);
}
