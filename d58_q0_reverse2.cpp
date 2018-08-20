#include <iostream>
#include <vector>
#define rep(i,k,n) for(auto i = k; i != n; ++i)
int input(){int x; std::cin >> x; return x;}
using namespace std;

int main(){
	const int n = input();
	std::vector<int> vec(n);
	rep(i,0,n){
		vec[i] = input();
	}
	const int a = input();
	const int b = input();
	
	auto l = vec.begin() + a;
	auto r = vec.begin() + b;
	while (l < r){
		std::swap(*l++, *r--);
	}
	for (int i : vec){
		printf("%d ", i);
	}
}
