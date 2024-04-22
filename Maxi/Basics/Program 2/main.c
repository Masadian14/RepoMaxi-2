#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num_of_elements = 0;

    printf("Enter number of elements:");
    scanf("%d", &num_of_elements);
    printf("Entered number of elements: %d\n", num_of_elements);

    
    int* ptr = (int*)malloc(num_of_elements * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
    
        printf("Memory successfully allocated.\n");
        
        for (int i = 0; i < num_of_elements; ++i)
        {
            ptr[i] = i + 1;
        }

        printf("The elements of the array are: ");
        for (int i = 0; i < num_of_elements; ++i)
        {
            printf("%d, ", ptr[i]);
        }
        printf("\n");
    }
    free(ptr);



   //Memory Leak Beispiel
    int* ptr2 = NULL;
    for (int i = 0; i < num_of_elements; i++)
    {
        // calloc is the same like malloc but initializes the whole memory with zero
        ptr2 = (int*)calloc(100000, sizeof(int));
    }
    free(ptr2);

    return 0;
}