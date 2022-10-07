#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char filename[30];
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
    
}

/*{
    int i, roll_no, maths, english, hindi, science, history;
    string students_name;
    float sum = 0, avg, perc;
    cout << "Enter ROLL-NO and Students-name :";
    cin >> roll_no >> students_name;
    cout << "Enter Marks obtained in 5 Subjects\n ";
    cout << "Enter Maths marks :";
    cin >> maths;
    cout << "Enter English marks :";
    cin >> english;
    cout << "Enter Hindi marks : ";
    cin >> hindi;
    cout << "Enter Science marks :";
    cin >> science;
    cout << "Enter history marks :";
    cin >> history;
    sum = maths + english + hindi + science + history;
    avg = sum / 5;
    perc = (sum / 500) * 100;
    cout << "\nAverage Marks = " << avg;
    cout << "\nPercentage Marks = " << perc << "%";
    cout << endl;
    cout<<"\nGrade = ";
    if(perc>=91 && perc<=100)
        cout<<"A+";
    else if(perc>=81 && perc<91)
        cout<<"A";
    else if(perc>=71 && perc<81)
        cout<<"B+";
    else if(perc>=61 && perc<71)
        cout<<"B";
    else if(perc>=51 && perc<61)
        cout<<"C+";
    else if(perc>=35 && perc<51)
        cout<<"C";
    else
        cout<<"Fail";
    return 0;
}*/