#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%lld \n", sum);
    long long int average = sum / n;
    printf("%lld", average);
}
