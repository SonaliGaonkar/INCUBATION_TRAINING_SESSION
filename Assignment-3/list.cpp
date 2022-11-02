// Write a program to a accept a list of N integers.
// Find the largest and the smallest number in the list and their respective positions in the list.
#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int n;
int i;

std::list<int> getList(int N)
{
    std::list<int> myList;
    std::cout << "Enter " << N << " integers : " << std::endl;
    for (int i = 0; i < N; ++i)
    {
        int num;
        std::cin >> num;
        myList.emplace_back(num);
    }
    return myList;
}
int largest(std::list<int> myList)
{
    int largest = myList.front();
    for (auto it = myList.begin(); it != myList.end(); ++it)
    {
        if (*it > largest)
        {
            largest = *it;
        }
        return largest;
    }
}
int smallest(std::list<int> myList)
{
    int smallest = myList.front();
    for (auto it = myList.begin(); it != myList.end(); ++it)
    {
        if (*it < smallest)
        {
            smallest = *it;
        }
        return smallest;
    }
}
int position(std::list<int> myList, int N)
{
    int index = distance(myList.begin(), find(myList.begin(), myList.end(), N));
    return index + 1;
}

int main()
{
    std::list<int> myList;
    int N;
    int myint;
    std::cout << "Enter size of integers : ";
    std::cin >> N;
    //  int N{0};
    myList = getList(N);
    std::cout << "Elements in the list are : ";
    for (auto it = myList.begin(); it != myList.end(); ++it)
    {
        std::cout << ' ' << *it << "elements";
    }
    int element = largest(myList);
    std::cout << "Largest Element =" << element << "Position of largest element = " << position(myList, element) << std::endl;
    int element = smallest(myList);
    std::cout << "smallest Element =" << element << "Position of smallest element = " << position(myList, element) << std::endl;
}