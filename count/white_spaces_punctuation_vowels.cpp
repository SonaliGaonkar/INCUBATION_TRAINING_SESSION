#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    int b = 0, c = 0, countPuncMarks = 0, white_spaces = 0;

    int j = 0, vowels = 0, a = 0, e = 0, i = 0, o = 0, u = 0;
    char filename[30], ch, str[1000];
    int tot = 0;
    ifstream file;
    cout << "Enter the Name of File: ";
    cin >> filename;
    file.open(filename, ifstream::in);
    if (!file)
    {
        cout << endl
             << "File doesn't exist or Access denied!";
        return 0;
    }

    while (file >> noskipws >> ch)
    {
        str[tot] = ch;
        tot++;
    }
    file.close();
    str[tot] = '\0';

    // number of blank spaces
    while (str[c] != '\0')
    {
        if (str[c] == ' ')
            white_spaces++;
        c++;
    }
    cout << endl
         << "Total Number of White Spaces = " << white_spaces;
    cout << endl;

    // number of punctuation mark
    while (str[b] != '\0')
    {
        if (str[b] == '!' || str[b] == ',' || str[b] == ';' || str[b] == '.' || str[b] == '?' ||
            str[b] == '-' || str[b] == '\'' || str[b] == '\"' || str[b] == ':')

            countPuncMarks++;
        b++;
    }
    cout << endl
         << "Total Number of punctuation marks = " << countPuncMarks << endl;

    // no of words starting with each vowel in file
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