#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        n--;
    }

    for (int i = 2; i <= n; i += 2) {
        sum += i * i;
    }


    printf("The sum of the even squares series is: %d\n", sum);

    return 0;
}

