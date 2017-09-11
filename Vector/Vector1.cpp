/*1. a x (Adds an element x to the vector A at the end )
2. b (Sorts the vector A in ascending order )
3. c (Reverses the vector A)
4. d (prints the size of the vector)
5. e (prints space separated values of the vector)
5. f  (Sorts the vector A in descending order)
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortInAscending(vector<int> v)
{
	sort(v.begin(), v.end());
	cout << "Sorted ascending: " << endl;
	for (auto x : v)
	{
		cout << x << endl;
	}
}

void reverse(vector<int> v)
{
	std::reverse(v.begin(), v.end());
	cout << "Reverse: " << endl;
	for (auto x : v)
	{
		cout << x << endl;
	}
}


void sortInDesc(vector<int> v)
{
	sort(v.begin(), v.end(),greater<int>());
	cout << "Sorted descending: " << endl;
	for (auto x : v)
	{
		cout << x << endl;
	}

}
int main()
{
	vector <int> v = { 1, 22, 13 };
	
	v.push_back(4);//1
	
	for (auto x : v)
	{
		cout <<x << endl;
	}

	sortInAscending(v);//2

	reverse(v);//3
	

	cout << "Size is: " << v.size() << endl;//4

	cout << "Vector is: ";//5
	for (auto x : v)
	{
		cout << x << "	";
	}
	cout << endl;

	sortInDesc(v);//6

	return 0;
}