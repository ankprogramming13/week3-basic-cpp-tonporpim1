#include <iostream>
#include <limits>
using namespace std;

int main() {
  // เขียนโปรแกรมเพิ่ม เพื่อหาขนาดตัวแปรที่กำหนด
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of signed char : " << sizeof(signed char) << endl;
   cout << "Size of unsigned char : " << sizeof(unsigned char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "signed int : " << sizeof(signed int) << endl;
   cout << "unsigned int : " << sizeof(unsigned int) << endl;
   cout << "short int : " << sizeof(short int) << endl;
   cout << "unsigned int : " << sizeof(unsigned int) << endl;
   cout << "signed short int : " << sizeof( signed short int) << endl;
   cout << "unsigned short int : " << sizeof( unsigned short int) << endl;
   cout << "long int : " << sizeof( long int) << endl;
   cout << "signed long int : " << sizeof( signed long int) << endl;
   cout << "unsigned long int : " << sizeof( unsigned long int) << endl;
   cout << "float : " << sizeof( float) << endl;
   cout << "double : " << sizeof( double) << endl;
   cout << "long double : " << sizeof( long double) << endl;
   cout << "wchar_t : " << sizeof( wchar_t) << endl;
   cout << "bool : " << sizeof( bool) << endl;
   cout << "wchar_t : " << sizeof( wchar_t) << endl;
   cout << "bool : " << sizeof( bool) << endl;





   cout << "Size of short signed int : " << sizeof(short signed int) << endl;
   cout << "Size of short unsigned int : " << sizeof(short unsigned int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;


   // เขียนโปรแกรมเพิ่มเพื่อหาช่วงของค่าที่เก็บได้
   cout << "Min of char : " << numeric_limits<char>::min() << endl;
   cout << "Max of char : " << numeric_limits<char>::max() << endl;
   cout << "Min of char : " << numeric_limits<signed char>::min() << endl;
   cout << "Max of char : " << numeric_limits<signed char>::max() << endl;
   cout << "Min of char : " << numeric_limits<unsigned char>::min() << endl;
   cout << "Max of char : " << numeric_limits<unsigned char>::max() << endl;
   cout << "Min of char : " << numeric_limits<int>::min() << endl;
   cout << "Max of char : " << numeric_limits<int>::max() << endl;
   cout << "Min of char : " << numeric_limits<signed int>::min() << endl;
   cout << "Max of char : " << numeric_limits<signed int>::max() << endl;
   cout << "Min of char : " << numeric_limits<unsigned int>::min() << endl;
   cout << "Max of char : " << numeric_limits<unsigned int>::max() << endl;
   cout << "Min of char : " << numeric_limits<short int>::min() << endl;
   cout << "Max of char : " << numeric_limits<short int>::max() << endl;
   cout << "Min of char : " << numeric_limits<signed short int>::min() << endl;
   cout << "Max of char : " << numeric_limits<signed short int>::max() << endl;
   cout << "Min of char : " << numeric_limits<unsigned short int>::min() << endl;
   cout << "Max of char : " << numeric_limits<unsigned short int>::max() << endl;
   cout << "Min of char : " << numeric_limits<long int>::min() << endl;
   cout << "Max of char : " << numeric_limits<long int>::max() << endl;
   cout << "Min of char : " << numeric_limits<signed long int>::min() << endl;
   cout << "Max of char : " << numeric_limits<signed long int>::max() << endl;
   cout << "Min of char : " << numeric_limits<unsigned long int>::min() << endl;
   cout << "Max of char : " << numeric_limits<unsigned long int>::max() << endl;
   cout << "Min of char : " << numeric_limits<float>::min() << endl;
   cout << "Max of char : " << numeric_limits<float>::max() << endl;
   cout << "Min of char : " << numeric_limits<double>::min() << endl;
   cout << "Max of char : " << numeric_limits<double>::max() << endl;
   cout << "Min of char : " << numeric_limits<long double>::min() << endl;
   cout << "Max of char : " << numeric_limits<long double>::max() << endl;
   cout << "Min of char : " << numeric_limits<wchar_t>::min() << endl;
   cout << "Max of char : " << numeric_limits<wchar_t>::max() << endl;
   cout << "Min of char : " << numeric_limits<bool>::min() << endl;
   cout << "Max of char : " << numeric_limits<bool>::max() << endl;





   cout << "Min of short int : " << numeric_limits<short int>::min() << endl;
   cout << "Max of short int : " << numeric_limits<short int>::max() << endl;
  return 0;
}
