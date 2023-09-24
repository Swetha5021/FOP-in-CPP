/*Minimum Scalar Product
You are given two vectors v1=(x1,x2,...,xn) and v2=(y1,y2,...,yn). The scalar product of these vectors is a single number, calculated as x1y1+x2y2+...+xnyn. Suppose you are allowed to permute the coordinates of each vector as you wish. Choose two permutations such that the scalar product of your two new vectors is the largest possible, and output that maximum scalar product.
INPUT FORMAT:
The first line contains integer number n. The next two lines contain n integers each, giving the coordinates of v1 and v2 respectively.
OUTPUT FORMAT:
The output consists of a single integer Y, that corresponds to the maximum scalar product of all permutations of the two given vectors.
SAMPLE INPUT :
3
1 3 5
2 4 1
SAMPLE OUTPUT :
27

Input (stdin)
3
1 2 3
4 5 6

Output (stdout)
32                                       */

#include<iostream>
using namespace std;
int main()
{
  int n,i,j,t;
  cin>>n;
  int a[n],b[n];
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<n;i++)
    cin>>b[i];
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
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(b[i]>b[j])
      {
        t=b[i];
        b[i]=b[j];
        b[j]=t;
      }
    }
  }
  int s=0;
  for(i=0;i<n;i++)
    s+=a[i]*b[i];
  cout<<s;
}
