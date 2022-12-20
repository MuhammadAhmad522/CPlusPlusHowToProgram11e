// ex07_07.cpp
// What does this program do?
#include <iostream>

void mystery1(char*, const char*); // prototype

int main() {
   char string1[80]{};
   char string2[80]{};

   std::cout << "Enter two strings: ";
   std::cin >> string1 >> string2;
   mystery1(string1, string2);
   std::cout << string1 << '\n';
} 

// What does this function do?
void mystery1(char* s1, const char* s2) {
   while (*s1 != '\0') {
      ++s1;
   }

   for (; (*s1 = *s2); ++s1, ++s2) {
      ; // empty statement
   }
} 



/**************************************************************************
 * (C) Copyright 1992-2022 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
