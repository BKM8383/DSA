#include <stdio.h>
void main()
{
    char sort;
    printf("What type of sorting you would like : \n");
    printf("press 'A' for asending or anything for decending : ");
    scanf("%c", &sort);

    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array : ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int i = 0, temp;

    if (sort == 'A')
    {
        while (i < size - 1)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                i = 0;
            }
            else
            {
                i++;
            }
        }
    }

    else
    {
        while (i < size - 1)
        {
            if (array[i] < array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                i = 0;
            }
            else
            {
                i++;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", array[i]);
    }
}
