#include<iostream>
using namespace std;
int main()
{
	int num[9]={9,3,20,66,21,8,37,25,16};
	int smallest = num[0];
	for(int i=1;i<9;i++)
	{
		if(num[i]<smallest)
		{
			smallest = num[i];
		}
	}
	cout<<"Smallest number in array is "<<smallest;
}
