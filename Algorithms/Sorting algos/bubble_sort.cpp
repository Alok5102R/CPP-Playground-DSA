// Bubble Sort
// Time complexity = Best case:O(n), Worst case:O(n^2)
// Space complexity = O(1)

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> listnums = {23,578,4,7679,167,0,28};
  int temp = 0, swap = 0;
  
  // For Loop approach =====================
  
  for(int i=0;i<listnums.size();i++)
  {
   for(int j=0;j<listnums.size()-1;j++)
   {
   if(listnums[j]>listnums[j+1])
   {
   swap = 1;
   temp = listnums[j];
   listnums[j] = listnums[j+1];
   listnums[j+1] = temp;
   }
   }
   if(swap==0)
   {
   break;
   }
  }

  
   // While Loop approach =====================
  
   swap = 0;
   while(swap==0)
   {
     for(int j=0;j<listnums.size()-1;j++)
     {
       if(listnums[j]>listnums[j+1])
       {
         swap = 1;
         temp = listnums[j];
         listnums[j] = listnums[j+1];
         listnums[j+1] = temp;
       }
     }
     
     if(swap==0)
     {
       break;
     }
       else
     {
       swap=0;
     }
   }

  
  for(int i=0;i<listnums.size();i++)
  {
     cout<<listnums[i]<<"\n";
  }
  
  return 0;
}
