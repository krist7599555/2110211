# 2110211
intro data struct chula engineer 2110211 (C++)
site: https://nattee.net/grader

## std::vector
```cpp
#include <vector>
std::vector<int> vec = {1, 2};
vec.push_back(3); // vec = [1, 2, 3]
vec.push_back(4); // vec = [1, 2, 3, 4]
```

## for loop
```cpp
// c++98 indice
for (uint i = 0; i != vec.size(); ++i) {
  int val = vec[i];
}

// c++98 iterator
std::vector<int>::iterator it = vec.begin(); 
for (; it != vec.end(); ++it) {
  int val = *it;
}

// c++11 range-based for loop
for (uint i = 0; i != vec.size(); ++i) {
  int val = vec[i];
}

```

## std::pair
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

## std::min, std::max
```cpp
#include <algorithm>
int mx = std::max(4, 20); // mx = 20
int mn = std::min(9, -1); // mn = -1
```

## std::swap
```cpp
#include <algorithm>
int a = 1, b = 2;
std::swap(a, b); // a = 2, b = 1
```

## std::sort
```cpp
#include <algorithm>
std::vector<int> vec = {4, 1, 5, 2, 3};
std::sort(vec.begin(), vec.end()); // vec = [1, 2, 3, 4, 5]
std::sort(vec.begin(), vec.end(), std::grater<int>()); // vec = [5, 4, 3, 2, 1]
```

## std::map
```cpp
#include <map>
std::map<char, int> mp;
mp['c'] = 999; // mp = {{'c': 999}}
mp['b'];       // mp = {{'b': 0}, {'c': 999}}
mp['a'] = 7;   // mp = {{'a': 7}, {'b': 0}, {'c': 999}}
mp['b'] = 1;   // mp = {{'a': 7}, {'b': 1}, {'c': 999}}
```
