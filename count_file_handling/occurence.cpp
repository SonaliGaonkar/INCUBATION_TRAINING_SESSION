#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    ifstream file("doc.txt"); // opening text file
    int count = 0;
    char ch[20], word[20];

    cout << "Enter a word to count:";
    gets(word);

    while (file)
    {
        file >> ch;
        if (strcmp(ch, word) == 0)
            count++;
    }

    cout << "Occurrence = " << count;
    file.close(); // closing file

    return 0;
}