# include <iostream>
# include <utility>
# include <vector>

using namespace std;

void printArray(vector<int> &v)
{
    cout << "Size: " << v.size() << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(void)
{
    // pair<int, string> p;

    // // initialize pairs
    // p = make_pair(1, "Hello");
    // // second method
    // p = {2, "World"};

    // // copy
    // pair<int, string> p1 = p;
    // // copy by reference    
    // pair<int, string> &p2 = p;
    // cout << p.first << " " << p.second << endl;

    // pair<int, int> array[3];
    // array[0] = {1, 2};
    // array[1] = {3, 4};
    // array[2] = {5, 6};
    // swap(array[0], array[2]);
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << array[i].first << " " << array[i].second << endl;
    // }

    int arr[3]; // fixed size
    // vector<int> v; // dynamic size

    // for(int i = 0; i < 3; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x); 
    // }

    vector<int> v1(3);  // {0,0,0}
    vector<int> v2(3, 50); // {50,50,50}

    printArray(v1);
    printArray(v2);

    vector<int> v3 = v2; // copy

    return 0;
}