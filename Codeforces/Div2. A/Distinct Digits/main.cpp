#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;

//problem name:
//Distinct Digits
//problem link:
//https://codeforces.com/contest/1228/problem/A


int main()
{

    int x ,y ,res=-1;
    cin>>x>>y;

    for(int i = x ;i<=y ; i++){
        int num [10] = {0};
        ostringstream getnumber;
        getnumber <<i;
        string nums = getnumber.str();
        for(int c = 0 ; c<nums.length();c++){
            num[nums[c]-'0']++;
        }

        int rep = 0;
        for(int t = 0 ;t<10;t++)
            if(num[t]>=2){
                rep=1;
                break;
            }


        if(rep==0){
            res=i;
            break;
        }
    }

    cout<<res;

    return 0;
}
