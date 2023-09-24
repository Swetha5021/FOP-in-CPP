/*Array mean
Write a program to find the mean of the elements in an array.
INPUT & OUTPUT FORMAT:
Input consists of n+1 integers where n corresponds to the number of elements in the array.
The first integer corresponds to n and the next n integers correspond to the elements in the array.
Output consists of an integer value which corresponds to the mean of the array.
Assume that the maximum number of elements in the array is 20.
Refer to the sample input and output for formatting specifications.
SAMPLE INPUT & OUTPUT:
Enter the number of elements in the array
5
Enter the elements in the array
2
4
1
3
5
The mean of the array is 3

Input (stdin)
5
2
4
1
3
5

Output (stdout)
Enter the number of elements in the array
Enter the elements in the array
The mean of the array is 3                          */

#include<iostream>
using namespace std;
int main()
{
  int n,i,s=0;
  cout<<"Enter the number of elements in the array"<<endl;
  cin>>n;
  cout<<"Enter the elements in the array"<<endl;
  int a[n];
  for(i=0;i<n;i++){ 
    cin>>a[i];
    s+=a[i];
  }
  cout<<"The mean of the array is "<<s/n;
}
