#include <stdio.h>

int main(void) {

    int i, n, iIndex, temp;

    int a[10];

    printf("Enter n: ");

    scanf("%d", &n);

    printf("Enter %d integers:\n ");

    for (i = 0; i < n; i++)

        scanf("%d", &a[i]);

    iIndex = 0;

    for (i = 1; i < n; i++) {

        if (a[i] < a[iIndex])       iIndex = i;

    }

    temp = a[0]; a[0] = a[iIndex]; a[iIndex] = temp;

    for (i = 0; i < n; i++)

        printf("%5d", a[i]);

    printf("\n");

    return 0;

}
