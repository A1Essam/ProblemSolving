#include <iostream>

using namespace std;

int main()
{

    string statment , add , lift,right;
    cin>>statment;
    cin>>add;
    int mid = statment.find("|");
    lift = statment.substr(0,mid);
    right = statment.substr(mid+1);
    for(char cc : add){
        if(lift.size()<right.size())lift+=cc;
        else right+=cc;

    }

    if(lift.size()!=right.size())cout<<"Impossible";
    else cout<<lift<<'|'<<right;


    return 0;
}
