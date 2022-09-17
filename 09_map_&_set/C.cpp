#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> s;

	s.insert(30);
	s.insert(20);
	s.insert(10);
	s.insert(40);
	s.insert(10);

	for (int i : s){
		cout << i << endl;
	}

	for (set<int>::iterator ptr = s.begin(); ptr != s.end(); ptr++){
		cout << *ptr << endl;
	}

	cout << s.count(10) << endl;
	cout << s.count(50) << endl;

	return 0;
}