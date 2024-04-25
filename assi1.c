#include <stdio.h>
// print star
int main()
{
    int num=5;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}