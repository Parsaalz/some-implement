//tamrin list mojaverati nahve negah dashtan geraf
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n,m;cin>>n>>m;
	pair<int,int>list[m];
	for(int i=0;i<m;i++)
	{
		cin>>list[i].first>>list[i].second;
	}
	vector<int>parsa[n+1];
	for(int i=0;i<m;i++)
	{
		int p1=1;
		int p2=1;
		for(int j=0;j<parsa[list[i].first].size();j++)
		{
			if(parsa[list[i].first][j]==list[i].second)
			{
				p1=0;
			}
		}
		for(int j=0;j<parsa[list[i].second].size();j++)
		{
			if(parsa[list[i].second][j]==list[i].first)
			{
				p2=0;
			}
		}
		if(p1==1)
		{
			parsa[list[i].first].push_back(list[i].second);
		}
		if(p2==1)
		{
			parsa[list[i].second].push_back(list[i].first);
		}
	}
	for(int i=1;i<n+1;i++)
	{
		cout<<i<<"::==>";
		for(int j=0;j<parsa[i].size();j++)
		{
			cout<<parsa[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}