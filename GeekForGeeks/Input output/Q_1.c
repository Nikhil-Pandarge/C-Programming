#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cmp_int(const void *p1, const void *p2) {
    return *(const int *)p1 - *(const int *)p2;
}

typedef struct {
    int val;
    int cnt;
} freq;

int cmp_freq(const void *p1, const void *p2) {
    const freq *pf1 = (const freq *)p1;
    const freq *pf2 = (const freq *)p2;
    if(pf1->cnt == pf2->cnt)
        return pf1->val - pf2->val;
    return pf2->cnt - pf1->cnt;
}

void frequencySort(int tbl[], int n) {
    // sort values in ascending order
    qsort(tbl, n, sizeof(int), cmp_int);

    // fill frequency table with frequencies
    int nFreq = 0;
    freq *freqTbl = malloc(n*sizeof(freq));
    int val = tbl[0];
    int cnt = 1;
    for(int i = 1; i < n; i++) {
        if(tbl[i] != val) {
            freqTbl[nFreq].cnt = cnt;
            freqTbl[nFreq].val = val;
            nFreq++;
            val = tbl[i];
            cnt = 1;
        } else {
            cnt++;
        }
    }
    freqTbl[nFreq].cnt = cnt;
    freqTbl[nFreq].val = val;
    nFreq++;

    // sort by frequencies
    qsort(freqTbl, nFreq, sizeof(freq), cmp_freq);

    // refill tbl by frequencies
    int m = 0;
    for(int i = 0; i < nFreq; i++)
        for(int j = 0; j < freqTbl[i].cnt; j++)
            tbl[m++] = freqTbl[i].val;

    free(freqTbl);
}

int main(int argc, char *argv[])
{
    int n = argc > 1 ? atoi(argv[1]) : 200;
    int *tbl;
    if (n <= 0 || (tbl = malloc(n * sizeof(int))) == NULL)
        return 1;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        tbl[i] = abs(rand()) % 10;

    printf("[%d", tbl[0]);
    for (int i = 1; i < n; i++)
        printf(",%d", tbl[i]);
    printf("]\n");

    frequencySort(tbl, n);

    printf("[%d", tbl[0]);
    for (int i = 1; i < n; i++)
        printf(",%d", tbl[i]);
    printf("]\n");

    free(tbl);
    return 0;
}
