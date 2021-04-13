#include "Sorting.h"

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int choice = 0;
int array_size;
int* array_ptr;

/* Valid operations */
enum operations{ bubbleSort=1, insertionSort, selectionSort, quickSort, mergeSort, EXIT };

/* Display the menu of operations supported */
void Sorting_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);




void Sorting_menu(void)
{
    printf("\nAvailable Algorithms\n");
    printf("\n1. Bubble Sort\n2. Insertion Sort\n3. Selectiontion Sort\n4. Quick Sort\n5. Merge Sort\n6. Exit");
    printf("\n\tEnter your choice\n");
   
   
    scanf("%d", &choice);

    if(EXIT == choice)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(choice))
    {
        printf("\n\tEnter the array size\n");
       
        scanf("%d",&array_size);
        array_ptr=(int*)malloc(array_size * sizeof(int));
        printf("Enter the elements\n");
        for(int i=0;i<array_size;i++)
        scanf("%d", &array_ptr[i]);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        getchar();
        return;
        
    }
    switch(choice)
    {
        case bubbleSort:
            array_ptr=BubbleSort(array_ptr, array_size);
            getchar();
            break;
        case insertionSort:
            array_ptr=InsertionSort(array_ptr,array_size);
            getchar();
            break;
        case selectionSort:
            array_ptr=SelectionSort(array_ptr,array_size);
            getchar();
            break;
        case quickSort:
            array_ptr=QuickSort(array_ptr,0,array_size-1);
            getchar();
            break;
        case mergeSort:
            array_ptr=MergeSort(array_ptr,0,array_size-1);
            getchar();
            break;
        case EXIT:
            exit(0);
            break;
        default:
            printf("\n\t---END---\n");
    }
    printf("The sorted elements: ");
    Display(array_ptr,array_size);
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((bubbleSort <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}