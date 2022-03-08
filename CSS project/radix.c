#include<stdio.h>

void radixsort(int arr[], int n)
{
    int m = getMax(arr, n);

    int exp;
    for (exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}


void countSort(int arr[], int n, int exp)
{
    int output[n]; // output array
    int i, count[10] = { 0 };

    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++)
        arr[i] = output[i];
 }

int getMax(int arr[], int n)
{
    int mx = arr[0];
    int i;
    for (i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void print(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
 }

int main()
{
    int a;
    printf("Enter the size of array\n");
    scanf("%d",&a);
    printf("\n");
    int arr[a];
    printf("Enter the elements of array\n");
    for(int i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    radixsort(arr, a);
    printf("Sorted array is\n");
    print(arr, a);
    return 0;
}
