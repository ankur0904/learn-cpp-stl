#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[6] = {7,5,5,25,7,8};
    
    // upper and lower time: logn
    // for using upper and lower bound, first you need to sort to achieve logn time
    sort(arr, arr+6);

    // return pointer in case of array or iterator in case of vector
    int *ptr = lower_bound(arr, arr+6, 6);        // first 2 argument same as sort
    if (ptr == (arr+6)){
        cout << "Not found ";
    }
    cout << (*ptr) << endl;
    // lower_bound will return the number itself iff present else next greater element

    int *pt = upper_bound(arr, arr+6, 6);
    // upper_bound will only return the next greater element not that value itself

    // if we ask from the very last element they return the address to next from last 
    vector<int> vc = {3, 2, 1, -2, 6};
    sort(vc.begin(), vc.end());

    auto it = lower_bound(vc.begin(), vc.end(), 2);
    cout << (*it) << endl;

    set<int> st;
    map<int, int> mp;       // lower and upper bound on key only

    upper_bound(st.begin(), st.end(), 5);           // O(n) time
    st.upper_bound(5);              // O(logn) time
}