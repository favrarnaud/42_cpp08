#include "../include/easyfind.hpp"

int main() {
	std::vector<int> v1;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);

	std::cout << "--- valide ---" << std::endl;
	easyfind(v1, 1);
	std::cout << "--- invalide ---" << std::endl;
	easyfind(v1, 10);
}