#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#define rep(i,k,n) for(auto i = k; i != n; ++i)
#define loop(i,n) for(auto i = n; i--;)
#define input(type) (*std::istream_iterator<type>(std::cin))
using namespace std;
typedef std::string Str;

int main(){
	std::map<Str, int> mp;
	loop(_, input(int)) {
		mp[input(Str)] += 1;
	}
	for (auto p : mp) {
		if (p.second > 1){
		printf("%s %d\n", p.first.c_str(), p.second);
	}}
}
