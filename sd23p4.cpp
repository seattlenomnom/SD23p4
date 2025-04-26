/* sd23p4.c++ is the source file for sd23p4
 * sd23p4  is a example program from, Dmitrovic, Slobodan, Modern C++ for
 * the Absolute Beginner, Apress, 2020.
 *
 *
 * DESCRIPTION:
 * Default constructors, member initialization, copy constructor,
 * copy assignment, move constructor, and move assignment are practices. The
 * resulting code is pushed to github.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * NOTES:
 *
 * Thu 24 Apr 2025 11:37:26 PM PDT
 * Initial project setup on local host and github. First commit and push.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
*/



/* imports              */





/* includes             */

#include <iostream>






/* defines              */




/* class declarations  */

class MyClass
{
    private:
        int x;
        double d;
    public:
        MyClass(int xx, double dd);
        void printdata();
};






int main() {

    MyClass o{123, 456.789};           // invoke user provided constructor
    o.printdata();



    return 0;


}





/* method definitions  */

MyClass::MyClass(int xx, double dd) : x{xx}, d{dd}
{

}

void MyClass::printdata()
{
    std::cout << "x is: " << x << ", d is: " << d << '\n';
}










