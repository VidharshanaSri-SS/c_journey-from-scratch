#include <stdio.h>

int main()
{
    int arr[5], new[5];
    int index = 0;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 != 0)
        {
            new[index] = arr[i];
            index++;
        }
    }
    printf("Even numbers are:\n");
    for(int i = 0; i < index; i++)
    {
        printf("%d ", new[i]);
    }
    return 0;
}