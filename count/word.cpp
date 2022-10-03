#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    char filename[30], ch, str[1000];
    int tot = 0, i = 0, tot_word = 0;
    string temp;
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
    while (fp >> temp)
    {
        if (temp == "\n" || temp == "\r" || temp == "\t")
            continue;
        tot_word++;
    }
    fp.close();
    cout << endl
         << "Total Words = " << tot_word;
    cout << endl;
    return 0;
}
