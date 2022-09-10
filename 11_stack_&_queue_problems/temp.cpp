// Tower of Hanoi
#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> arr[]){
	for (int i = 0; i < 3; i++){
		stack<int> temp;
		cout << "[Stack "<< i + 1 <<"] : ";
		while(!arr[i].empty()){
			temp.push(arr[i].top());
			arr[i].pop();
		}
		while(!temp.empty()){
			cout << temp.top() << " ";
			arr[i].push(temp.top());
			temp.pop();
		}
		cout << endl;
	}
	cout << endl;
}

void move(int index1, int index2, stack<int> arr[]){
	if (!arr[index1].empty() && !arr[index2].empty()){
		if (arr[index1].top() < arr[index2].top()){
			arr[index2].push(arr[index1].top());
			arr[index1].pop();
		}
		else {			
			arr[index1].push(arr[index2].top());
			arr[index2].pop();
		}
	}
	else if (!arr[index1].empty()){
		arr[index2].push(arr[index1].top());
		arr[index1].pop();
	}
	else if (!arr[index2].empty()){
		arr[index1].push(arr[index2].top());
		arr[index2].pop();
	}
}

void solve(stack<int> arr[]){
	int n = arr[0].size();
	if (n%2==0){
		while(arr[2].size() != n){
			move(0, 1, arr);
			print(arr);
			move(0, 2, arr);
			print(arr);
			move(1, 2, arr);
			print(arr);
		}
	}
	else{
		while(arr[2].size() != n){
			move(0, 2, arr);
			print(arr);
			if (arr[2].size() == n) break;
			move(0, 1, arr);
			print(arr);
			move(1, 2, arr);
			print(arr);
		}
	}
}

int main(){
	stack<int> arr[3];

	int n;
	cin >> n;
	while(n--){
		arr[0].push(n+1);
	}

	cout << "Initial State" << endl;
	print(arr);

	solve(arr);

	cout << "Game End" << endl;
	return 0;
}