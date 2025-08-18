
#include <bits/stdc++.h>
using namespace std;


int main()
{

    int n, m, l;
    cin >> n >> m >> l;

    int get_max = max(n, max(m, l));
    cout << "The max number is " << get_max << endl;
}


