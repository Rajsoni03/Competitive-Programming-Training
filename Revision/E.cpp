#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v = {1, 2, 3, 4, 5};

	for (int i = 0; i < 30; i++){
		v.push_back(i);	
		cout << v.size() << " - " << v.capacity() << endl;
	}
	

	return 0;
}