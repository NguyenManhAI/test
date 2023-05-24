#include <iostream>
#include <vector>
#include <map>
using namespace std;
int duyet(int n,int x,int X,vector<vector<bool>> f)
{
    int a=0;
    for(int j=0;j<n;j++)
    {
    	if(j!=x && j!=X)
    	{
    		if(f[x][j])//ton tai 2 dinh x j
	        {
	        	//cout<<x<<" "<<j<<" ";
	        	int n=duyet(n,j,x,f)+1;
                a=n; 
//	            a=(n+1>a)? n+1 : a;
				// if(a<n)
				// {
				// 	a=n;
				// }
				//cout<<n<<" ";
	        }
		}
    }
    //cout<<a;
    return n;
}
int main()
{
    //duyet theo chieu sau dfs
    int n;
    cin>>n;
    vector<vector<bool>> f(n+1,vector<bool>(n+1,false));
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        f[x][y]=true;
        f[y][x]=true;
    }
    cout<<duyet(n,0,0,f);
}