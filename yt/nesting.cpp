# include <iostream>
# include <map>
// # include <pairs>
# include <vector>
# include <set>

using namespace std;

int main(){
    map<pair<int, int>, int> m;
    // comparable data structure can be used as key in map

    // comparision of pairs
    pair<int, int> p1 = {1, 2};
    pair<int, int> p2 = {1, 4};
    cout << (p1 > p2) << endl;  // p1.first > p2.first = false then p1.second > p2.second = false

    // comparioson of sets
    set<int> s1 = {1, 2, 3};
    set<int> s2 = {2, 3, 4};
    cout << (s1 > s2) << endl;  // 1 > 2 = false, 2 > 3 = false, 3 > 4 = false

    // comparison of vectors
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {2, 3, 4};
    cout << (v1 > v2) << endl;

    map<pair<string, string>, vector<int>> mp;
    mp[{"a", "b"}].push_back(1);
    mp[{"a", "b"}].push_back(2);
    mp[{"a", "b"}].push_back(3);    

    mp[{"a", "c"}].push_back(3);
    mp[{"a", "c"}].push_back(4);
    mp[{"a", "c"}].push_back(5);

    for(auto &it: mp){
        auto &full_name = it.first;
        auto &marks = it.second;
        cout << full_name.first << " " << full_name.second << " ";
        for(auto &mark: marks){
            cout << mark << " ";
        }cout << endl;
    }

    set<pair<string, string>> s;
    // will also work because Internal implementation based on 
}