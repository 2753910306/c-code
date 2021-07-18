#include<stdio.h>

int ef(int arr[], int k, int sz)
{
	int left=0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if ( arr[mid]<k)
			left=mid+1;
		else if (arr[mid] > k)
			right=mid-1;
		else
			return mid;
	}
	return -1;

}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int flag=ef(arr, k, sz);
	if(flag==-1)
		printf("\n查无此数！");
	else
		printf("所查找的数的下标是：%d", flag);
	return 0;
}
