// program 1: minimum element
// #include <stdio.h>

// int main()
// {
//     int arr[100], n, i, min;

//     printf("Enter number of elements: ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//         scanf("%d",&arr[i]);

//     min=arr[0];

//     for(i=1;i<n;i++)
//     {
//         if(arr[i]<min)
//             min=arr[i];
//     }

//     printf("Minimum = %d",min);

//     return 0;
// }

// program 2:reverse array

// int main()
// {
//     int arr[100], n, i;

//     printf("Enter number of elements: ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//         scanf("%d",&arr[i]);

//     printf("Reverse Array:\n");

//     for(i=n-1;i>=0;i--)
//         printf("%d ",arr[i]);

//     return 0;
// }

// program 3:reverse duplicate
// int main()
// {
//     int arr[100], n, i, j;

//     printf("Enter number of elements: ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//         scanf("%d",&arr[i]);

//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;)
//         {
//             if(arr[i]==arr[j])
//             {
//                 int k;
//                 for(k=j;k<n-1;k++)
//                     arr[k]=arr[k+1];
//                 n--;
//             }
//             else
//                 j++;
//         }
//     }

//     printf("Array after removing duplicates:\n");

//     for(i=0;i<n;i++)
//         printf("%d ",arr[i]);

//     return 0;
// }



// program 4:rotate array by one position 
// int main()
// {
//     int arr[100], n, i, last;

//     printf("Enter number of elements: ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//         scanf("%d",&arr[i]);

//     last=arr[n-1];

//     for(i=n-1;i>0;i--)
//         arr[i]=arr[i-1];

//     arr[0]=last;

//     printf("Rotated Array:\n");

//     for(i=0;i<n;i++)
//         printf("%d ",arr[i]);

//     return 0;
// }

// program 5:store and print element

// int main()
// {
//     int arr[100], n, i;

//     printf("Enter number of elements: ");
//     scanf("%d",&n);

//     printf("Enter elements:\n");
//     for(i=0;i<n;i++)
//         scanf("%d",&arr[i]);

//     printf("Elements are:\n");
//     for(i=0;i<n;i++)
//         printf("%d ",arr[i]);

//     return 0;
// }

// program 6:max element

int main()
{
    int arr[100], n, i, max;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    max=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }

    printf("Maximum = %d",max);

    return 0;
}


