#include <iostream>

using namespace std;

int main ()
{
   int  var;
   int  *ptr;
   int  **pptr;

   var = 125;

   // lay dia chi cua var
   ptr = &var;

   // lay dia chi cua ptr boi su dung dia chi cua toan tu &
   pptr = &ptr;

   // Lay gia tri boi su dung pptr
   cout << "Gia tri cua var la: " << var << endl;
   cout << "Gia tri tai *ptr la: " << *ptr << endl;
   cout << "Gia tri tai **pptr la: " << **pptr << endl;

   return 0;
}