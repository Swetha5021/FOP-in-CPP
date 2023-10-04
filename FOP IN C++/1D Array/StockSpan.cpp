/*Stock span
The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days. The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day. Now, you need to find out the span values for the given number of days and their daily prices. For example, if an array of 7 day's prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6} .
Input Format:
Input consists of n+1 integers. The first integer corresponds to n, the number of days. The next n integers correspond to stock prices on days 1, 2...n.
Output Format:
The output consists of n integers that correspond to the span values.
Sample Input:
7
100
80
60
70
60
75
85
Sample Output:
1
1
1
2
1
4
6

Input (stdin)
7
100
80
60
70
60
75
85

Output (stdout)
1
1
1
2
1
4 
6                                    */

#include<iostream>
using namespace std;
int main()
{
  int n,i,j;
  cin>>n;
  int a[n],b[n];
  for(i=0;i<n;i++)
    cin>>a[i];
  int x=1,y=0;
  cout<<1;
  for(i=1;i<n;i++)
  {
    if(a[i]>a[i-1])
    {
      y+=2;cout<<endl<<y;
    }
    else
    {
      cout<<endl<<x;
    }
  }
}


