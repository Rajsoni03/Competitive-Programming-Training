#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include "algorithm"
using namespace std;


bool func(pair<int, char> e1, pair<int, char> e2){
	return e1.first > e2.first;
}


int main(){
	string s = "aabbbcddddeee";

	unordered_map<char, int> freq;

	for (char c : s){
		freq[c]++;
	}

	// print
	for (auto& p : freq){
		cout <<  p.first << " -> " << p.second << endl;
	}


	vector<pair<int, char>> v;

	for (auto& p : freq){
		v.push_back({p.second, p.first});
	}

	// print
	cout << endl << endl;
	for (pair<int, char>& p : v){
		cout <<  p.first << " -> " << p.second << endl;
	}

	sort(v.begin(), v.end(), func);

	// print
	cout << endl << endl;
	for (pair<int, char>& p : v){
		cout <<  p.first << " -> " << p.second << endl;
	}

	cout << "second largest freq element : " << (v.begin()+1)->second << endl;


	return 0;
}