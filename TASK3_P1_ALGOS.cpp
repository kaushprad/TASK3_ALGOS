#include<bits/stdc++.h>
#include<sstream>
using namespace std;
#define ll long long

int sumOfDigits(string str)
{
int sum=0;
string sub;
int l=str.length();         
vector<ll>arr(l,0);                  
for(int i=0;i<l;i++)
    {
        sub=str[i];                     //Storing nemeric character at ith endex of string to string sub.
        stringstream kp(sub);           //Converting the character of the number taken in as string to numeric data type.
        kp>>arr[i];                     //Storing that character to indices of vector.
    }    
for(int i=0;i<l;i++)                    //Computing the sum of digits and storing it in sum.
          sum+=arr[i];             
      return sum;
}


int main()
{
    string s;                           //Since the input is too large for even unsigned Long Long, we will take in the number as a string.
    cin>>s;
    int i=0;
    int newn=0;
   
    while(s.length()>1)
    {
        newn=sumOfDigits(s);
        i++;
        s=to_string(newn);              //Restoring the sumOfDigits to s so that it could be passed again.
    }
   cout<<i<<endl;
   return 0;
}
