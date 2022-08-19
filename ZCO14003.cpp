#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	long long n, ans=0;
	cin >> n;
	vector<long long> v(n);
	
	
	for(auto i = 0; i < n ; i++)
	{
	    cin >> v[i];
	    
	}
	sort(v.begin(), v.end());
	
	//int max1=0;
	long long max2=0;
	
	for(auto i = 0 ;i < n; i++)
	{
	 ans = v[i] *  (n-i) ;
	 
	 max2 = max(max2,ans);
	}
	cout<<max2<<endl;
	return 0;
}
