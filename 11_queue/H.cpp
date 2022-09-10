#include <iostream>
using namespace std;

class deque{
	int *arr;
	int f, b;
	int len, capacity;
	public:
	deque(int capacity){
		this->capacity = capacity;
		arr = new int[capacity];
		f = -1;
		b = capacity;
		len = 0;
	}
	void push_front(int ele){
		f = (++f) % capacity;
		arr[f] = ele;
		len++;
	}
	void push_back(int ele){
		if (b-1 < 0){
			b = capacity - 1;
		}
		else{
			b--;
		}
		arr[b] = ele;
		len++;
	}
	void pop_front(){
		if (f-1 < 0){
			f = capacity - 1;
		}
		else{
			f--;
		}
		len--;
	}
	void pop_back(){
		b = (++b) % capacity;
		len--;
	}
	int front(){
		return arr[f];
	}
	int back(){
		return arr[b];
	}
	int size(){
		return len;
	}
	bool empty(){
		return len == 0;
	}
};


int main(){
	deque dq(5);
	dq.push_front(10);
	dq.push_back(20);
	dq.push_front(5);
	dq.push_back(30);

	while(!dq.empty()){
		cout << dq.back() << endl;
		dq.pop_back();
	}

	return 0;
}