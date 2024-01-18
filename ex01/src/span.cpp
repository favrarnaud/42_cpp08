#include "../include/span.hpp"

span::span() {};

span::span(unsigned int size) {
	_maxSize = size;
	_size = 0;
}

span::~span() {};

void span::addNumber(unsigned int i) {
	if (_size < _maxSize) {
		this->_l1.push_back(i);
		_size++;
	} else {
		throw fullSpanException();
	}
}

unsigned int span::shortestSpan() {
	return (1);
}

unsigned int span::longestSpan() {
	std::list<int>::iterator it;
	int mmin = *_l1.begin();
	int mmax = *_l1.begin();
	for (it = _l1.begin(); it != _l1.end(); ++it) {
		if ((*it) < mmin)
			mmin = (*it);
		if ((*it) > mmax)
			mmax = (*it);
	}
	return (mmax - mmin);
}



//DEBUG
void span::iter() {
	std::list<int>::iterator it;
	for (it = _l1.begin(); it != _l1.end(); ++it) {
		std::cout << (*it) << std::endl;
	}
}