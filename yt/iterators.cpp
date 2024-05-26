#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    Iterators are used to iterate over the elements of a container.
    pointers like structure
    */
    //    .begin() -> points to the first element
    //    .end() -> points to the next to last element

    vector<int> v = {1, -2, 3, 4, 5};

    vector<int>::iterator it = v.begin();
    // cout << *(it+1) << endl;

    // for(it = v.begin(); it != v.end(); it++){
    //     cout << *it << " ";
    // }

    // it++ -> point to next iterator
    // it+1 -> point to next location

    vector<pair<int, int>> v1 = {{1, 2}, {3, 4}, {5, 6}};
    vector<pair<int, int>>::iterator itr;
    // for(itr = v1.begin(); itr != v1.end(); itr++){
    //     cout << (*itr).first << " " << (*itr).second << endl;
    // }

    // for(itr = v1.begin(); itr != v1.end(); itr++){
    //     cout << (itr -> first) << " " << (itr -> second) << endl;
    // }

    // NOTE:
    // (*it).first <=> it -> first

    // Range based loop
    // for(int val: v){        // *val* is a copy of the element
    //     cout << val << " ";
    // }cout << endl;

    // for(int &val: v){        // *val* is a actual value of the element
    //     cout << val << " ";
    // }cout << endl;

    // for(pair<int, int> &val: v1){
    //     cout << val.first << " " << val.second << "|";
    // }

    // Dynamically determine the data type of the container/variable
    auto a = 4.5;
    cout << a << endl;

    for (auto &val : v)
    {
        cout << val << " ";
    }
    cout << endl;

     for(auto &val: v1){
        cout << val.first << " " << val.second << "|";
    }cout << endl;

    
    for(auto itr = v1.begin(); itr != v1.end(); itr++){
        cout << (*itr).first << " " << (*itr).second << endl;
    }
}