#include <stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d", &n); 
 
    if (n%2 == 0)
    {
        printf("the number %d is even ", n);
    }
    else
    {
        printf("the number %d is odd ", n);
    }
}