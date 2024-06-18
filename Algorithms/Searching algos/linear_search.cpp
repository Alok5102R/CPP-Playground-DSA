// Linear Search 
// Time complexity = O(n), Space complexity = O(1)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> listnums = {1,5,2,7,3,9};
    int key=0,flag=0;
    
    cout<<"Input element to search: \n";
    cin>>key;
    for(int i=0;i<listnums.size();i++)
    {
        if(key==listnums[i]){
            cout<<"Key found at: "<<i;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Element not found";
    }
    return 0;
}