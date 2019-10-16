#include <iostream>
#include <string>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{


    string num;
    cin>>num;
    cout<<num;
    vector <char> vec (num.begin(),num.end());
    reverse(vec.begin(),vec.end());
    for(long long i = 0 ; i < vec.size();i++)
    cout<<vec[i];
    return 0;
}
