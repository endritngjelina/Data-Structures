#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int t)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == t)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int size, int target)
{
    int start=0, mid, end=size-1; 
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid] == target)
            return mid;
        
        else if(target>arr[mid]) 
            start=mid+1;
        else              
            end=mid-1;
    }
    return -1;
}

int main()
{
	int arr[] = {1, 119, 1000, 1003, 1004};
	int target = 1004;
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<(binarySearch(arr, size, target));
	return 0;
}



