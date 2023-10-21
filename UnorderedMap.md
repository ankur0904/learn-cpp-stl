# Unordered Map

Store data in `{key: value}`

**Internal Implementation:** Hash Table
`Key -> Hashed -> index in Hash table`

Header File: `#include <unordered_map>`

```c++
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    // Declare an unordered map
    unordered_map<char, int> u;

    // Insertion
    u['a'] = 1;
    u['b'] = 2;
    u['c'] = 3;

    // Print
    cout << u['a'] << endl;

    // Iterate
    /*
    we can't iterate using the indexes
    */
    for (auto x : u)
    {
        cout << x.first << " " << x.second << endl;
    }
    // Another way of iteration
    for(auto it = u.begin(); it != u.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}
```

## Commonly used functions

- `insert()`: Insert elements in the map

```c++
u.insert({'d', 4});
```

- `erase()`: Remove elements from the map

```c++
u.erase('d');
```

- `find():` Find elements in the map

```c++
if (u.find('d') != u.end())
{
    cout << "Found" << endl;
}
```

- *`u.find()` will return `u.end()` if not find the element.*

- `size()`: Return the size of the map

```c++  
cout << u.size() << endl;
```

- `empty()`: Return `true` if the map is empty

```c++  
cout << u.empty() << endl;
```

- `clear()`: Clear the map

```c++  
u.clear();
```

[Read More](https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/)