#include <stdio.h>
#include "my_string.h"

int main() {
    int a[] = {-234, 0, -1, 1, -2, 2, -99}; //*/{15, 5, 94, -120, 11259375, 501};
    int al = sizeof(a) / sizeof(a[0]);

    char bufsys[100] = {0};
    char buf[100] = {0};
    for (int i = 0; i < al; i++) {
        printf("\n%d\n", a[i]);
        sprintf(bufsys, "sys: %o %p %x %X\n", a[i], &a[i], a[i], a[i]);
        printf("%s", bufsys);

        my_sprintf(buf, "s21: %o %p %x %X\n", a[i], &a[i], a[i], a[i]);
        printf("%s", buf);
    }
    return 0;
}