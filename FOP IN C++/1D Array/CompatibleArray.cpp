/*Compatible array
Two arrays are said to be compatible if they are of the same size and if the ith element in the first array is greater than or equal to the ith element in the second array for all the values of i. Write a program to find whether 2 arrays are compatible or not.

INPUT FORMAT:
Input consists of 2n+2 integers. 
The first integer corresponds to ‘n1’, the size of the first array. 
The next ‘n1’ integers correspond to the elements in the first array. 
The next (n+1) integer corresponds to 'n2', the size of the second array. 
The last 'n2' integers correspond to the elements in the second array. 
Assume that the maximum value of n is 15.

OUTPUT FORMAT:
Refer sample output for details.

SAMPLE INPUT:
5

2
3
6
8
1

5

1
1
1
1
1
SAMPLE OUTPUT:
Compatible

Input (stdin)
5

2
3
6
8
1

5

1
1
1
1
1

Output (stdout)
Compatible                           */

#include<iostream>
using namespace std;
int main()
{
  int m,n,i,j,x=0,y=0;
  cin>>m;
  int a[m];
  for(i=0;i<m;i++) cin>>a[i];
  cin>>n;
  int b[n];
  for(i=0;i<n;i++) cin>>b[i];
  if(m==n)
  {
    for(i=0;i<n;i++)
    {
      if(a[i]>=b[i])
        x++;
    }
    if(x==n)
      cout<<"Compatible";
    else
      cout<<"Incompatible";
  }
  else
    cout<<"Incompatible";
}

