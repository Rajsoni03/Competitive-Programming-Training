#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

int main(){
	vector<int> v {3, 5, 1, 4};
	sort(v.begin(), v.end());
	for (int i : v){
		cout << i << endl;
	}
	
	cout << endl;

	array<int, 4> a {3, 5, 1, 4};
	sort(a.begin(), a.end());
	for (int i : a){
		cout << i << endl;
	}

	return 0;
}