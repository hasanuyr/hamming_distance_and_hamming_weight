#include <stdio.h>
#include <stdint.h>
int hammingWeightCalculate(uint32_t number ) {
    int returnVal  = number & 1;

    while (number >>= 1){
        returnVal =returnVal + (n & 1);
    }
    return returnVal;
}

int main()
{
    printf("Hamming Weight of 10101100 is : %d \n",hammingWeightCalculate(0b10101100));
    return 0;
}
