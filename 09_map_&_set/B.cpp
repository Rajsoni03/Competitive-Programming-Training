#include <iostream>
#include <map>
using namespace std;

int main(){
	map<char, int> m;

	m.insert({'S', 200});
	m.insert({'Y', 400});
	m.insert({'P', 30});

	m['R'] = 420;
	m['R'] = 320;
	m['N'] = 1901;

	// cout << m['R'] << endl;
	// cout << m['N'] << endl;

	cout << (m.find('R') != m.end()) << endl;
	cout << m.count('R') << endl;



	return 0;
}