#include "../include/span.hpp"

span::span() {};

span::span(unsigned int size) {
	_maxSize = size;
}

span::~span() {};

span::span(const span& src) {
	*this = src;
}

span& span::operator=(span const &src) {
	if (this != &src) {
		this->_maxSize = src._maxSize;
		this->_list = src._list;
	}
	return *this;
}

void span::addNumber(unsigned int i) {
	if (_list.size() < _maxSize) {
		this->_list.push_back(i);
	} else {
		throw fullSpanException();
	}
}

void span::addNumber( std::list<int>::const_iterator itBegin, std::list<int>::const_iterator itEnd ) {
	if (_list.size() > _maxSize)
		throw std::out_of_range("Span::addNumber: list is full");
	_list.insert(_list.end(), itBegin, itEnd);
}

const std::list<int> *span::getList() const {
	return &_list;
}

unsigned int span::shortestSpan() {
	if (_list.size() < 2)
		throw noNumberException();
	unsigned int  min = span::longestSpan();
	for (std::list<int>::const_iterator it = _list.begin(); it != _list.end(); ++it) {
		for (std::list<int>::const_iterator it2 = _list.begin(); it2 != _list.end(); ++it2) {
			if (it == it2) continue;
			if (std::abs(*it2 - *it) <static_cast<int>(min))
				min = std::abs(*it2 - *it);
		}
	}
	return min;
}

unsigned int span::longestSpan() {
	if (_list.size() < 2)
		throw noNumberException();
	return (*std::max_element(_list.begin(),_list.end()) - *std::min_element(_list.begin(), _list.end()));
}

void span::genBigList(int range) {
	std::srand(std::time(0));
	for (int i = 0; i < range; ++i) {
		int res = std::rand();
		addNumber(res);
	}
}

//DEBUG
void span::iter() {
	std::list<int>::iterator it;
	for (it = _list.begin(); it != _list.end(); ++it) {
		std::cout << (*it) << std::endl;
	}
}

std::ostream& operator<<( std::ostream& os, const span& sp ) {
	for (std::list<int>::const_iterator it = sp.getList()->begin(); it != sp.getList()->end(); ++it)
		os << *it << " ";
	return os;
}