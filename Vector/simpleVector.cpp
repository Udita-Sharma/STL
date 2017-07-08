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
	return 0;
}