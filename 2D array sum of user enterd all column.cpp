#include <iostream>
using namespace std;
int main() 
{
    int matrix[3][3]; 
    cout <<"Enter the values of Matrix :"<<endl;
    for(int i=0;i<3;i++) 
	{
        for(int j=0;j<3;j++) 
		{
            cin>>matrix[i][j];
        }
    }
    cout<<"Matrix Entered By You:"<<endl;
    for(int i=0;i<3;i++)
    {
	for(int j=0;j<3;j++)
	   {
		cout<<matrix[i][j]<<" ";
	   }   
	cout<<endl;
    }
    int sum_Col1 = 0;
    for(int i=0;i<3;i++) 
	{
        sum_Col1 = sum_Col1+matrix[i][0];
    }
    cout<<"Sum of 1st Column: "<<sum_Col1<<endl;
    int sum_Col2 = 0;
    for(int i=0;i<3;i++) 
	{
        sum_Col2 = sum_Col2+matrix[i][1];
    }
    cout<<"Sum of 2nd Column: "<<sum_Col2<<endl;
    int sum_Col3 = 0;
    for(int i=0;i<3;i++) 
	{
        sum_Col3 = sum_Col3+matrix[i][2];
    }
    cout<<"Sum of 3rd Column: "<<sum_Col3 <<endl;
}

