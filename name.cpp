#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string a;
    cin>>n>>a;
    string b = a;
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    cout<<"g++ -o "<< b << "_problems/"<< n <<"_"<< a << " " << b << "_problems/" << n << "_" << a << ".cpp"<<endl;
    cout<<"./"<< b << "_problems/" << n << "_" << a << endl;
}