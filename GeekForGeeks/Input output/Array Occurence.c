#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int int_cmp(const void *p1, const void *p2) {
    int i1 = *(const int *)p1;
    int i2 = *(const int *)p2;
    return (i1 > i2) - (i1 < i2);
}

void print_array(const char *msg, const int *a, int n) {
    printf("%s: ", msg);
    for (int i = 0; i < n; i++)
        printf("%d%c", a[i], " \n"[i == n - 1]);
}

int main(int argc, char *argv[]) {
    int N = argc > 1 ? atoi(argv[1]) : 200;
    int *array;

    if (N <= 0 || (array = calloc(N, sizeof(*array))) == NULL)
        return 1;

    srand(N);
    for (int i = 0; i < N; i++) {
        unsigned int x = rand();
        array[i] = x * x % 10;
    }

    print_array("unsorted", array, N);
    qsort(array, N, sizeof(int), int_cmp);
    print_array("  sorted", array, N);
    /* sort by decrasing frequency (assuming N > 0) */
    for (int i = 0;;) {
        /* find the most repeated sequence in [i..N-1] */
        int rep = array[i];
        int n = 1, j, k;
        for (j = k = i + 1; j < N; j++) {
            if (array[j] == array[j - n]) {
                rep = array[j];
                k = j + 1;
                n++;
            }
        }
        if (n == 1) {
            /* no more duplicates, f-sort completed */
            break;
        }
        i += n;
        if (k > i) {
            /* shift the repeated sequence in place */
            while (k-- > i) {
                array[k] = array[k - n];
            }
            while (n-- > 0) {
                array[k--] = rep;
            }
        }
    }
    print_array("f-sorted", array, N);
    free(array);
    return 0;
}
