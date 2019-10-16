#include <iostream>

using namespace std;

int main()
{

   int n , k ,coverd=0;
   cin>>n>>k;
   for(int i = 0 ; i <n;i++){
    int x , y;
    cin>>x>>y;
    coverd+=(y-x)+1;

   }

    if(coverd % k ==0)cout<<0;
    else cout<<k-(coverd%k);

    return 0;
}
