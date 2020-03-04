//
//  bool.cpp
//  
//
//  Created by AMIT PATEL on 4/08/2016.
//
//

#include "bool.hpp"
#include <iostream>
using namespace std;
bool func();
bool func2();
int main()
{
    func();
}

bool func2()
{
    cout <<"called me"<<endl;
    return true;
}
bool func()
{
    return (true ||func2());
}