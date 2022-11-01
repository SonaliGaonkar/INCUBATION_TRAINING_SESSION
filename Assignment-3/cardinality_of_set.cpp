// Write a program to accept cardinality of set A as N, and cardinality of set B as M.
// Then accept elements of set A and set B.
// Generate set C which is union of set A and set B, set D which is intersection set of set A and Set B.
// Print set A, B, C, D, Cardinality of set C, Cardinality of set D.

#include <iostream>
using namespace std;

class Set
{
public:
    int N;
    int M;
    int setA[100];
    int setB[100];
    int setC[100];
    int setD[100];
    int count = 0;
    int counter = 0;
    int flag;
    int getData()
    {
        cout << "Enter cardinality of set A : ";
        cin >> N;
        cout << "Enter cardinality of set B : ";
        cin >> M;
        for (int i = 0; i < N; i++)
        {
            cout << "Enter elements of set A : ";
            cin >> setA[i];
        }
        cout << endl;

        for (int j = 0; j < M; j++)
        {
            cout << "Enter elements of set B : ";
            cin >> setB[j];
        }
        cout << endl;
    }
    void printData()
    {
        cout << "\nSet A : { ";
        for (int i = 0; i < N; i++)
        {
            cout << setA[i] << " , ";
        }
        cout << "}";
        cout << "\nSet B : { ";
        for (int j = 0; j < M; j++)
        {
            cout << setB[j] << " , ";
        }
        cout << "}";
    }
    int unionSet()
    {
        cout << "\nSet C : { ";
        for (int i = 0; i < N; i++)
        {
            count = count + 1;
            cout << setA[i] << " , ";
        }
        for (int j = 0; j < M; j++)
        {
            flag = 0;
            for (int i = 0; i < N; i++)
            {
                if (setA[i] == setB[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag != 1)
            {
                count = count + 1;
                cout << setB[j] << " , ";
            }
        }
        cout << "}";
    }

    int intersection()
    {
        cout << "\nSet D : { ";
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (setA[i] == setB[j])
                {
                    counter = counter + 1;
                    cout << setA[i] << " , ";
                }
            }
        }
        cout << "}";
    }
    int cardinality()
    {
        cout << "\nCardinality of set C = " << count;
        cout << "\nCardinality of set D = " << counter;
    }
};
int main()
{
    Set s;
    s.getData();
    s.printData();
    s.unionSet();
    s.intersection();
    s.cardinality();
}