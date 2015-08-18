#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

//实现字符串旋转！

void left_rotate(char* arr,int N,int k)
{	
	k=k%N;
	if(k==0||N<=0)return;
	int i=0,j=k;
	for(;j<N;++i,++j)
		swap(arr[i],arr[j]);
	left_rotate(arr+i,k,k-N%k);
}

int main(int argc, char* argv[])
{

	const int NN=20;
	char arr[NN];
	for (int i=0;i<NN;++i)
		arr[i]=i+'0';
	for (int i=0;i<NN;++i)
		printf("%c%c",arr[i],(i==NN-1)?'\n':' ');
	int k;
	while(scanf("%d",&k)!=EOF)
	{
		left_rotate(arr, NN,k);
		for (int i=0;i<NN;++i)
			printf("%c%c",arr[i],(i==NN-1)?'\n':' '); 
	}
	return 0;
}
