/*Array range
Write a program to find the range of the elements in the array. Range of an array is the difference between the maximum and minimum element in an array.
INPUT & OUTPUT FORMAT:
Input consists of n+1 integers where n corresponds to the number of elements in the array.
The first integer corresponds to n and the next n integers correspond to the elements in the array.
Output consists of an integer which corresponds to the range of the array.
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
The range of the array is 4

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
The range of the array is 4               */

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,i;
  cout<<"Enter the number of elements in the array"<<endl;
  cin>>n;
  cout<<"Enter the elements in the array"<<endl;
  int a[n];
  for(i=0;i<n;i++) cin>>a[i];
    int &min = *min_element(a,a+n);
    int &max = *max_element(a,a+n);
  cout<<"The range of the array is "<<max-min;
}


