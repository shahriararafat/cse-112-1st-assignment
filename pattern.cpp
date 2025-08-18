#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hash_count = 5;
    int zero_count = 0;
    for (int i = 0; i < 5 ; i++)
    {
            for (int h = 0; h < hash_count; h++)
            {
                cout << "# ";
            }

            for (int z = 0; z < zero_count; z++)
            {
                cout << "0 ";
            }
        hash_count--;
        zero_count++;

        cout << endl;

    }
    return 0;
}
