#include <stdio.h>

int main(void) {
    int numbers[1000];
    int n;

    scanf("%d", &n);

    if (n < 1 || n > 1000) {
        return 1;
    }

    /* Fill the array with 1, 2, 3, ..., n */
    for (int i = 0; i < n; i++) {
        numbers[i] = i + 1;
    }

    int count = n;

    /* Keep removing numbers until only one remains */
    while (count > 1) {
        int step = numbers[1];  // The second number tells us the step size
        int newCount = 0;

        if (step > count) {
            break;
        }

        /* Keep numbers whose positions are not multiples of step */
        for (int i = 0; i < count; i++) {
            if ((i + 1) % step != 0) {
                numbers[newCount] = numbers[i];
                newCount++;
            }
        }

        count = newCount;
    }

    /* Check whether n is still in the array */
    int isLucky = 0;

    for (int i = 0; i < count; i++) {
        if (numbers[i] == n) {
            isLucky = 1;
            break;
        }
    }

    if (isLucky) {
        printf("Lucky\n");
    } else {
        printf("Not lucky\n");
    }

    return 0;
}