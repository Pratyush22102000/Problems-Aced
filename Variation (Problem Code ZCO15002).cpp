#include <iostream>
using namespace std;

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
