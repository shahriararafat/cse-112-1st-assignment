
#include <bits/stdc++.h>
using namespace std;

long long factorial (int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}
class Factorial
{
public:
    Factorial(int num)
    {
       cout << factorial(num);
    }
};
int main()
{
    int n;
    cin >> n;
    Factorial obj1(n);


}
