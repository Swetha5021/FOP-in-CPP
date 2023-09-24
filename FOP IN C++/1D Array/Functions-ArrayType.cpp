/*Functions – Array type
Write a program to find the type of array. An array is said to be “Even” if all the elements in the array are even. An array is said to be “Odd” if all the elements in the array are odd. An array is said to be “Mixed” if it contains some odd elements and some even elements.
Input & Output Format:
Input consists of n+1 integers where n corresponds to the number of elements in the array.
The first integer corresponds to n and the next n integers correspond to the elements in the array.
Assume that the maximum number of elements in the array is 20.
Refer to the sample input and output for formatting specifications.
Sample Input & Output:
Enter the number of elements in the array
5
Enter the elements in the array
2
4
1
3
5
The array is Mixed

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
The array is Mixed                                        */

#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cout<<"Enter the number of elements in the array"<<endl;
  cin>>n;
  int a[n];
  cout<<"Enter the elements in the array"<<endl;
  for(i=0;i<n;i++) cin>>a[i];
  int x=0,y=0;
  for(i=0;i<n;i++)
  {
    if(a[i]%2==0) x+=1;
    else  y++;
  }
  if(x==n) 
    cout<<"The array is Even";
  else if(y==n)
    cout<<"The array is Odd";
  else
    cout<<"The array is Mixed";
}
