#include <iostream>
#include <unordered_set>

using namespace std;
int main()
{
    // Declare an unordered set
    unordered_set<int> u;

    // Insertion
    u.insert(1);
    u.insert(2);
    u.insert(3);

    // Print
    for (auto x : u)
    {
        cout << x << endl;
    }
    // Another way of iteration
    for(auto it = u.begin(); it != u.end(); it++)
    {
        cout << *it << endl;
    }
}