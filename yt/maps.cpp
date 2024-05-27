# include <iostream>
# include <map>
#include <string>
# include <unordered_map>

using namespace std;
void print(unordered_map<int, int> &m);
int main(){
    // map<int, string> m; // sorted order, uses red black tree
    // // INSERTION  log(n) and ACCESS O(logn)
    // m[1] = "abc";   // O(logn) time complexity
    // m[5] = "cdc";
    // m[3] = "efg";
    // m[4]; // insert the default value
    // m.insert({2, "hij"});
    // m.insert(make_pair(4, "klm"));

    // Note: map keys are unique

    // map<int, string> :: iterator it;
    // for(it = m.begin(); it != m.end(); it++){
    //     cout << (*it).first << " " << it -> second << endl;
    // }

    // auto it = m.find(3); // O(logn)
    // if(it != m.end()){
    //     cout << "value: " << it->first << " " << it->second << endl;
    // }else{
    //     cout << "Not found" << endl;
    // }

    // auto itr = m.find(3);
    // m.erase(3); // O(logn)
    // if (itr != m.end())
    // {
    //     m.erase(itr);   // O(logn)
    // }
    // m.erase(itr);
    // m.clear();
    // print(m);

    // map<string, string> mp;
    // mp["abc"] = "def"; // Insertion time: s.size() * O(logn)

    unordered_map<int, int> u_mp;  // uses hash table
    // INSERTION O(1) and ACCESS O(1) TIME
    // DELETE O(1) TIME
    // *valid keys datapoint* those data types which have hash function defined internally e.g. int, string, float, char, long long etc.
    u_mp[1] = 100;
    u_mp[4] = 400;
    u_mp[2] = 200;
    u_mp[3] = 300;
    print(u_mp);

}

void print(unordered_map<int, int> &m){
    cout << "Size: " << m.size() << endl;
    for(auto &pr: m){
        cout << pr.first << " " << pr.second << endl;
    }

    
}