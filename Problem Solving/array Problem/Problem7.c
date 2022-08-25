// QUES 7: Write a program in C to merge two arrays of same size sorted in decending order.


// SOLUTION : 



#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k;
    int s1, s2, s3;
    int arr1[100], arr2[100], arr3[100];

    // start:
    printf("\nMERGE TWO ARRAYS OF SAME SIZE SORTED IN DECENDING ORDER");
    printf("\n==========================================================\n\n");

// First array element input and output

    printf("Input the number of array1 elements : ");
    scanf("%d", &s1);

// for loop for array input 
    for (i=0; i<s1; i++)
    {
        printf("array1 element %d : ", i+1);
        scanf("%d", &arr1[i]);
    }

// Second array element input and output

    printf("Input the number of array 2 elements : ");
    scanf("%d", &s2);

    // for loop for array 2 input
    for (i=0; i<s1; i++)
    {
        printf("element array2 %d : ", i+1);
        scanf("%d", &arr2[i]);
    }
    

// size of merged array is size of first array and  size of second array
    s3 = s1 + s2;

//----------------- insert in the third array------------------------------------
    for (i=0; i<s1; i++)
    {
        arr3[i]=arr1[i];
    }

    for (j=0; j<s2;)
    {
        arr3[i]=arr2[j];
        i++;
    }


//----------------- sort the array in decending order ---------------------------

    for(i=0;i<s3; i++)
    {
        for(k=0;k<s3-1;k++)
        {
            if(arr3[k]<=arr3[k+1])
                {
                j=arr3[k+1];
                arr3[k+1]=arr3[k];
                arr3[k]=j;
                }  
        }
    } 

//--------------- Prints the merged array ------------------------------------

    printf("\nThe merged array in decending order is :\n");
    for(i=0; i<s3; i++)
    {
        printf("%d   ", arr3[i]);
    }
	printf("\n\n");
    
    // goto start;
    return 0;
}
