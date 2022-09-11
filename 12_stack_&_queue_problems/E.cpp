#include <iostream>
#include <string>
#include <stack>
#include <cctype>
using namespace std;

int postfix(string str){
    int n = str.size();
    stack<int> s;
    for (int i = 0; i < n; i++){
        if (isdigit(str[i])){
            s.push(str[i]-'0');
        }
        else{
            int op2 = s.top();
            s.pop();
            int op1 = s.top();
            s.pop();

            if (str[i] == '+'){
                s.push(op1 + op2);
            }
            else if (str[i] == '-'){
                s.push(op1 - op2);  
            }
            else if (str[i] == '*'){
                s.push(op1 * op2);
            }
            else if (str[i] == '/'){
                s.push(op1 / op2);
            }
        }
    }
    return s.top();
}


int main(){
    // string str = "352*+";
    string str = "324*93/-+";

    cout << postfix(str) << endl;


    return 0;
}