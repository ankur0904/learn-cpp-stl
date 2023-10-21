# Unordered Set

Store data in `{key}`

**Internal Implementation:** Hash Table
`Key -> Hashed -> index in Hash table`

Header File: `#include <unordered_set>`

```c++  
#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    // Declare an unordered set
    unordered_set<int> u;

    // Insertion
    u.insert(1);
    u.insert(2);
    u.insert(3);

    // Print
    for (auto x : u)
    {
        cout << x << endl;
    }
    // Another way of iteration
    for(auto it = u.begin(); it != u.end(); it++)
    {
        cout << *it << endl;
    }
}
```

## Commonly used functions

- `insert()`: Insert elements in the set

```c++
u.insert(4);
```

- `erase()`: Remove elements from the set

```c++  
u.erase(4);
```

- `find():` Find elements in the set

```c++
auto it = u.find(4);
if(it == u.end())
{
    cout << "Not found" << endl;
}
else
{
    cout << "Found" << endl;
}
```

- `count()`: Count elements in the set

```c++
if(u.count(4) > 0)
{
    cout << "Found" << endl;
}
else
{
    cout << "Not found" << endl;
}
```

- `size()`: Return the size of the set

```c++
cout << u.size() << endl;
```

- `empty()`: Return `true` if the set is empty

```c++
cout << u.empty() << endl;
```

- `clear()`: Clear the set

```c++
u.clear();
```

[Read More](https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/)
