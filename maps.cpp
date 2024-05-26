# include <iostream>
# include <map>
#include <string>

using namespace std;
void print(map<int, string> &m);
int main(){
    map<int, string> m; // sorted order
    // INSERTION  log(n) and ACCESS O(logn)
    m[1] = "abc";   // O(logn) time complexity
    m[5] = "cdc";
    m[3] = "efg";
    m[4]; // insert the default value
    m.insert({2, "hij"});
    m.insert(make_pair(4, "klm"));

    // Note: map keys are unique

    // map<int, string> :: iterator it;
    // for(it = m.begin(); it != m.end(); it++){
    //     cout << (*it).first << " " << it -> second << endl;
    // }

    auto it = m.find(3); // O(logn)
    if(it != m.end()){
        cout << "value: " << it->first << " " << it->second << endl;
    }else{
        cout << "Not found" << endl;
    }

    auto itr = m.find(3);
    // m.erase(3); // O(logn)
    if (itr != m.end())
    {
        m.erase(itr);   // O(logn)
    }
    // m.erase(itr);
    m.clear();
    print(m);

    map<string, string> mp;
    mp["abc"] = "def"; // Insertion time: s.size() * O(logn)
}

void print(map<int, string> &m){
    cout << "Size: " << m.size() << endl;
    for(auto &pr: m){
        cout << pr.first << " " << pr.second << endl;
    }

    
}