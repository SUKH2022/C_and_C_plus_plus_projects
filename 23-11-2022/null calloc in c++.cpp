#include <cstdlib>
#include <iostream>
using namespace std;

int main() 
{
   int *ptr=(int *)calloc(0, 0);
   if (ptr==NULL) 
   {
      cout << "Null pointer";
   } 
   else 
   {
      cout << "Address = " << ptr << endl;
   }
   free(ptr);
}