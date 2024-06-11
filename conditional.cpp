#include<iostream>
using namespace std;
int main(){
    int a,b;
    int c,d;
    cout<<"Input 4 integers a,b,c and d"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    //For AND
    // where C++ interprets 1 as True and 0 as False
    cout<<(a>b && c>d);
    //For OR
    // where C++ interprets 1 as True and 0 as False
    cout<<(a>b || c>d);
    // Take the input according to your choice to satisfy the conditions.
}
