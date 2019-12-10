// linux.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
//定义矩阵
int pic[20][20];

//输入边数
int printPic(int n)
{
	int number=1;
	for(int i=0;i<=(2*n-2);i++)
	{
		if(i<n)
		{
			if(i%2==1)
			{
				int x=0;
				int y=i;
				while(x<=i&&y<=i)
				{
					pic[x][y]=number;
					number++;
					x++;
					y--;
				}
			}
			else
			{
				int x=i;
				int y=0;
				while(x<=i&&y<=i)
				{
					pic[x][y]=number;
					number++;
					x--;
					y++;
				}
			}
		}
		else
		{
			if(i%2==1)
			{
				int x=i-n+1;
				int y=n-1;
				while(x<=n-1&&y>=0)
				{


					pic[x][y]=number;
					number++;
					x++;
					y--;
				}
			}
			else
			{
				int x=n-1;
				int y=i-n+1;
				while(x>=0&&y<=n-1)
				{
					pic[x][y]=number;
					number++;
					x--;
					y++;
				}
			}
		}
	}
	return 0;
}


int main(int argc, char* argv[])
{
	int n;
	cout<<"请输入边数n"<<endl;
	cin>>n;
	int result = printPic(n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%4d",pic[i][j]);
		}
		cout<<endl;
	}
	return 0;
}

