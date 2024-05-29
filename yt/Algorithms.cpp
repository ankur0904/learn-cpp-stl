# include <iostream>
# include <algorithm>
# include <vector>
#include <numeric>
using namespace std;

int main(){
    vector<int> v = {3,4,65,77,4,3,3};

    // min_element(), it return the address/iterator to minimum value

    auto ptr = min_element(v.begin(), v.end()); // O(n) time
    cout << (*ptr) << endl;

    // max_element(), same as min   // O(n) time

    // accumulate(), give the sum
    int sum = accumulate(v.begin(), v.end(), 0);  // O(n) time      // params: _, _, value of initial sum
    cout << sum << endl;
    int ct = count(v.begin(), v.end(), 3);      // O(n) time in map & sets O(logn)
    cout << ct << endl;
    auto f = *find(v.begin(), v.end(), 3); // same as *f = find(v.begin(), v.end(), 3); cout << (*f) << endl;
    auto f = find(v.begin(), v.end(), -3);      // O(n) time  in map & sets O(logn)
    if (f == v.end()){
        // Not found
        cout << "Not found" << endl;
    }
    cout << (*f) << endl;

    reverse(v.begin(), v.end());    // array, string, vectors

}