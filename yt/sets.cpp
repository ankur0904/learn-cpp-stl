# include <iostream>
# include <set>
# include <unordered_set>
using namespace std;

void print(multiset<int> s){
    for(auto i: s){
        cout << i << " ";
    }cout << endl;
}

int main(){

    // Technically same behaviour as map

    // set<int> s;
    // // store unique elements in sorted order
    // // INSERTION O(logn) and ACCESS O(logn)
    // // INTERNAL IMPLEMENTATION: RED BLACK TREE
    // s.insert(1);    // O(logn)
    // s.insert(32);
    // s.insert(2);
    // auto it = s.find(2);  // O(logn)
    // if(it != s.end())
    //     s.erase(it);
    // s.erase(1);
    // print(s);

    unordered_set<int> us;
    // store unique elements in unsorted order
    // INSERTION O(1) and ACCESS O(1)
    // INTERNAL IMPLEMENTATION: HASH TABLE

    multiset<int> ms;
    // store duplicate elements in sorted order
    // INSERTION O(logn) and ACCESS O(logn)
    // INTERNAL IMPLEMENTATION: RED BLACK TREE
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    //    print(ms);
    auto it = ms.find(1); // O(logn) return iterator to *first* 1
    // if(it != ms.end())
    //     ms.erase(it);   // O(logn)
    ms.erase(1);    // O(logn) erase all 1s
    print(ms);
}