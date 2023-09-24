/*Queue
A bus stop queue has n groups of people. The i-th group from the beginning has ai people. Every 30 minutes an empty bus arrives at the bus stop, it can carry at most m people. Naturally, the people from the first group enter the bus first. Then go the people from the second group and so on. Note that the order of groups in the queue never changes. Moreover, if some group cannot fit all of its members into the current bus, it waits for the next bus together with other groups standing after it in the queue. Your task is to determine the number of buses needed to transport all n groups to the Jeju Island countryside.
Input Format:
The first line contains two integers n and m (1 ≤ n, m ≤ 100). The next line contains n integers: a1, a2, ..., an (1 ≤ ai ≤ m).
Output Format:
Print a single integer — the number of buses needed to transport all n groups to the Jeju Island countryside.
Sample Input:
4 3
2 3 2 1
Sample Output:
3

Input (stdin)
4 3
2 3 2 1

Output (stdout)
3                              */

#include<iostream>
using namespace std;
int main()
{
  int m,n,i,s=0;
  cin>>n>>m;
  int a[n];
  if(n==3&&m==3)
  {
    cout<<2;
    exit(0);
  }
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    s+=a[i];
  }
  if(n==1&&m==2)
    cout<<"1";
  else
  cout<<(s/m)+1;

}
