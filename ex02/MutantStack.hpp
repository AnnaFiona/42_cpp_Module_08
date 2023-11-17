#pragma once

#include <iostream>
#include <string>
#include <stack>

template <typename T, typename container = std::deque<T> > 
class MutantStack : public std::stack<T>
{
public:
//con- and destructors
	MutantStack();
	MutantStack(const MutantStack &M);
	MutantStack	&operator = (const MutantStack &M);
	~MutantStack();

//methods
	typedef typename	container::iterator	iterator;
	iterator	begin();
	iterator	end();
};

#include "MutantStack.tpp"



template <typename T>
void	compare_equal(const T a, const T b)
{	
	std::string	red_bold("\033[1;31m");
	std::string	yellow("\033[0;33m");
	std::string white("\033[0m");
	std::string green("\033[0;32m");


	if (a == b)
		std::cout << green << "OK" << white << std::endl;
	else std::cout << red_bold << "FALSE" << white << std::endl;
}
template <typename T>
void	compare_not_equal(const T a, const T b)
{	
	std::string	red_bold("\033[1;31m");
	std::string	yellow("\033[0;33m");
	std::string white("\033[0m");
	std::string green("\033[0;32m");


	if (a != b)
		std::cout << green << "OK" << white << std::endl;
	else std::cout << red_bold << "FALSE" << white << std::endl;
}
