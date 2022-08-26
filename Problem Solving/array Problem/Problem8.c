// QUES:  Write a program in C to count the frequency of each element of an array.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, n, key;
    int feq=0;
    int a[100];

    printf("\nWrite a program in C to count the frequency of each element of an array.");
    printf("\n-----------------------------------------------------------------------\n");

    printf("Enter a number of array elements : ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("element no %d : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Frequency Number : ");
    scanf("%d", &key);

    for (i=0; i<n; i++)
    {
        if (a[i]==key)
        {
            feq++;
        }
    }
    printf("Frequency of %d is %d.", key, feq);
    
    
    return 0;

}
