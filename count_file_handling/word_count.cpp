#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
int main()
{
    char filename[30], ch[1000], word[20];
    int wordcount = 0;
    string temp;
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

    while (file >> temp)
    {
        if (temp == "\n" || temp == "\r" || temp == "\t")
            continue;
        wordcount++;
    }
    cout << endl
         << "Total Words = " << wordcount;
    cout << endl;

    file.close();
    return 0;
}