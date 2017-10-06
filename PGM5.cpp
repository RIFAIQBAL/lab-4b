#include <iostream>
using namespace std;
int sum(int n,int m)
{
	if (n==m)
	{return n;
	}
	else 
	{
		return n+sum(n+2,m);
	}}
int main() {
	int n,m;
	cout<<"enter maximum limit"<<endl;
	cin>>m;
	cout<<"enter minimum limit";
	cin>>n;
	cout<<"sum="<<sum(n,m);

	return 0;
}
