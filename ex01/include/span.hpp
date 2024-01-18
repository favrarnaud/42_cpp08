#pragma once

#include <iostream>
#include <list>

class span {
	private :
		std::list<int> _l1;
		unsigned int _maxSize;
		unsigned int _size;
	public :
		span();
		span(unsigned int);
		~span();

		void addNumber(unsigned int);
		unsigned int shortestSpan();
		unsigned int longestSpan();

		//DEBUG
		void iter();

	class noNumberException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "la span ne contient aucun int";
		}
	};

	class fullSpanException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "la taille de la span est trop faible pour ajouter tout les entiers";
		}
	};
};