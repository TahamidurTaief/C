//QUES 5: Write a program in C to count a total number of duplicate elements in an array.


SOLUTION:

// 5. Write a program in C to count a total number of duplicate elements in an array.

#include<stdio.h>
#include<conio.h>

int main()
{
    int a1[100];
    int a2[100];
    int a3[100];
    int i, j, n, mm=1, ctr =0;

    printf("\nEnter the number of the array elements you want:  ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a1[i]);
    }

    for (i=0; i<n; i++)
    {
        a2[i]=a1[i];
        a3[i]=0;
    }

//------------------ Mark the element of the duplicate array -----------------------
    for (i=0; i<n; i++)
    {
        for (j=0; i<n; j++)
        {
            if (a1[i]==a2[j])
            {
                a3[j]=mm;
                mm++;
            }
        }
        mm=1;
    }

// Print the array 

    for (i=0; i<n; i++)
    {
        if (a3[i]==2)
        {
            ctr++;
        }
    }

    printf("The total number of duplicate elements found in the array is: %d \n", ctr);
	  printf("\n\n");	
    
    return 0;

}
*/
