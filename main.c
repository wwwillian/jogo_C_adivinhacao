#include <stdio.h>

int main() {
    int lucky;
    scanf("%d", &lucky);

    for (int i = 0; i <= 10; i++) {
        printf("%d x 2 = %d \n", lucky, lucky * i);
    }
}
