#include <iostream>
#include <queue>
using namespace std;


class stack{
	queue<int> *q;
	public:
		stack(){
			q = new queue<int>;
		}
		void push(int ele){
			q->push(ele);
		}
		void pop(){
			queue<int> *temp = new queue<int>;
			int n = q->size();
			while(--n){
				temp->push(q->front());
				q->pop();
			}
			delete q;
			q = temp;
		}
		int top(){
			queue<int> *temp = new queue<int>;
			int n = q->size();
			while(--n){
				temp->push(q->front());
				q->pop();
			}
			int ele = q->front();
			temp->push(ele);
			delete q;
			q = temp;
			return ele;
		}
		int size(){
			return q->size();
		}
		bool empty(){
			return q->empty();
		}
};



int main(){
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	cout << s.top() << endl;


	return 0;
}