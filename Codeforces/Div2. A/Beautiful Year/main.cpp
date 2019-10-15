#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

bool isDistinct(int x){

    ostringstream numstream;
    numstream<<x;
    string num = numstream.str();
    sort(num.begin(),num.end());
    char last = num[0];
    for(int i = 1 ; i < num.length();i++){
        if(num[i]==last)return 0;
        last=num[i];
    }

    return 1;

}

int main()
{
    int y ;
    cin>>y;
    while(true){
        if(isDistinct(++y)){
                cout<<y;
        break;
        }
    }

    return 0;
}
