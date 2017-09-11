#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int, string> myMap;
	myMap.insert(pair<int,string>(1, "udita")); // pair
	myMap.insert(pair<int, string>(2, "aditya"));
	myMap.insert(make_pair(2, "vinod"));		//make_pair
	myMap[4] = "anita";							//[] - index
	myMap.at(5) = "hello";						// .at() - index

	return 0;
}