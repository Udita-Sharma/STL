#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int, string> myMap;
	myMap.insert(pair<int, string>(5, "udita")); // pair
	myMap.insert(pair<int, string>(2, "aditya"));
	myMap.insert(make_pair(3, "vinod"));		//make_pair
	myMap[4] = "anita";							//[] - index
	myMap[1]= "hello";						
	
	map<int, string>::iterator it = myMap.begin();
	for (; it != myMap.end(); it++)
	{
		cout << it->first<<"	"<<it->second << endl;
	}
	return 0;
}
/*
USharma@BLRLW5137 ~/cpp/STL/Map
$ g++ -std=c++11 map_iter.cpp

USharma@BLRLW5137 ~/cpp/STL/Map
$ ./a.exe
1       hello
2       aditya
3       vinod
4       anita
5       udita
*/