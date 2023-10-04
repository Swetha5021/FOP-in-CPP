/*Remove duplicate elements
Sherlock and John were investigating a murder and the murderer was Ms.Irene Adler. She wanted Sherlock to find her by solving the puzzles given by her and
the tasks given by her. Sherlock was able to solve all but one. The last task was to write a C++ program to remove the duplicate elements from an array. Can
you help Sherlock?
INPUT FORMAT:
Input consists of 1 integer and 1 array.
The first integer corresponds to the size of the array.
The next integers correspond to the elements in the array.
OUTPUT FORMAT:
The output consists of an array with no duplicate elements.
SAMPLE INPUT:
 3
 1
 5
 1
SAMPLE OUTPUT:
 1
 5

Input (stdin)
5
1
2
2
3
4

Output (stdout)
1
2
3
4                               */

#include<iostream>
using namespace std;
int main()
{
  int n,i,j,k=0,c,m=0,l;
  cin>>n;
  int a[n],b[n];
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<n;i++)
  {
    c=0;
      for(j=i+1;j<n;j++)
      {
        if(a[i]==a[j])
        {
          for(k=j;k<n;k++)
            a[k]=a[k+1];
          j-=1;
          n-=1;
        }
      }
  }
  for(i=0;i<n;i++)
    cout<<a[i]<<endl;
}
