# include <iostream>
# include <vector>
#include<algorithm>
using namespace std;

int main()
{
    // definition of lambda funcction
    // [](int x, int y){ return x+y; }

    // assign lambda function
    auto sum = [](int x, int y){ return x+y; };
    cout << sum(3, 5) << endl;

    cout << [](int x, int y){ return x+y; }(3,4) << endl;

    vector<int> v = {2,32,3,2,4,6,7};
    cout << all_of(v.begin(), v.end(), [](int x){return x >= 2;}) << endl;       // return 0 -> false and 1 -> true, assume as AND gate
    cout << any_of(v.begin(), v.end(), [](int x){return x == 2;}) << endl;      // "  "   "    ", assume as OR gate
    cout << none_of(v.begin(), v.end(), [](int x){return x < 0;}) << endl;      // none of condition i.e., none of less than 0 return TRUE
}