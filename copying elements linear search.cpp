#include <stdio.h>

int main()
{
    int arr[10], sum = 0, i;
    int newArr[10];
    printf("Enter 10 elements: \n");

    // taking the elements of the array from the user
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // printing the old array
    printf("The old array is: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    // copying all the values to the new array
    for (i = 0; i < 10; i++)
    {
        newArr[i] = arr[i];
    }
    // calculating the sum off even indexed elements
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + newArr[i];
        }
        else
        {
            int num = newArr[i];
            // reversing the element of odd indexed element
            int remainder, reverse = 0;
            while (num != 0)
            {
                remainder = num % 10;
                reverse = reverse * 10 + remainder;
                num /= 10;
            }
            // saving the reversed element in the new array
            newArr[i] = reverse; 
        }
    }

    printf("\nThe sum of the even elements is: %d\n", sum);
    // printing the resulting array
    printf("The new array is: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", newArr[i]);
    }
    return 0;
}