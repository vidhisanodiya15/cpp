// C++ program to demonstrate the use of list containers
#include <iostream>
#include <list>
using namespace std;

int main()
{
    // defining list
    list<int> gqlist{12,45,8,6};

    for (auto i : gqlist) {
        cout << i << ' ';
    }
    return 0;
}
