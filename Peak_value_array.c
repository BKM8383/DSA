#include<stdio.h>
void main(){
    int size;
    printf("Enter the size of aaray : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter Elements for the array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nThe peak values are : ");
    for (int i = 0; i < size; i++)
    {
        if (i==0)
        {
            if (array[0]>array[1])
            {
                printf("%d , ",array[0]);
            }
        }
        else if (i==size-1)
        {
            if (array[size-1]>array[size-2])
            {
                printf("%d , ",array[size-1]);
            }
        }
        else{
            if (array[i]>array[i-1] && array[i]>array[i+1])
            {
                printf("%d , ",array[i]);
            }
        }
    }
}