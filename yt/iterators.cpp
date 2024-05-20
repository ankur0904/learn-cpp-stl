#include <iostream>
#include <vector>
using namespace std;

int main(){
    /*
    Iterators are used to iterate over the elements of a container.
    pointers like structure
    */
//    .begin() -> points to the first element
//    .end() -> points to the next to last element

    vector<int> v = {1, -2, 3, 4, 5};

    vector<int> :: iterator it = v.begin();
    // cout << *(it+1) << endl;

    // for(it = v.begin(); it != v.end(); it++){
    //     cout << *it << " ";
    // }

    // it++ -> point to next iterator
    // it+1 -> point to next location

    vector<pair<int, int>> v1 = {{1, 2}, {3, 4}, {5, 6}};
    vector<pair<int, int>> :: iterator itr;
    for(itr = v1.begin(); itr != v1.end(); itr++){
        cout << (*itr).first << " " << (*itr).second << endl;
    }

    for(itr = v1.begin(); itr != v1.end(); itr++){
        cout << (itr -> first) << " " << (itr -> second) << endl;
    }

    // NOTE:
    // (*it).first <=> it -> first
}