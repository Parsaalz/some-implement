//tamrin matris mojaverati baraye geraf
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int parsa[n+1][n+1];
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<n+1;j++)
		{
			parsa[i][j]=0;
		}
	}
	pair<int,int>ali[m];
	for(int i=0;i<m;i++)
	{
		cin>>ali[i].first>>ali[i].second;
		parsa[ali[i].first][ali[i].second]=1;
		parsa[ali[i].second][ali[i].first]=1;
	}
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<n+1;j++)
		{
			cout<<parsa[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}