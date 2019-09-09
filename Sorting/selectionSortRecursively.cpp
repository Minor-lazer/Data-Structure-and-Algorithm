#include <iostream> 
using namespace std; 
int minIndex(int a[], int i, int j) 
{ 
    if (i == j) 
        return i; 
    int k = minIndex(a, i + 1, j); 
  
    return (a[i] < a[k])? i : k; 
} 
void recurSelectionSort(int a[], int n, int index = 0) 
{ 

    if (index == n) 
       return; 
  
    int k = minIndex(a, index, n-1); 

    if (k != index) 
       swap(a[k], a[index]); 
     recurSelectionSort(a, n, index + 1); 
} 
   
int main() 
{ 
    int arr[1000],n; 
    cin >> n;
    for(int i=0;i<n;i++)
    {
    	cin >> arr[i];
    }
  
    recurSelectionSort(arr, n); 
  
    for (int i = 0; i<n ; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
    return 0; 
} 