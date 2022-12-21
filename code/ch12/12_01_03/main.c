#include <stdio.h>

void main() {
    short student[20], i;
    for (i = 0; i < 20; i++) student[i] = 0;

    student[1] = 10;
    printf("%d %d\n", student[1], student[2]);
}