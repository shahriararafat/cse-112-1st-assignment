#include <bits/stdc++.h>
using namespace std;
class Student{
    string name;
    int id;
    public:
    Student(string s, int i)
    {
        name = s;
        id = i;
    }
    void displayInfo()
    {
        cout << "The name : " << name << " " << "Id : " << id << endl;
    }
};
int main()
{
    Student s1("shahriar", 359);
    s1.displayInfo();
    return 0;
}
