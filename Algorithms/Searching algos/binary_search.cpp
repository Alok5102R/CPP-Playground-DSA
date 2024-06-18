// Binary Search (Requires sorted array) 
 // Time complexity => Best case: O(1), Worst case: O(logn)
 // Space complexity = O(1)
 
#include <iostream>
#include <vector>
using namespace std;

int main() {

    const int n = 7;
    int arraynew[n] = {1,5,9,15,18,24,29};
    
    
    int left=0, right=n-1, mid=0;           // Contains index
    int key2=-1;                            // Contains value
    int flag=0;
    
    // User Input
    cout<<"Enter key to search: \n";
    cin>>key2;
    
    while(left<=right)
    {
        mid = (left+right)/2;
        
        if(key2<arraynew[mid])
        {
            right = mid-1;
        }
        else if(key2>arraynew[mid])
        {
            left = mid+1;
        }
        else
        {
            // key == arraynew[mid] // Key found
            cout<<"Key found at: "<<mid;
            flag=1;
            break;
        }
    
    }
    
    if(flag==0)
    {
        cout<<"Key not found";
    }
    
    return 0;
}


// ================================= Binary Search (Using Recursion) ==============================


// Binary Search (Requires sorted array) 
// Time complexity => Best case: O(1), Worst case: O(logn)
// Space complexity = O(logn)
 
void binary_search(int arr[], int low, int high, int key)
{
    if(low<=high)
    {
        int mid = low + (high-low)/2;
        if(key==arr[mid])
        {
            cout<<"Key found at: "<<mid;
        }
        else if(key<arr[mid])
        {
            binary_search(arr, low, mid-1, key);
        }
        else
        {
            binary_search(arr, mid+1, high, key);
        }
    }
    else
    {
        cout<<"Key not found";
        return;
    }
}

// int main()
// {
//     const int n = 7;
//     int arraynew[n] = {1,5,9,15,18,24,29};
//     int left=0, right=n-1;          // Contains index
//     int key2=9;                     // Contains value
    
//     binary_search(arraynew, left, right, key2);

//     return 0;
// }