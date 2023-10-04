/*Count distinct elements
Howard Wolowitz and Rajesh Koothrapalli were developing a plan to find the ideal woman for Sheldon Cooper. There were puzzles, translations and questions to check a person's intelligence. One such question was to come up with a C++ program to count the number of distinct elements in an array. Ramona Nowitzki is a postdoctoral researcher and former graduate student of Caltech who is a huge fan of Sheldon's work and she wanted to impress Sheldon by writing a program to count the number of distinct elements in an array. Can you help Ramona?
INPUT FORMAT:
Input consists of 1 integer and 1 array. The first integer corresponds to the size of the array.
SAMPLE INPUT:
6
2
6
6
4
5
5
SAMPLE OUTPUT:
There are 4 distinct elements in the array.

Input (stdin)
5
1
2
3
3
4

Output (stdout)
There are 4 distinct element in the array.                      */

#include<iostream>
using namespace std;
int main()
{
  int n,i,j,c,k;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<n;i++)
  {
    c=0;
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
        c++;
    }
    if(c==0)
      k+=1;
  }
  cout<<"There are "<<k-2<<" distinct element in the array.";
}


