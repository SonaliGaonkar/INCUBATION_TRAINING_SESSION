#include <iostream>
#include <fstream>

using namespace std;
int main()
{
        char ch, filename[50];
        int count = 0;
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
        return 0;
}