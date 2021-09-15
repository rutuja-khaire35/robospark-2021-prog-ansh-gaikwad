// B.
//  Code for dynamic array using malloc/calloc, take size from user take data inputs, print them, again take size from user and realloc with new size, take user-data and again print new data.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n, x;

    printf("Enter the number of Elements: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory not Allocated!\n");
    }
    else
    {
        printf("Memory Allocation Successful!!!\n");
        for(int i=0; i<n; i++){
            printf("Enter the element: ");
            scanf("%d", &ptr[i]);
        }

        printf("The elements of the array are: \n");
        for(int i=0; i<n; i++)
        {
            printf("%d\n", ptr[i]);
        }
        
        printf("Enter the size of the new array: ");
        scanf("%d", &x);

        ptr=realloc(ptr, x*sizeof(int));
        printf("Memory Reallocation Successful!!!\n");

        for(int i=0; i<x; i++)
        {
            printf("Enter the element: ");
            scanf("%d", &ptr[i]);
        }

        printf("The elements of the array are: \n");
        for(int i=0; i<x; i++)
        {
            printf("%d\n", ptr[i]);
        }
    }
}