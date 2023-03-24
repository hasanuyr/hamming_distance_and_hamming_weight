#include <stdio.h>
#include <stdint.h>
int hammingDistanceCalculate(uint32_t n_1 , uint32_t  n_2){
    int returnVal=0;
    int exor_numb =n_1 ^ n_2;

    while(exor_numb){
        returnVal += exor_numb & 1;
        exor_numb = exor_numb>> 1;
    }
    return returnVal;
}
int main()
{
    int n1 =0b10110101;
    int n2 =0b11001111;
    printf("\n\n\nnumber_1:10110101\nnumber_2:11001111 ");
    printf("\nHD of two numbers is : %d\n\n\n\n\n\n\n\n", hammingDistanceCalculate(n1,n2));
    return 0;
}
