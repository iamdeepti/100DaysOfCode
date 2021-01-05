// C++ program to print sums of all possible 
// subsets. 
#include<bits/stdc++.h> 
using namespace std; 
fstream fout("output.txt");
// Prints sums of all subsets of arr[l..r] 
void subsetSums(int arr[], int l, int r, 
				int sum=0) 
{ 
	// Print current subset 
	if (l > r) 
	{ 
		fout << sum << " "; 
		return; 
	} 

	// Subset including arr[l] 
	subsetSums(arr, l+1, r, sum+arr[l]); 

	// Subset excluding arr[l] 
	subsetSums(arr, l+1, r, sum); 
} 

// Driver code 
int main() 
{ 
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,13,14}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
    
	subsetSums(arr, 0, n-1); 
	return 0; 
} 
