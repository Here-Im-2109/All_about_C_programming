// reverse the array using pointer


#include <stdio.h>
void rev_arr(int *num, int *arr)
{
    int temp;
    for (int i = 0; i < (*num / 2); i++)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + (*num - i - 1));
        *(arr + (*num - i - 1)) = temp;
    }

    printf("\n=> Reverse Array is: ");
    for (int i = 0; i < *num; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main()
{
    int num;
    printf("\nEnter length of the array: ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("\nEnter %d no. element : ", i + 1);
        scanf("%d", arr + i);
    }

    printf("\n=> Your Entered Array is: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", *(arr + i));
    }

    rev_arr(&num, arr);

    return 0;
}
