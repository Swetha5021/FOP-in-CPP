/*Same or Not
The Modern World Cinderella, was happy to meet The Prince Charming in the ball room and she danced with him happily. While she was dancing , Prince wanted 
to check whether Cinderella is the perfect suit for him. He asked her a question to check her knowledge on Arrays. Can you help Cinderella to write a C++ 
program to find whether the two arrays are the same or not. (Two arrays are said to be the same if the sum of both the arrays is the same and the size of 
arrays is the same).
INPUT FORMAT:
Input consists of 2 integers and 2 arrays.
Integers correspond to the size of arrays.
If two arrays are same, display "Same" else display "Not Same"
SAMPLE INPUT:
3
3
1
2
3
1
2
3
SAMPLE OUTPUT:
Same

Input (stdin)
4
4
1
2
3
4
1
2
3
4                                

Output (stdout)
Same                                 */

#include<iostream>
using namespace std;
int main()
{
  int m,n,i,x=0,y=0;
  cin>>m>>n;
  int a[m],b[n];
  for(i=0;i<m;i++)
  {
    cin>>a[i];
    x+=a[i];
  }
  for(i=0;i<n;i++)
  {
    cin>>b[i];
    y+=b[i];
  }
  if(x==y)
    cout<<"Same";
  else
    cout<<"Not Same";
  
}
