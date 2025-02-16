#include<iostream>
using namespace std;
int main()
{
	int mat1[2][2];
	int mat2[2][2];
	int mult[2][2];
	cout<<"Enter 1st matrix values:"<<endl;
	for(int i=1;i<=2;i++)
	{
		for(int j=1;j<=2;j++)
		{
			cin>>mat1[i][j];
		}
	}
	cout<<"1st Matrix Entered By You:"<<endl;
	for(int i=1;i<=2;i++)
	{
		for(int j=1;j<=2;j++)
		{
			cout<<mat1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Enter 2nd matrix values:"<<endl;
	for(int i=1;i<=2;i++)
	{
		for(int j=1;j<=2;j++)
		{
			cin>>mat2[i][j];
		}
	}
	cout<<"2nd Matrix Entered By You:"<<endl;
	for(int i=1;i<=2;i++)
	{
		for(int j=1;j<=2;j++)
		{
			cout<<mat2[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=1;i<=2;i++)
	{
		for(int j=1;j<=2;j++)
		{
			mult[i][j] =mat1[i][j]*mat2[i][j];
		}
	}
	cout<<"Result of multiplication is :"<<endl;
	for(int i=1;i<=2;i++)
	{
		for(int j=1;j<=2;j++)
		{
			cout<<mult[i][j]<<" ";
		}
		cout<<endl;
	}
}
