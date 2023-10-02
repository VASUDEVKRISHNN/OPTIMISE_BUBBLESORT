#include<iostream>
using namespace std;
void optimbubble_sort(int arr[],int n)
{
	int i,j,temp,flag;
	for(i=1;i<n;i++)
	{
		flag=0;
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag++;
			}
		}
		if(flag==0)
		break;
	}
}
void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
}
int main()
{
	int arr[]={23,48,1,99,35},n;
	n=sizeof(arr)/sizeof(arr[0]);
	cout<<n<<endl;
	optimbubble_sort(arr,n);
	printarray(arr,n);
	return 0;
}
