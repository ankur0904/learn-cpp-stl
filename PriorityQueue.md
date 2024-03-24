# Priority Queue

- Element are stored in increasing or decreasing order.
- Internal Implementation using `max heap`

Header File: `#include <queue>`
Declaration: `priority_queue<int> p;`
*Note: priority_queue is not container, it actually a container adapter*

```c++
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // Declare a priority queue
    priority_queue<int> p;

    // Insertion
    p.push(10);
    p.push(15);
    p.push(5);

    // Iteration
    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
}
```

> Default Behavior: Top element is the largest element

## Common Used Functions

- `push()`: Insert elements in the priority queue

```c++
p.push(10);
```

- `pop()`: Remove the top element from the priority queue (By default it removes the largest element)

```c++  
p.pop();
```
- `top()`: Returns the top element from the priority queue (By default it returns the largest element)

```c++
cout << p.top() << endl;
```

- `size()`: Returns the size of the priority queue

```c++
cout << p.size() << endl;
```

- `empty()`: Returns `true` if the priority queue is empty

```c++
if (p.empty())
{
    cout << "Empty" << endl;
}
```

- `swap()`: Swaps the elements of two priority queues

```c++
priority_queue<int> p1, p2;
p1.push(10);
p1.push(20);
p2.push(30);

p1.swap(p2);
```

## When you need to use `min heap`?

- Declaration: `priority_queue<int, vector<int>, greater<int>> p;`
> - int: data type
> - vector<int>: container used to store the int (in this case)
> - greater<int>: comparator function

```c++
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    // Declare a priority queue
    priority_queue<int, vector<int>, greater<int>> p;

    // Insertion
    p.push(10);
    p.push(15);
    p.push(5);

    // Iteration
    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }

    // Also initialize while declaring
    vector<int> b = {1, 2, 3, 4, 5};
    priority_queue<int, vector<int>, greater<int>> q(b.begin(), b.end());

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
}
```

> Behavior: Top element is the smallest element

[Read More](https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/)