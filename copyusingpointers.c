#include <stdio.h>
#include<conio.h>
// Function declaration to print array 
void printArray(int arr[], int size);

int main()
{
     int source_arr[100], desti_arr[100];
     int size, i;

     int *source_ptr = source_arr;   // Pointer to source_arr
     int *desti_ptr   = desti_arr;     // Pointer to dest_arr

     int *end_ptr;
   
     // Input size and elements in source array
      
     printf("Enter size of array: ");
     scanf("%d", &size);
     printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
     {
        scanf("%d", (source_ptr + i));
     }


    // Pointer to last element of source_arr
     end_ptr = &source_arr[size - 1];


    /* Print source and destination array before copying */
     printf("\nSource array before copying: ");
    printArray(source_arr, size);

    printf("\nDestination array before copying: ");
     printArray(desti_arr, size);



     
     //Run loop till source_ptr exists in source_arr
      //memory range.
     
     while(source_ptr <= end_ptr)
    {
          *desti_ptr = *source_ptr;

        // Increment source_ptr and dest_ptr
          source_ptr++;
        desti_ptr++;
    }

    /* Print source and destination array after copying */
     printf("\n\nSource array after copying: ");
    printArray(source_arr, size);

     printf("\nDestination array after copying: ");
    printArray(desti_arr, size);

     return 0;
     getch();
}
void printArray(int *arr, int size)
{
     int i;

    for (i = 0; i < size; i++)
     {
        printf("%d, ", *(arr + i));
    }
}
