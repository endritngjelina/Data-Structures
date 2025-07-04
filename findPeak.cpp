#include <iostream>

int aPeak_Iterative(int arr[], int low, int high)
{
    while(low < high)
    {
        int mid = (low + high) /2; 
        
        if(arr[mid] > arr[mid + 1])
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}

int aPeak_Recursive(int arr[], int low, int high)
{
    if(low == high)
        return low;
        
    int mid = (low + high) /2; 
        
    if(arr[mid] > arr[mid + 1])
        return aPeak_Recursive(arr, low, mid);
    
    return aPeak_Recursive(arr, mid + 1, high);
}

int main()
{
	int arr[] = {11, 5, 1, -7, -11, -21, -34};
	int size = sizeof(arr) / sizeof(arr[0]);
	int peak = aPeak_Iterative(arr, 0, size - 1);
	std::cout << "A peak: " << arr[peak];
	return 0;
}


