#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<int> myList;

	myList.push_back(1);

	myList.push_front(2);

	list<int>::iterator it = myList.begin();

	myList.insert(++it, 3);

	myList.push_back(4);

	myList.at(2);

	for (it = myList.begin(); it != myList.end(); it++)
	{
		cout << *it << "  ";
	}

	return 0;
}