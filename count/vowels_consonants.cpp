#include <iostream>
#include <fstream>

using namespace std;
int main()
{
   char filename[30], ch, str[1000];
   int j = 0, tot = 0, vowels = 0, a = 0, e = 0, i = 0, o = 0, u = 0;
   ifstream fp;
   cout << "Enter the Name of File: ";
   cin >> filename;
   fp.open(filename, ifstream::in);
   if (!fp)
   {
      cout << endl
           << "File doesn't exist or Access denied!";
      return 0;
   }
   while (fp >> noskipws >> ch)
   {
      str[tot] = ch;
      tot++;
   }
   fp.close();
   str[tot] = '\0';
   while (str[j] != '\0')
   {
      if (str[j] == 'a' || str[j] == 'A')
         a++;
      if (str[j] == 'e' || str[j] == 'E')
         e++;
      if (str[j] == 'i' || str[j] == 'I')
         i++;
      if (str[j] == 'o' || str[j] == 'O')
         o++;
      if (str[j] == 'u' || str[j] == 'U')
         u++;

      j++;
   }
   cout << endl
        << "Total Number of Vowel a = " << a;
   cout << endl
        << "Total Number of Vowel e = " << e;
   cout << endl
        << "Total Number of Vowel i = " << i;
   cout << endl
        << "Total Number of Vowel o = " << o;
   cout << endl
        << "Total Number of Vowel u = " << u;
   cout << endl;

   return 0;
}