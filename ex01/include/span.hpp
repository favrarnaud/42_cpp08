#pragma once

#include <iostream>
#include <list>

class span {
	private :
		std::list<int> _list;
		unsigned int _maxSize;
	public :
		span();
		span(unsigned int);
		~span();

		void addNumber(unsigned int);
		void addNumber(std::list<int>::const_iterator itBegin, std::list<int>::const_iterator itEnd);

		unsigned int shortestSpan();
		unsigned int longestSpan();

		//FORME CANONIQUE
		span(const span& src);
		span& operator=(span const &src);

		//GETTERS
		const std::list<int>* getList() const;

		//TEST
		void genBigList(int range);

		//DEBUG
		void iter();

	class noNumberException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "il n'y a pas assez de nombres pour effectuer cette commande !";
		}
	};

	class fullSpanException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "la taille de la span est trop faible pour ajouter tout les entiers !";
		}
	};
};

std::ostream& operator<<(std::ostream& os, const span& sp);