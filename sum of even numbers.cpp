


#include <stdio.h>

int main() {
    int n, sum, k;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        n--;
    }

    k = n / 2;

    sum = k * (k + 1);
    printf("The sum of the even number series is: %d\n", sum);

    return 0;
}


