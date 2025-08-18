

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;


    if (n == 2)
    {
        cout << "This number is  prime" << endl;
        return 0;
    }
    if (n % 2 == 0 || n == 1)
    {
        cout << "This number is not prime" << endl;
        return 0;
    }


    bool flag = true;
    for (int i = 2; i <= sqrt(n); i++)
    {

        if(n % i == 0)
        {

            flag = false;
            break;
        }
    }

    cout << ((flag) ? "This number is  prime" : "This number is not  prime ") << endl;
}
