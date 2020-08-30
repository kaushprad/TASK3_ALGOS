#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin>>n;
     int m;
     cin>>m;
     vector<int> arr(m,0);
     for(int i=0;i<m;i++)
         cin>>arr[i];
     
     sort(arr.begin(), arr.end(), greater<int>());            //Sorting the array in descending order initially to get weakest brick at last index.
     for(int i=m-1;i>n-1;i--)                                 //Reducing the size of array from m to n by adding two of the weakest bricks.
     {
        arr[i-1]=arr[i]+arr[i-1];                             //Adding strengths of two weakest bricks.
        sort(arr.begin(), arr.end(), greater<int>());         //Sorting the array in descending order everytime it gets modified so that weakest brick remains at last index.
        arr.resize(i-1);                                      //Resizing the array to reduce the number of bricks by 1 everytime we add two bricks.
     }
     cout<<arr[n-1]<<endl;                                    //The weakest brick will be stored at the last index.
     return 0;
}
