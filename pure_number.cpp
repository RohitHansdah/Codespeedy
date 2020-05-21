// Nth Pure no.
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
vector<string>ans;
queue<string>q;
cout<<"Enter a number : ";
cin>>n;
cout<<n<<endl;
//Insert First 2 Pure numbers
string first="44";
q.push(first);
string second="55";
q.push(second);
while(ans.size()<n)
{
string temp=q.front();
q.pop();
ans.push_back(temp);
q.push("4" + temp + "4");
q.push("5" + temp + "5");
}
if(n==1)
{
ans[0]=first;
}
else if(n==2)
{
ans[1]=second;
}
cout<<"The "<<n<<" th Pure no. is : "<<ans[n-1]<<endl;
return 0;
}
