#include <stdio.h>
#include <stdlib.h>
int main() {
    float number1 = (float)1/(float)(3) + (float)1/(float)(3) + (float)1/(float)(3);
    float number2 = 1;

    if(number1 == number2)
    {
        printf("%f is equal to %f\n", number1, number2);
    }
    else{
        printf("%f is not equal to %f\n", number1, number2);
    }

    return 0;
}