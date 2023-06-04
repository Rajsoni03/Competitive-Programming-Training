#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;

	for (int i = 0; i < 30; i++){
		v.push_back(i);	
		v.shrink_to_fit();
		cout << v.size() << " - " << v.capacity() << endl;
	}
	
	for (int i = 0; i < 30; i++){
		v.pop_back();
		v.shrink_to_fit();
		cout << v.size() << " - " << v.capacity() << endl;
	}


	return 0;
}