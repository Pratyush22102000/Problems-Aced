#include <iostream>
using namespace std; //This is a brute-force approach and it does not go right with the hard subtasks.

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    
    int a[n];
	for(int i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);   
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
	    for(int j = i+1; j < n;j++)
	    {
	        int val = a[i] - a[j];
	        if(val<0)
	        {
	            val = val * (-1);
	        }
	        if(val>=k)
	        {
	            count++;
	        }
	    }
	}
	
	cout<<count;
	return 0;
}




//The optimal approach to this problem is:
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int j=1;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(a[j]-a[i]>=k)
            {
                ans+=n-j;
                break;
            }
        }
    }
    
    cout<<ans;
    return 0;
}
