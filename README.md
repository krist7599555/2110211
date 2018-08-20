# 2110211
intro data struct chula engineer 2110211 (C++)

std::vector
```cpp
#include <vector>
std::vector<int> vec = {1, 2};
vec.push_back(3); // vec = [1, 2, 3]
vec.push_back(4); // vec = [1, 2, 3, 4]
```


std::pair
```cpp
#include <utility>
std::pair<int, int> pi1(5, 13);
auto pi2 = pi1;
// pi1.first = 5
// pi1.second = 13
// pi2.first = 5
// pi2.second = 13

pi1.second = 999;
// pi1.first = 5
// pi1.second = 999
// pi2.first = 5
// pi2.second = 13
```
