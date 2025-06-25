#include <stdio.h>

int main() {
    int a, b, c, d, e;

    printf("Enter five numbers:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // Start nested if...else to find maximum
    if (a > b) {
        if (a > c) {
            if (a > d) {
                if (a > e)
                    printf("Maximum number is: %d (entered as 'a')\n", a);
                else
                    printf("Maximum number is: %d (entered as 'e')\n", e);
            } else {
                if (d > e)
                    printf("Maximum number is: %d (entered as 'd')\n", d);
                else
                    printf("Maximum number is: %d (entered as 'e')\n", e);
            }
        } else {
            if (c > d) {
                if (c > e)
                    printf("Maximum number is: %d (entered as 'c')\n", c);
                else
                    printf("Maximum number is: %d (entered as 'e')\n", e);
            } else {
                if (d > e)
                    printf("Maximum number is: %d (entered as 'd')\n", d);
                else
                    printf("Maximum number is: %d (entered as 'e')\n", e);
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                if (b > e)
                    printf("Maximum number is: %d (entered as 'b')\n", b);
                else
                    printf("Maximum number is: %d (entered as 'e')\n", e);
            } else {
                if (d > e)
                    printf("Maximum number is: %d (entered as 'd')\n", d);
                else
                    printf("Maximum number is: %d (entered as 'e')\n", e);
            }
        } else {
            if (c > d) {
                if (c > e)
                    printf("Maximum number is: %d (entered as 'c')\n", c);
                else
                    printf("Maximum number is: %d (entered as 'e')\n", e);
            } else {
                if (d > e)
                    printf("Maximum number is: %d (entered as 'd')\n", d);
                else
                    printf("Maximum number is: %d (entered as 'e')\n", e);
            }
        }
    }

    return 0;
}
