#include <iostream>
#include "src/A.h"

using namespace std;

int main()
{
    A *a = new A();

    cout << a->x;

    a->ASDF();
}