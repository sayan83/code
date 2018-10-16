#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	        int a = 0,b=0,t=0;
	        char c = 'z';
	        string s;
	        cin>>s;
	        for(int i = 0;s[i] != '\0';i++)
	        {
	            if(s[i] == 'A')
	            {
	                a++;
	                c = 'A';
	            }
	            else if(s[i] == 'B')
	            {
	                b++;
	                c = 'B';
	            }
	            else if(s[i] == '.' && c != 'z')
	            {
	                if(s[i + 1] != '.')
	                {
	                    if(s[i + 1] == 'A' && c == 'A')
	                    {
	                        a = a + t + 1;
	                        t = 0;
	                        c = 'z';
	                    }
	                    else if(s[i + 1] == 'B' && c == 'B')
	                    {
	                        b = b+ t + 1;
	                        t = 0;
	                        c = 'z';
	                    }
	                    else
	                    {
	                        t = 0;
	                        c = 'z';
	                    }
	                }
	                else
	                 t++;
	            }
	        }
	        cout<<a<<" "<<b<<endl;
	}
	return 0;
}
