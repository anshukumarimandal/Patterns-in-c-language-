#include <stdio.h>
#include <math.h>

int main() {
    int x, y, r;

    printf("Enter radius: ");
    scanf("%d", &r);

    for (y = -r; y <= r; y++) {
        for (x = -r; x <= r; x++) {
            if (x*x + y*y <= r*r)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}