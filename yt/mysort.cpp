#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
bool do_i_swap_2(pair<int, int> a, pair<int, int> b);
int main(){
    int arr[] = {1, 2, 3, 4, 5, -1};

    sort(arr, arr + 6); // first parameter = add. of start of arr e.g., arr[0]
                        // second parameter = add. of next to end of arr e.g., arr[6] "yes 6"

    sort(arr+2, arr+6); // sort from 3rd element to 6th element
    // for(auto &i: arr){
    //     cout << i << " ";
    // }cout << endl;

    vector<int> vec = {3,5,7,8,-1,0};
    // sort(vec.begin(), vec.end());


    sort(vec.begin()+2, vec.end());
    // for(auto &i: vec){
    //     cout << i << " ";
    // }

    // Intuition of comparator function
    // for(int i = 0; i < n; i++){
    //     for(int j = i+1; j < n; j++){
    //         if(arr[i] > arr[j]){   // abstract this logic and say do_swap(a, b) then change the default behaviour by this abstraction layer
    //         // this layer called comparator function
    //             // swap
    //         }
    //     }
    // }

    vector<pair<int, int>> vp = {{2,4}, {5, 6}, {1, 5}, {2, 3}};
    sort(vp.begin(), vp.end(), do_i_swap_2);
    for(auto &p: vp){
        cout << p.first << " " << p.second << endl;
    }
}

// behaviour for the inbuilt sort function return *false* if you want to swap

// Trick: jis order me chaiye wahi return kar do see function do_i_swap_2
bool do_i_swap(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first){
        if(a.second < b.second) return false;
        return true;
    }else{
        if(a.first > b.first)   return false;
        return true;
    }
}

bool do_i_swap_2(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first){
        return a.first < b.first;
    }else{
        return a.second > b.second;
    }
}