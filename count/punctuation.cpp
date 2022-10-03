#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int i = 0, countPuncMarks = 0;
    char filename[30], ch, str[1000];
    int tot = 0;
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

    // Checks whether given character is punctuation mark
    while (fp >> noskipws >> ch)
    {
        str[tot] = ch;
        tot++;
    }
    fp.close();
    str[tot] = '\0';
    while (str[i] != '\0')
    {
        if (str[i] == '!' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '?' ||
            str[i] == '-' || str[i] == '\'' || str[i] == '\"' || str[i] == ':')

            countPuncMarks++;
        i++;
    }
    cout << endl
         << "Total Number of punctuation marks = " << countPuncMarks;
    return 0;
}