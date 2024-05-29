# include <iostream>
# include <stack>
# include <queue>

using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.size(); 
    s.top();

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }cout << endl;

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.size();
    q.front();

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }cout << endl;
}