// program 1:intersection of 2 array 
#include <stdio.h>

// int main()
// {
//     int a[50], b[50], n1, n2, i, j;

//     printf("Enter size of first array: ");
//     scanf("%d",&n1);

//     for(i=0;i<n1;i++)
//         scanf("%d",&a[i]);

//     printf("Enter size of second array: ");
//     scanf("%d",&n2);

//     for(i=0;i<n2;i++)
//         scanf("%d",&b[i]);

//     printf("Intersection:\n");

//     for(i=0;i<n1;i++)
//     {
//         for(j=0;j<n2;j++)
//         {
//             if(a[i]==b[j])
//             {
//                 printf("%d ",a[i]);
//                 break;
//             }
//         }
//     }

//     return 0;
// }

// program 2:remove duplicates
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

//     printf("After Removing Duplicates:\n");

//     for(i=0;i<n;i++)
//         printf("%d ",arr[i]);

//     return 0;
// }


// program 3:std record using struct
// struct Student
// {
//     int roll;
//     char name[50];
//     float marks;
// };

// int main()
// {
//     struct Student s;

//     printf("Enter Roll Number: ");
//     scanf("%d",&s.roll);

//     printf("Enter Name: ");
//     scanf("%s",s.name);

//     printf("Enter Marks: ");
//     scanf("%f",&s.marks);

//     printf("\nStudent Details\n");
//     printf("Roll = %d\n",s.roll);
//     printf("Name = %s\n",s.name);
//     printf("Marks = %.2f\n",s.marks);

//     return 0;
// }



// program 4:union od 2 array

// int main()
// {
//     int a[50], b[50], i, n1, n2;

//     printf("Enter size of first array: ");
//     scanf("%d",&n1);

//     for(i=0;i<n1;i++)
//         scanf("%d",&a[i]);

//     printf("Enter size of second array: ");
//     scanf("%d",&n2);

//     for(i=0;i<n2;i++)
//         scanf("%d",&b[i]);

//     printf("Union:\n");

//     for(i=0;i<n1;i++)
//         printf("%d ",a[i]);

//     for(i=0;i<n2;i++)
//         printf("%d ",b[i]);

//     return 0;
// }



// program 5:unique elements

// int main()
// {
//     int arr[100], n, i, j, unique;

//     printf("Enter number of elements: ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//         scanf("%d",&arr[i]);

//     printf("Unique Elements:\n");

//     for(i=0;i<n;i++)
//     {
//         unique=1;

//         for(j=0;j<n;j++)
//         {
//             if(i!=j && arr[i]==arr[j])
//             {
//                 unique=0;
//                 break;
//             }
//         }

//         if(unique)
//             printf("%d ",arr[i]);
//     }

//     return 0;
// }

// program 6:count distinct elements
int main()
{
    int arr[100], n, i, j, count=0, distinct;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        distinct=1;

        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                distinct=0;
                break;
            }
        }

        if(distinct)
            count++;
    }

    printf("Distinct Elements = %d",count);

    return 0;
}