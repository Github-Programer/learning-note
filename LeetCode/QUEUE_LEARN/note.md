大多数流行语言都提供内置的队列库，因此您无需重新发明轮子。

如前所述，队列有两个重要的操作，入队 `enqueue` 和出队 `dequeue`。 此外，我们应该能够`获得队列中的第一个元素`，因为应该首先处理它。

下面是使用内置队列库及其常见操作的一些示例：

```cpp
#include <iostream>

int main() {
    // 1. Initialize a queue.
    queue<int> q;
    // 2. Push new element.
    q.push(5);
    q.push(13);
    q.push(8);
    q.push(6);
    // 3. Check if queue is empty.
    if (q.empty()) {
        cout << "Queue is empty!" << endl;
        return 0;
    }
    // 4. Pop an element.
    q.pop();
    // 5. Get the first element.
    cout << "The first element is: " << q.front() << endl;
    // 6. Get the last element.
    cout << "The last element is: " << q.back() << endl;
    // 7. Get the size of the queue.
    cout << "The size is: " << q.size() << endl;
}
```
此代码来源LeetCode，力扣的代码自动带有补全

如果不用力扣，需要加库

```cpp
#include <queue>
```

和

```cpp
using namespace std;
```
