#include <stdio.h>
#include <string.h>

int main(void) {
    char s[500], p[100];
    scanf("%499s%99s", s, p);

    int sLength = strlen(s);
    int pLength = strlen(p);
    int found = 0;

    for (int i = 0; i <= sLength - pLength; i++) {
        int j = 0;

        while (j < pLength && s[i + j] == p[j]) {
            j++;
        }

        if (j == pLength) {
            printf("%d ", i + 1);  // +1 gives a 1-based position
            found = 1;
        }
    }

    if (!found) {
        puts("Not found");
    }

    return 0;
}