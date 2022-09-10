//implement-queue-using-stacks
#include <iostream>
#include <stack>
using namespace std;

template <typename T>
class queue{
	stack<int> s;
	public:
		queue(){
		}
		void push(T ele){
			s.push(ele);
		}
		void pop(){
			if (!s.empty()){
				stack<int> temp;
				while(!s.empty()){
					temp.push(s.top());
					s.pop();
				}
				temp.pop();
				while(!temp.empty()){
					s.push(temp.top());
					temp.pop();
				}
			}
			else{
				cout << "queue is empty" << endl;
			}
		}
		T top(){
			if (!s.empty()){
				stack<int> temp;
				while(!s.empty()){
					temp.push(s.top());
					s.pop();
				}
				int ele = temp.top();
				while(!temp.empty()){
					s.push(temp.top());
					temp.pop();
				}
				return ele;
			}
			else{
				cout << "queue is empty" << endl;
				return -1;
			}
		}
		int size(){
			return s.size();
		}
		bool empty(){
			return s.empty();
		}
};


int main(){
	queue<int> q;

	q.push(10);
	q.push(20);
	q.push(30);
	cout << q.top() << endl; // 10
	cout << q.size() << endl; // 3
	q.pop();
	cout << q.top() << endl; // 20
	cout << q.size() << endl; // 2
	q.pop();
	q.pop();
	cout << q.top() << endl;  // -1
	cout << q.size() << endl; // 0
	return 0;
}