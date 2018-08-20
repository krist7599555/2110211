#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
#define rep(i,k,n) for(auto i = k; i != n; ++i)
#define input() (*std::istream_iterator<int>(std::cin))

int main(){
	int n = input();
	std::vector<int> vec(n);
	rep(i,0,n){
		vec[i] = input();
	}
	int l = input();
	int r = input();
	while (l < r){
		std::swap(vec[l++], vec[r--]);
	}
	for (int i : vec){
		printf("%d ", i);
	}
}
