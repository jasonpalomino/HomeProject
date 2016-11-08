//============================================================================
// Name        : jasonMoisesProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Sally.h"
using namespace std;

//Part of Tutorial 51

int main(){
    Sally a(34);
    Sally b(21);
    Sally c;

    c=a+b;
    cout << c.num << endl;

    cout << "Hello sucker" << endl;
}
