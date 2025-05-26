#include <stdio.h>

int myPow(int x, int n) {
    int number = 1;
    for (int i = 0; i < n; ++i)
        number *= x;
    return number;
}

int main() {
    int bin = 10110; 
    int decimal = 0;
    int position = 0;

    while (bin > 0) {
        int last = bin % 10;
        decimal += last * myPow(2, position);
        position++;
        bin /= 10;
    }

    printf("Decimal value: %d\n", decimal);
    return 0;
}
