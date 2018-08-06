#include <QCoreApplication>

#include <myclass.h>

using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    myClass dog("corgi");
    dog.bark();



    return a.exec();
}
