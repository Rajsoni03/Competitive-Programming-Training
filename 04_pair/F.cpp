#include <iostream>
#include <vector>
using namespace std;


// int maximumXOR(vector<int>& nums) {
// 	int n = nums.size();
//     int sum = nums[0];
 
//     for (int i = 1; i < n; i++){
//     	int temp1 = sum ^ nums[i];
//     	int temp2 = sum ^ (nums[i] ^ (nums[i] & sum));
 
//     	if (temp1 > temp2) sum = temp1;
//     	else sum = temp2;
//     }
//     return sum;
// }

int maximumXOR(vector<int>& nums) {
    int sum = 0;
    for (int i : nums) sum |= i;
    return sum;
}


int main(){
	int n;
	cin >> n;

	std::vector<int> v(n);

	for (int i = 0; i < n; i++){
		cin >> v[i];
	}

	cout << maximumXOR(v);

	return 0;
}


/*
5
1 2 3 9 2

4
3 2 4 6



7
11

*/