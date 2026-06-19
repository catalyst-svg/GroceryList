#ifdef "ARRSTACK_H_"
#define "ARRSTACK_H_"

#include "mainIncludes.h"


template <typename T,size_t N>
class stackArray
{
	size_t top_index;
	std::array<T,N> undo_stack;
public:
	stackArray(size_t cap);
	
	bool getSize() const;
	bool isEmpty() const;
	bool isFull() const;

	bool push(const T& new_val);
	T pop();
	T peek() const; 
};

