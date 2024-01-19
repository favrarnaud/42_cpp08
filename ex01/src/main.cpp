#include "../include/span.hpp"

int main() {
	std::cout << "--- premier exemple ---" << std::endl;
	try {
		span a(100);
		a.addNumber(3);
		a.addNumber(6);
		a.addNumber(17);
		a.addNumber(9);
		a.addNumber(11);
		try {
			std::cout << a.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << a.shortestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "--- deuxieme exemple ---" << std::endl;
	span b(100);
	b.genBigList(100);
	try {
		std::cout << b.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << b.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}