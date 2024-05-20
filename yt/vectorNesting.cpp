# include <iostream>
# include <vector>
# include <utility>

using namespace std;

void printVector(vector<pair<int, int>> &v){
    int size = v.size();
    cout << "size " << size << endl;
    for(int i = 0; i < size; i++){
        cout << v[i].first << " " << v[i].second << " ";
    }cout << endl;
}

int main()
{
    // vector<pair<int, int>> v;
    // int n;
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     int x, y;;
    //     cin >> x;
    //     cin >> y;
    //     v.push_back({x, y});
    // }
    // printVector(v);

    // array of vector
    vector<int> v[10];          // row = 10, column = dynamic i.e. array of 10 vectors

    for(int i = 0; i < 10; i++){
        int n;
        cin >> n;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    // vector of vector
    vector<vector<int>> v1;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        vector<int> temp;
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v1.push_back(temp);
    }

    // empty vector 
    vector<int> ();
}