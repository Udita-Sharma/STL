#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	int i;
	for (i=0;i<10;i++)
		v.push_back(i);
	for(i=0;i<v.size();i++)
	{
		v[i]= v[i]*10;
		cout<<v[i]<<endl;
	}
	v.resize(13);// len+3 (10+3)
	for (int i = 0; i<v.size(); i++)
		std::cout << ' ' << v[i];
	return 0;
}