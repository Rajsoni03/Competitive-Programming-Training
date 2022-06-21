#include <iostream>
#include <string>
using namespace std;



int calcNumsOfSum(int sum, int vars, int index){
    fact()
}


long posIntSol(string s){    
    int n = s.size();
    int start = 0;
    int vars = 1;
    for (int i = 0; i < n; i++){
        if (s[i] == '+') vars++;
        if (s[i] == '=') start = i+1;
    }
    int sum = stoi(s.substr(start, n));
    return vars;
}

int main(){
    string s = "a+b=1";

    cout << posIntSol(s) << endl;

    return 0;
}