#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 2)
    {
        printf("The given number is prime");
        return 0;
    }

    if (n % 2 == 0 || n == 1)
    {
        printf("The given number is not prime");
        return 0;
    }

    int flag = 1;  

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)  
        {
            flag = 0;    
            break;
        }
    }
    if (flag == 1)
    {
        printf("The given number is prime");
    }
    else
    {
        printf("The given number is not prime");
    }

    return 0;
}
 