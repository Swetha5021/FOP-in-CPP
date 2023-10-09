/*Ascending order
Klaus Mikaelson and his daughter Hope were arguing about who is the smartest person in the family. Klaus who is a world known Computer Engineer, asked Hope who has not yet completed her college to write a C++ program to sort the given array in ascending order. Can you help Hope?

INPUT FORMAT:
Input consists of 1 integer and 1 array.
Integer corresponds to the size of the array.

SAMPLE INPUT:
5
54
68
25
14
74

SAMPLE OUTPUT:
Sorted array is:
14
25
54
68
74

Input (stdin)
4
6
7
8
3

Output (stdout)
Sorted array is:
3
6
7
8                                 */

#include<iostream>
using namespace std;
int main()
{
  int n,i,j,t;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  cout<<"Sorted array is:"<<endl;
  for(i=0;i<n;i++)
    cout<<a[i]<<endl;
}
