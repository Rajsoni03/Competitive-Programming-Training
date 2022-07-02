#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

bool comp(const pair<int, int> &a, const pair<int, int> &b){
	if (a.first == b.first) 
		return a.second > b.second;
	return a.first < b.first;	
}

int main(){
	int n = 5;
	vector<pair<int, int>> v = {{1, 3}, {1, 4}, {4, 2}, {1, 5}, {5, 1}};

	sort(v.begin(), v.end(), comp);

	for (int i = 0; i < n; i++){
		cout << v[i].first << " - " << v[i].second << endl;
	}

	return 0;
}