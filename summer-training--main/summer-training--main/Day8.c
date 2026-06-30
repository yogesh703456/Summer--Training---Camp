// program 1:power using recursion 
#include <stdio.h>

// int power(int base, int exp)
// {
//     if (exp == 0)
//         return 1;

//     return base * power(base, exp - 1);
// }

// int main()
// {
//     int base, exp;

//     printf("Enter base and exponent: ");
//     scanf("%d%d", &base, &exp);

//     printf("Power = %d", power(base, exp));

//     return 0;
// }

// program 2 :reverse string sing recursion 

// void reverse(char str[], int index)
// {
//     if (index < 0)
//         return;

//     printf("%c", str[index]);
//     reverse(str, index - 1);
// }

// int main()
// {
//     char str[100];

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     str[strcspn(str, "\n")] = '\0';

//     reverse(str, strlen(str) - 1);

//     return 0;
// }

// program 3 :sum of n natural no. using recursion 
// int sum(int n)
// {
//     if (n == 0)
//         return 0;

//     return n + sum(n - 1);
// }

// int main()
// {
//     int n;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printf("Sum = %d", sum(n));

//     return 0;
// }



// program 4:factorial using recursion 

// int factorial(int n)
// {
//     if (n == 0 || n == 1)
//         return 1;

//     return n * factorial(n - 1);
// }

// int main()
// {
//     int n;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printf("Factorial = %d", factorial(n));

//     return 0;
// }


// program 5:fibonacci using recursion 
// int fibonacci(int n)
// {
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;

//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main()
// {
//     int n, i;

//     printf("Enter number of terms: ");
//     scanf("%d", &n);

//     for(i = 0; i < n; i++)
//         printf("%d ", fibonacci(i));

//     return 0;
// }

// program 6:palindrome using recursion 
#include <string.h>

int palindrome(char str[], int start, int end)
{
    if (start >= end)
        return 1;

    if (str[start] != str[end])
        return 0;

    return palindrome(str, start + 1, end - 1);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if (palindrome(str, 0, strlen(str) - 1))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
