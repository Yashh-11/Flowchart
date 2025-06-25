#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter four numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Nested if...else to find maximum
    if (a > b) {
        if (a > c) {
            if (a > d)
                printf("Maximum number is: %d (entered as 'a')\n", a);
            else
                printf("Maximum number is: %d (entered as 'd')\n", d);
        } else {
            if (c > d)
                printf("Maximum number is: %d (entered as 'c')\n", c);
            else
                printf("Maximum number is: %d (entered as 'd')\n", d);
        }
    } else {
        if (b > c) {
            if (b > d)
                printf("Maximum number is: %d (entered as 'b')\n", b);
            else
                printf("Maximum number is: %d (entered as 'd')\n", d);
        } else {
            if (c > d)
                printf("Maximum number is: %d (entered as 'c')\n", c);
            else
                printf("Maximum number is: %d (entered as 'd')\n", d);
        }
    }

    return 0;
}
