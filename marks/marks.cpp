#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
        string fname;
        cout << "Enter the file name: ";
        cin >> fname;
        vector<vector<string>> content;
        vector<string> row;
        string line, word;

        fstream file(fname, ios::in);
        if (file.is_open())
        {
                while (getline(file, line))     //getline to read file line by line
                {
                        row.clear();

                        stringstream str(line);   //stringstream is used to extract words that are seperated in line 

                        while (getline(str, word, ','))
                                row.push_back(word);
                        content.push_back(row);
                }
        }
        else
                cout << "Could not open the file\n";

        for (int i = 0; i < content.size(); i++)
        {
                for (int j = 0; j < content[i].size(); j++)
                {
                        cout << content[i][j] << " ";
                }
                cout << "\n";
        }

        return 0;
}
