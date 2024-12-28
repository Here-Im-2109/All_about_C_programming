//    Purpose:   Exercise 5: Array reversal in C.


#include <stdio.h>
void rev_arr(int *num, int *arr)
{
    int temp;
    for (int i = 0; i < *num / 2; i++)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + (*num - i) - 1);
        *(arr + (*num - i) - 1) = temp;
    }

    printf("\n\n=> Reverse array is: ");
    for (int i = 0; i < *num; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n\n");
}
int main()
{
    int num;
    printf("\nEnter the number of elements of the array: ");
    scanf("%d", &num);
    int arr[num];
    printf("\n");
    for (int i = 0; i < num; i++)
    {
        printf("Enter %d no. element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n=> Your entered array is: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    rev_arr( &num, arr);

    return 0;
}