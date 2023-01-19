#include <iostream>
#include <vector>
using namespace std;

// select the minimum element and swap to the starting position
void selectionsort(vector<int> sel)
{
    int min;
    for (int i = 0; i < sel.size() -1; i++)
    {
        min = i;
        for (int j = i + 1; j < sel.size(); j++)
        {
            if (sel[j] < sel[min])
            {
                min = j;
            }
        }
        if (min != i)
            swap(sel[min], sel[i]);
    }

    cout << "The sorted list is: ";
    for (auto i : sel)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> marvel;
    marvel.push_back(4);
    marvel.push_back(7);
    marvel.push_back(55);
    marvel.push_back(10);
    marvel.push_back(23);
    marvel.push_back(12);
    marvel.push_back(44);

    cout << "The list is: ";
    for (auto i : marvel)
    {
        cout << i << " ";
    }
    cout << endl;

    selectionsort(marvel);

    return 0;
}