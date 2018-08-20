#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#define rep(i,k,n) for(auto i = k; i != n; ++i)
#define loop(i,n) for(auto i = n; i--;)
#define input(type) (*std::istream_iterator<int>(std::cin))
using namespace std;
typedef std::string Str;

int main(){
	const int n = input();
	std::vector<int> inp(n);
	rep(i,0,n){
		inp[i] = input();
	}
	int a = input();
	int b = input();
	rep(i,0,n){
		if (i < a || b < i || i & 1){
			printf("%d ", inp[i]);
	}}
}
