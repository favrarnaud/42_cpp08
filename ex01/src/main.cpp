#include "../include/span.hpp"

int main() {
	try {
		span a(100);
		a.addNumber(3);
		a.addNumber(6);
		a.addNumber(17);
		a.addNumber(9);
		a.addNumber(11);
		std::cout << "La range la plus grande de cette span est de : " << a.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}