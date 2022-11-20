//bitwise operator
#include <stdio.h>

int main() {

    int a = 12, b = 25;
    printf("Output = %d", a & b);//and operator
    printf("Output = %d", a | b);//or operator
    printf("Output = %d", a ^ b);//XOR
    printf("Output = %d", ~b); // compliment

    return 0;
}