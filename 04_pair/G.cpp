#include <iostream>
#include <vector>
using namespace std;


long long countPairs(int n, vector<vector<int>>& edges) {
	int ans;
	
    return ans;
}

int main(){
	int n;
	cin >> n;
	
	vector<vector<int>> edges;
	int v1, v2;

	for (int i = 0; i < n; i++){
		cin >> v1 >> v2;
		edges.push_back({v1, v2});
	}

	cout << countPairs(n, edges);

	return 0;
}