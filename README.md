# 2110211
intro data struct chula engineer 2110211 (C++)

grader: https://nattee.net/grader  
tutorial: http://www.cplusplus.com/doc/tutorial/
  
ref1: http://www.cplusplus.com/reference/stl/  
ref2: https://en.cppreference.com/w/cpp/language


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
// MUST configure compiler before using
for (uint i = 0; i != vec.size(); ++i) {
  int val = vec[i];
}
```

## std::pair
```cpp
#include <utility>
std::pair<int, int> pi1(5, 13);
auto pi2 = pi1;
// pi1.first  = 5
// pi1.second = 13
// pi2.first  = 5
// pi2.second = 13

pi1.second = 999;
// pi1.first  = 5
// pi1.second = 999
// pi2.first  = 5
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
std::vector<int> vec = {4, 6, 1, 5, 2, 3};
std::sort(vec.begin(), vec.end());                      // vec = [1, 2, 3, 4, 5, 6]
std::sort(vec.begin(), vec.end(), std::greater<int>()); // vec = [6, 5, 4, 3, 2, 1]
std::sort(vec.begin(), vec.end(), [](int lhs, int rhs){ // vec = [1, 3, 5, 2, 4, 6]
  return lhs % 2 == rhs % 2 ? lhs < rhs : lhs % 2 == 1;
});
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

## std::map::iterator
```cpp
for (auto it = mp.begin(); it != mp.end(); ++it){
  auto key = it->first;
  auto val = it->second;
}
for (auto pii : mp){
  auto key = pii.first;
  auto val = pii.second;
}
```
## class Integer
```cpp
class Integer {
 private:
	int val;
 public:
	Integer(int _val = 0): val(_val) {}
	// this++
	Integer operator++(int){ 
		int res = val;
		val += 1;
		return res;
	}
	// ++this
	Integer operator++() { 
		val += 1;
		return val;
	}
	// std::cout << Integer
	friend ostream& operator << (ostream& o, const Integer& i) {
		o << i.val;
		return o;
	}
};
```
