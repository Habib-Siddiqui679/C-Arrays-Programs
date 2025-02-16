#include <iostream>
using namespace std;
int main() 
{
    int matrix[3][3];  
    int Sum = 0;  
    cout <<"Enter the values of Matrix:"<<endl;
    for (int i=0;i<3;i++)
	{
        for (int j=0;j<3;j++) {
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
    for (int i=0;i<3;i++) 
	{
        Sum = Sum + matrix[i][i];
    }
    cout <<"Sum of the diagonal is: "<<Sum<<endl;
}

