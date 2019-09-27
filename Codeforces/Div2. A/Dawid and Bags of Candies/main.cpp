#include <iostream>
 
using namespace std;

//problem name:
//Dawid and Bags of Candies
//link:
//https://codeforces.com/contest/1230/problem/A
 
int main()
{
 
    int numbers[4];
    for(int i = 0 ; i < 4 ; i++)cin>>numbers[i];
 
    if(numbers[0]+numbers[1]==numbers[2]+numbers[3])return cout<<"YES" ,0;
    if(numbers[0]+numbers[2]==numbers[1]+numbers[3])return cout<<"YES" ,0;
    if(numbers[0]+numbers[3]==numbers[2]+numbers[1])return cout<<"YES" ,0;
    if(numbers[0]+numbers[1]+numbers[2]==numbers[3])return cout<<"YES" ,0;
    if(numbers[0]+numbers[1]+numbers[3]==numbers[2])return cout<<"YES" ,0;
    if(numbers[0]+numbers[2]+numbers[3]==numbers[1])return cout<<"YES" ,0;
    if(numbers[1]+numbers[3]+numbers[2]==numbers[0])return cout<<"YES" ,0;
    cout<<"NO";
    return 0;
}