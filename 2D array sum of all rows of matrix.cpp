#include <iostream>
using namespace std;
int main() 
{
    int matrix[3][3];  
    cout <<"Enter Values of Matrix:" << endl;
    for (int i=0;i<3;i++) 
	{
        for (int j=0;j<3;j++) 
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
    int sum_Row1 = 0;
    for (int j=0;j<3;j++) 
	{
        sum_Row1 = sum_Row1+matrix[0][j];
    }
    cout <<"Sum of 1st Row is : "<< sum_Row1<<endl;
    int sum_Row2 = 0;
    for (int j=0;j<3;j++)
    {
        sum_Row2 = sum_Row2+matrix[1][j];
    }
    cout <<"Sum of 2nd Row is : "<<sum_Row2<<endl;
    int sum_Row3 = 0;
    for (int j=0;j<3;j++) 
	{
        sum_Row3 = sum_Row3+matrix[2][j];
    }
    cout <<"Sum of 3rd Row is:  "<<sum_Row3<<endl;
}

