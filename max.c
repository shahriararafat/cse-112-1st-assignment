
#include <stdio.h>


int main()
{

    int n, m, l;
    scanf("%d %d %d" , &n , &m, &l);

    if (n >= m && n >= l)
    {
        printf("The largest value is %d", n);
    }
    else if (m >= n && m >= l)
    {
        printf("The largest value is %d", m);
    }
    else
    {
        printf("The largest value is %d", l);
    }
}

