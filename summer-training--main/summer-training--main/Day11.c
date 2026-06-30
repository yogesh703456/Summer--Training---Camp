// program 1:first non-repeating character 

// #include<stdio.h>
// #include <string.h>

// int main()
// {
//     char str[100];
//     int freq[256]={0};
//     int i;

//     printf("Enter a string: ");
//     fgets(str,sizeof(str),stdin);

//     for(i=0;str[i]!='\0';i++)
//         freq[(int)str[i]]++;

//     for(i=0;str[i]!='\0';i++)
//     {
//         if(freq[(int)str[i]]==1)
//         {
//             printf("First Non-Repeating Character = %c",str[i]);
//             return 0;
//         }
//     }

//     printf("No Non-Repeating Character");

//     return 0;
// }


// program 2:frequency of element
// int main()
// {
//     int arr[100], freq[100];
//     int n, i, j;

//     printf("Enter number of elements: ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//         freq[i]=-1;
//     }

//     for(i=0;i<n;i++)
//     {
//         int count=1;

//         if(freq[i]==0)
//             continue;

//         for(j=i+1;j<n;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 count++;
//                 freq[j]=0;
//             }
//         }

//         freq[i]=count;
//     }



// program 3:most frequncy of element

// int main()
// {
//     int arr[100];
//     int n,i,j,count,maxCount=0,element;

//     printf("Enter number of elements: ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//         scanf("%d",&arr[i]);

//     for(i=0;i<n;i++)
//     {
//         count=1;

//         for(j=i+1;j<n;j++)
//         {
//             if(arr[i]==arr[j])
//                 count++;
//         }

//         if(count>maxCount)
//         {
//             maxCount=count;
//             element=arr[i];
//         }
//     }

//     printf("Most Frequent Element = %d",element);

//     return 0;
// }


// program 4:query frequncy count
// int main()
// {
//     int arr[100];
//     int n,q,i,key,count;

//     printf("Enter number of elements: ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//         scanf("%d",&arr[i]);

//     printf("Enter number of queries: ");
//     scanf("%d",&q);

//     while(q--)
//     {
//         printf("Enter element to search: ");
//         scanf("%d",&key);

//         count=0;

//         for(i=0;i<n;i++)
//         {
//             if(arr[i]==key)
//                 count++;
//         }

//         printf("Frequency = %d\n",count);
//     }

//     return 0;


// program 5:word frequncy

// #include <string.h>

// int main()
// {
//     char str[200];
//     char words[50][20];
//     int count[50]={0};
//     int n=0,i,j;

//     printf("Enter sentence:\n");
//     fgets(str,sizeof(str),stdin);

//     char *token=strtok(str," \n");

//     while(token!=NULL)
//     {
//         int found=0;

//         for(i=0;i<n;i++)
//         {
//             if(strcmp(words[i],token)==0)
//             {
//                 count[i]++;
//                 found=1;
//                 break;
//             }
//         }

//         if(!found)
//         {
//             strcpy(words[n],token);
//             count[n]=1;
//             n++;
//         }

//         token=strtok(NULL," \n");
//     }

//     printf("\nWord Frequency:\n");

//     for(i=0;i<n;i++)
//         printf("%s = %d\n",words[i],count[i]);

//     return 0;
// }


// program 6:character frequncy
#include <string.h>
int main()
{
    char str[100];
    int freq[256]={0};
    int i;

    printf("Enter a string: ");
    fgets(str,sizeof(str),str);

    for(i=0;str[i]!='\0';i++)
        freq[(int)str[i]]++;

    printf("\nCharacter Frequency:\n");

    for(i=0;i<256;i++)
    {
        if(freq[i]!=0 && i!='\n')
            printf("%c = %d\n",i,freq[i]);
    }

    return 0;
}