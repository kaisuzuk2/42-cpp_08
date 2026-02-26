/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 09:53:33 by kaisuzuk          #+#    #+#             */
/*   Updated: 2026/02/26 10:21:04 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"
#include "MutantStack.tpp"

void header(int id, const std::string &title) {
	std::cout << "\n========== " << id << ") " << title << " ==========" << std::endl; 
}

template <typename It>
void printStack(It start, It end) {
	for (; start != end; start++)
		std::cout << *start << " ";
	std::cout << std::endl;
}

int main()
{
	{
		header(0, "PDF");
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}

	{
		header(1, "iterator test");
		MutantStack<int> mstack;
		for (int i = 0; i < 10; i++)
			mstack.push(i);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		printStack(it, ite);
		for (; it != ite; it++)
			*it *= 2;
		it = mstack.begin();
		printStack(it, ite);
		std::cout << std::endl;


	}

	{
		header(2, "const iterator test");
		MutantStack<int> mstack;
		for (int i = 0; i < 10; i++)
			mstack.push(i);
		const MutantStack<int> cmstack(mstack);
		MutantStack<int>::const_iterator it = cmstack.cbegin();
		MutantStack<int>::const_iterator ite = cmstack.cend();
		printStack(it, ite);
	}

	{
		header(3, "reverse iterator");
		MutantStack<int> mstack;
		for (int i = 0; i < 10; i++)
			mstack.push(i);
		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();
		printStack(rit, rite);
	}

	{
		header(4, "const reverse iterator");
		MutantStack<int> mstack;
		for (int i = 0; i < 10; i++)
			mstack.push(i);
		const MutantStack<int> cmstack(mstack);
		MutantStack<int>::const_reverse_iterator crit = cmstack.crbegin();
		MutantStack<int>::const_reverse_iterator crite = cmstack.crend();
		printStack(crit, crite);
	}
}
