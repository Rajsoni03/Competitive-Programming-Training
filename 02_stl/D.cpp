#include <iostream>
using namespace std;

template <typename T, int N>
class array{
	private:
		T *_begin;
		T *_end;
		int _size;		
	public:
		array(){
			_begin = new T[N];
			_end = _begin+N;
			_size = N;
		}

		int size(){
			return _size;
		}

		T& operator[](int index){
			return _begin[index];
		}

		T* begin(){
			return _begin;
		}
		T* end(){
			return _end;
		}
};

int main(){
	array<int, 3> arr1;
	array<char, 3> arr2;

	arr1[0] = 10;
	arr1[1] = 20;
	arr1[2] = 30;

	for (int i = 0; i < 3; i++){
		cout << arr1[i] << endl;
	}

	arr2[0] = 'r';
	arr2[1] = 'a';
	arr2[2] = 'j';

	for (int i = 0; i < 3; i++){
		cout << arr2[i] << endl;
	}


	return 0;
}