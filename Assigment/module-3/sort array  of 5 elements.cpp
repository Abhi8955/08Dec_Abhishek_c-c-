#include <stdio.h>


int main()
{
    int arr[5];
    int i, j, temp,k,l;
    
    for(i=0; i<5; i++)
    {   
        printf("enter elements os array[%d]",i);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[i] > arr[j])
            {
                temp   = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements of array in ascending order: ");
    for(i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

     for (k = 0; k < 5; k++) 
        {
            for (l = k + 1; l < 5; l++) 
            {
                if (arr[k] < arr[l]) 
                {
                    temp = arr[k];
                    arr[k] = arr[l];
                    arr[l] = temp;
                }
            }
        }
          printf("elements of array i decending order : ");
 
        for (k = 0; k < 5; k++) 
        {
            printf("%d ", arr[k]);
        }
     
    return 0;
}
