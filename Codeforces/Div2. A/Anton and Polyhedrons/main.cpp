#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;

//problem name:
//Anton and Polyhedrons
//problem link:
//https://codeforces.com/contest/785/problem/A

int main()
{

        int n ,sum=0;
        cin>>n;
        for(int i = 0 ; i < n ; i++){
            string type;
            cin>>type;
            if(type=="Tetrahedron")sum+=4;
            else if(type=="Cube")sum+=6;
            else if(type=="Octahedron")sum+=8;
            else if(type=="Dodecahedron")sum+=12;
            else sum+=20;
        }

        cout<<sum;

    return 0;
}
