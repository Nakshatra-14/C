#include <stdio.h>
#define MAX 20
int main(void)
{
    int arr[MAX], i, n, f, l, t;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the %d no. : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array before reverse");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    puts("");

    f = 0;
    l = n - 1;

    while (f < l)
    {
        // swap arr[f], arr[l]
        t = arr[f];
        arr[f] = arr[l];
        arr[l] = t;

        f++;
        l--;
    }

    printf("Array after reverse");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    puts("");
    return 0;
}