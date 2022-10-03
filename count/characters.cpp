#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
        char ch, filename[50];
        int i = 0, count = 0, tot_word = 0;
        string temp;
        ifstream file;
        cout << "Enter filename : ";
        cin >> filename;

        file.open(filename, ifstream::in);
        if (!file)
        {
                cout << filename << "file doesnot exist....\n";
                return 0;
        }

        while (file >> ch)
        {
                count++;
        }

        std::cout << "\nNo.of characters in a file = " << count << "\n";
        while (file >> temp)
        {
                if (temp == "\n" || temp == "\r" || temp == "\t")
                        continue;
                tot_word++;
        }
        file.close();
        cout << endl
             << "Total Words = " << tot_word;
        cout << endl;
        return 0;
}