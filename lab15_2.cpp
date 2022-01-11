#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double m[][N])
{
	for(int k=0;k<N;k++)
	{
		cout<<"Row "<<k+1<<": ";
		for(int t=0;t<N;t++)
		{
			cin>>m[k][t];
		}
	}
}

void findLocalMax(const double m[][N], bool b[][N])
{

	for(int i=0;i<N;i++)
	{
		for(int j =0 ;j<N ;j++)
		{
			b[i][j]=0;
		}
	}

	for(int i=1;i<N-1;i++)
	{
		for(int j =1 ;j<N-1 ;j++)
		{
			if(m[i][j]>=m[i-1][j] && m[i][j]>=m[i+1][j] && m[i][j]>=m[i][j-1] && m[i][j]>=m[i][j+1])
			{
				b[i][j]=1;
			}
		}
	}
}

void showMatrix(const bool z[][N])
{
	for (int i=0 ;i<N ;i++)
	{
		for (int j=0;j<N ;j++ )
		{
			cout <<z[i][j]<<" ";

		}
		cout <<"\n";
	}


}
