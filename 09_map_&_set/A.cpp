#include <iostream>
#include <map>
using namespace std;

int main(){
	map<char, int> m;

	m.insert({'S', 200});
	m.insert({'Y', 400});
	m.insert({'P', 30});
	m.insert({'R', 156});
	m.insert({'R', 350});
	m.insert({'N', 249});


	cout << m['R'] << endl;
	cout << m['N'] << endl;



	return 0;
}