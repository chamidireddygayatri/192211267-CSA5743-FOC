#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("The sum of the squares series is: %d\n", sum);

    return 0;
}

