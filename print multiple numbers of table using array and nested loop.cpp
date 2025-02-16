#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter how many numbers you want to print table:" ;
	cin>>n;
	int num[n];
	cout<<"Enter numbers"<<endl;
	for(int k=0;k<n;k++)
	{
	cin>>num[k];
    }
    cout<<"You Required Ouput is:"<<endl;
	for(int i=1;i<=10;i++)
	{
		//cout<<"Multiplication Table of :"<<num[i]<<"is :"<<endl;
		for(int j=0;j<n;j++)
		{
			cout<<num[j]<<"*"<<i<<"="<<num[j]*i<<"\t";
		}
		cout<<endl;
	}
}
