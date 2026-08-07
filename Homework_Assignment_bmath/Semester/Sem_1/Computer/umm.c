#include <stdio.h>

int main(void)
{
    int m1, m2, m3, m4, m5;

    printf("Enter five marks: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    int t = m1 + m2 + m3 + m4 + m5;
    int a = t / 5;

    if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40) {
        printf("Fail, D\n");
    }
    else if (a >= 90) {
        printf("PASS with Grade A\n");
    }
    else if (a >= 75 && a < 90) {
        printf("PASS with Grade B\n");
    }
    else if (a >= 60 && a < 75) {
        printf("PASS with Grade C\n");
    }
    else if (a >= 39 && a < 60) {
        printf("PASS with Grade D\n");
    }
    else {
        printf("invalid\n");
    }

    return 0;
}