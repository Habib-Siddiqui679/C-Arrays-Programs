#include<iostream>
using namespace std;
int main()
{
	int num[9]={9,3,20,66,21,8,37,25,16};
	int Largest = num[0];
	for(int i=1;i<9;i++)
	{
		if(num[i]>Largest)
		{
			Largest = num[i];
		}
	}
	cout<<"Largest number in array is "<<Largest;
}
