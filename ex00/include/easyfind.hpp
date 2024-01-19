#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template < typename T >
void    easyfind( T& container, int value )
{
	if ( std::find( container.begin(), container.end(), value ) != container.end() )
		std::cout << "Bon ben je crois que je l'est trouve ^^." << std::endl;
	else
		std::cout << "Oups... il va faloir chercher ailleur !." << std::endl;
}