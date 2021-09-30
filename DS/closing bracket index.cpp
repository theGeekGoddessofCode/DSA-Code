#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
        int closing (string s, int pos)
        {
        	//code here.
        	int n=s.size(),c=0,copy1,copy2;
        	for(int i=0;i<n;i++){
        	    if(s[i]=='['){
        	     c++;
        	     if(i==pos){
        	         copy1=i;
        	         copy2=c;}
        	     }
        	    else if(s[i]==']'){
        	    c--;
        	    if(c+1==copy2)
        	      return i;}  
        	}
        }
};
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int pos; cin >> pos;
        Solution ob;
		cout <<ob.closing (s, pos) << '\n';
	}
}