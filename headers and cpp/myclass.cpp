#include "myclass.h"
//#include <iostream> //norm (?)
//#include <string>
using namespace std;

myClass::myClass(string name)
{
objName = name;
cout<<"obj "<<objName<<" created!"<<endl;
}

void myClass::bark()
{
    cout<<"gav gav"<<endl;
}
