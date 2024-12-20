//    Purpose:    Passing array as function arguments in C.

#include <stdio.h>

void func2(int *arr, int *num) // call the reference...
{
    printf("\nUsing user defined function_2 to print the array: ");
    for (int i = 0; i < *num; i++)
    {
        printf("%d ", *(arr + i));
    }

    int numb;
    printf("\nEnter the no. of elements you want in your array[n]:\n=> ");
    scanf("%d", &numb);
    for (int i = 0; i < numb; i++)
    {
        printf("Enter your %d no. element: ", i + 1);
        scanf("%d", arr + i);
    }
    printf("For second time, your changed elements are: ");
    for (int i = 0; i < numb; i++)
    {
        printf("%d ", *(arr + i));
    }
}

void func1(int arr_1[], int n) // call by value...
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr_1[i]);
    }

    int num;
    printf("\nEnter the no. of elements you want in this array[n]:\n=> ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter your %d no. element: ", i + 1);
        scanf("%d", arr_1 + i);
    }
    printf("Your changed elements are: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", *(arr_1 + i));
    }

    func2(arr_1, &num);
}

int main()
{
    int num;
    printf("Enter no. of elements you want:\n=> ");
    scanf("%d", &num);

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter %d no. element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nUsing main function to print the array: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\n\nUsing user defined function_1 to print the array: ");
    func1(arr, num);

    return 0;
}