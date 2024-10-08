#include <list>
#include "MutantStack.hpp"

int main() {

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "top = " << mstack.top() << std::endl;

    mstack.pop();
	std::cout << "Poping... " << std::endl;

    std::cout << "size = " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << "	";
        ++it;
    }
    std::stack<int> s(mstack);
    std::list<int> lst;

    lst.push_back(5);
    lst.push_back(17);

    std::cout << std::endl << "back = " << lst.back() << std::endl;

    lst.pop_back();
	std::cout << "Poping back..." << std::endl;
    std::cout << "size = " << lst.size() << std::endl;

    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::list<int>::iterator lst_it = lst.begin();
    std::list<int>::iterator lst_ite = lst.end();
    ++it;
    --it;
    while (lst_it != lst_ite)
    {
        std::cout << *lst_it << "	";
        ++lst_it;
    }
    std::list<int> l(lst);
    std::cout << std::endl;
    return 0;
}