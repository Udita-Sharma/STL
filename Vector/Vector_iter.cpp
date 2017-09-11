#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> myVector;

	myVector.push_back(11);
	myVector.push_back(12);
	myVector.push_back(33);
	myVector.push_back(5);

	cout << "Iterating vector without iterator" << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}

	myVector.pop_back();

	cout << "Iterating vector using iterator" << endl;
	vector<int>::iterator iter = myVector.begin();
	for (; iter < myVector.end(); iter++)
	{
		cout << *iter << endl;
	}
	return 0;
}