#include <stdio.h>

int primo(int);

int main() {
    int x;
    scanf("%d", &x);
    int answer = primo(x);
    if (answer == 1) {
        printf("!PRIMO");
    } else {
        printf("PRIMO");
    }
    return 0;
}

int primo(int n) {
    int result = 0;
    if (n < 1)
        result = 1;

    for (int i = 2; i < n; ++i) {
        if (n % i == 0)
            result = 1;
    }
    return result;
}