//QUES 6: Write a program in C to print all unique elements in an array.

SOLUTION:

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, ctr, n, k;
    int a[100];
    int a2[100];

    printf("\n\n Write a program in V to print all unique elemts in an array");
    printf("\n==============================================================\n\n");

    printf("Input the element no in array : ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("Enter the element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    
    printf("\nThe unique elements stored in the array are : ");

    for(i=0; i<n; i++)
    {
        ctr = 0;

        for (j=0, k=n; j<k+1; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i != j)
            {
                if (a[i]==a[j])
                {
                    ctr++;
                }
            }
        }

        if (ctr==0)
        {
            printf("%d", a[i]);
        }
    }
    printf("\n\n");
    return 0;
}
