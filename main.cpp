//
//  main.cpp
//  QualityIsDown
//
//  Created by Apple on 13/03/21.
//
#include <math.h>
#include <iostream>

using namespace std;

int findEuclideanDistance(int a, int b){
    
    float ans = a*a + b*b;
    return pow(ans, 0.5);
    
}
int main() {

    cout << "This Project aims to find the Sqaure root of sum of sqaures of integers;"<<endl;
    cout<<"Probably the above line also may contain en error :("<<endl;
    int a, b;
    cin>>a>>b;
    cout<<findEuclideanDistance(a, b)<<endl;
    return 0;
}
