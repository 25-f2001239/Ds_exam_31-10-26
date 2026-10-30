#include <stdio.h>

int main(void) {
    char a[201], b[201];
    scanf("%200s%200s", a, b);

    int i = 0;
    while (a[i] != '\0') {
        i++;                 // Find the end of a
    }

    int j = 0;
    while (b[j] != '\0') {
        a[i] = b[j];         // Copy b's characters after a
        i++;
        j++;
    }

    a[i] = '\0';             // End the combined string
    puts(a);

    return 0;
}