#include <stdio.h>

int main() {

    int n, i, j, c = 0, buf, k;
    int b; //act as flag
    int arr[100] = { 0 };
    int stack[200] = { 0 };
    int top = -1;
    printf("Enter the size of array(integer between 1-100):");
    scanf("%d", &n);
    n *= 2;

    printf("----------Enter the elements in the array----------\n\n");

    for (i = 0; i < n; i += 2) {
        b = 0;
        printf("Enter the element:");
        scanf("%d", &buf);
        for (j = 0; j <= i; j += 2) {
            if (arr[j] == buf) {
                arr[j + 1]++;
                b = 1;
            }
        }
        if (b == 0) {
            c++;
            arr[c * 2 - 2] = buf;
            arr[c * 2 - 1]++;
        }
    }

    for (i = 0; i < c * 2; i++)
        printf("%d ", arr[i]);

    for (k = 1; k < n / 2; k++) {
        for (j = c * 2 - 1; j > 0; j -= 2) {
            if (arr[j] == k)
                stack[++top] = j; //pushing(index of frequency) into stack in increasing order of frequency
        }
    }
    printf("\n\n----------Output array in sorted order of there frequency----------\n");
    for (top; top > -1; top--) {
        for (j = arr[stack[top]]; j > 0; j--)
            printf("%d ", arr[stack[top] - 1]);
    }
}
