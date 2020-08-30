#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;                              //Taking the input for n.
    cin>>n;
    int x=0;                            //Initialsing a variable x as zero which will be later used to put distinct elements in array.
    int sum=0;
    vector<int> v(n+1,0);
    for(int i=2;i<=n;i++)               //The logic being used here is that a distinct element  will be introduced in the array at every prime index.
    {
         if(v[i]==0)
          {
          x++;
          for(int j=i;j<=n;j+=i)        //Assiging the distinct value introduced at index i to all the multiples of i in the array.
              v[j]=x;
          }
    }
    sum=x*(x+1)/2;                      //Since we have assigned values to the array through x by incrementing it by 1 step by step,
    cout<<sum<<endl;                    //therefore value of x represents max distinct value present in the array.
                                        //To get  the sum of all distinct values of array, finding sum of integers from 1 to x will suffice.
    
    
    return 0;
        
}