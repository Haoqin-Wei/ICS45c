#include <iostream>
#include <string>

const int STACK_CAPACITY = 1000;

class Stack{
	public:
	bool isEmpty(){
		return size == 0;
	}
	bool isFull(){
		return size == STACK_CAPACITY;
	}
	void push(char c){
		if(!isFull()){
			data[size] = c;
			size++;
		}
	}

	char pop() {
	       	if (isEmpty()) {
		       	return '@';
        }
	       	size--;
	       	return data[size];
	}

	char top() {
       		if (isEmpty()) {
	       		return '@';
       	}
       		return data[size - 1];
	}
	private:
	char data[STACK_CAPACITY];
	int size = 0;
};

void push_all(Stack& st, const std::string& s) {
    for (char c : s) {
        st.push(c);
    }
}

void pop_all(Stack& st) {
    while (!st.isEmpty()) {
        std::cout << st.pop();
    }
    std::cout << std::endl;
}
