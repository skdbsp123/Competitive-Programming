#include<iostream>
using namespace std;

int binarySearch(int arr[], int L, int r, int x) 
{ 
    if (r >= L) { 
        int mid = L + (r - L) / 2; 
  
        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] > x) 
            return binarySearch(arr, L, mid - 1, x); 
  
        return binarySearch(arr, mid + 1, r, x); 
    } 
 
    return -1; 
} 





int main()
{
	cout<<"enter length of array :";
	int l;
	cin>>l;
	int arr[l];
	cout<<"\nEnter elements :"<<endl;
	for(int i=0;i<l;i++)
	{
		cin>>arr[i];
	}
	int temp;
	for(int j=0;j<l;j++)
		{
		for(int k=j+1;k<l;k++)
			{
			 if(arr[j]>arr[k])
			{
				temp  =arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
			}
				
		}
	
	
	
	cout<<"Enter the element you want to search :";
	int x;
	cin>>x;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0 ,n-1,x);
	(result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
	
	
	

	return 0;
}
