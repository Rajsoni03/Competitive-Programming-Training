#include <iostream>
using namespace std;

class queue{
	int in;
	int out;
	int length;
	int capacity;
	int *arr;
	public:
		queue(int capacity){
			this->capacity = capacity;
			arr = new int[capacity];
			length = 0;
			in = out = 0;
		}
		void push(int ele){
			if (length < capacity){
				arr[in] = ele;
				length++;
				in++;
				in = in % capacity;
			}
			else{
				cout << "queue is full" << endl;
			}
		}
		void pop(){
			if (length > 0){
				length--;
				out++;
				out = out % capacity;
			}
			else{
				cout << "queue is empty" << endl;
			}
		}
		int top(){
			if (length > 0){
				return arr[out];
			}
			else{
				cout << "queue is empty" << endl;
				return -1;
			}
		}
		int size(){
			return length;
		}
		bool empty(){
			return length == 0;
		}
};

int main(){
	queue q(5);
	q.push(10);
	q.push(20);
	q.push(30);
	cout << q.top() << endl;
	q.pop();
	cout << q.top() << endl;
	q.pop();
	cout << q.size() << endl;
	q.push(40);
	q.push(50);
	cout << q.top() << endl;
	q.pop();
	q.push(60);
	cout << q.top() << endl;
	cout << q.size() << endl;

	return 0;
}