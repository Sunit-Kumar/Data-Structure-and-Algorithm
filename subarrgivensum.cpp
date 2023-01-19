#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Enter the number of elements to enter: ";
    int n, sum;
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the sum to find: ";
    cin >> sum;
//intitalizing the variables
    int ptrf = 0, ptrl = 0, tempsum = 0;

    for (int i = 0; i < n; i++)
    {
        ptrf = ptrl = i;
        tempsum = 0;
        while (tempsum <= sum && ptrl < n)
        {
            tempsum += arr[ptrl];
            ptrl++;
            //cout << tempsum;
            if (tempsum == sum)
        {
            cout << ptrf + 1 << " " << ptrl << endl;
            return 0;
        }
        }
        
    }
    cout << "can't found the sum" << endl;
    return 0;
}