#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	        int m = 1,p=0,n,u,d;
	        cin>>n>>u>>d;
	        int h[n];
	        for(int i = 0;i<n;i++)
	        cin>>h[i];
	        for(int i = 0;i<(n-1);i++)
	        {
	            if(h[i]<=h[i+1] && (h[i+1] - h[i]) <= u)
	              m++;
	            else if(h[i] > h[i+1] && (h[i] - h[i+1]) <= d)
	              m++;
	            else if(h[i] > h[i+1] && (h[i] - h[i+1]) > d && p == 0)
	            {
	                m++;
	                p = 1;
	             }
	            else
	              break;
	        }
	        cout<<m<<endl;
	}
	return 0;
}
