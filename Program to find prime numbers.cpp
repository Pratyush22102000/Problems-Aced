#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> primes;
    primes.push_back(2);
    int count=0;
    int n;
    std::cin>>n;
    for(int i=3;i<n;i++)
    {for(int j=0;j<primes.size();j++)
       { if(i==51)
       {
           break;
       }
          else if(i%primes[j]==0)
       {
           break;
       }
         else  if(i%primes[j]!=0)
        {   count++;

        if(count==primes.size())
       { primes.push_back(i);
         count=0;
    }}}}
    for(auto i=0;i<primes.size();i++)
    {

        std::cout<<primes[i]<<endl;
    }
    //print the values of vector and we will get the primes in the defined range

    return 0;
}

