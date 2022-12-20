#include <iostream>
#include <stdlib.h>

using namespace std;

// function to print the array
void printArray(int array[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

//********************************bubble sort***************************
void bsort(int arr[], int n)

{
  int temp, i, j, m;

  for (i = 0; i < n - 1; i++)

  {
    for (j = 0; j < n - i - 1; j++)

    {
      if (arr[j] > arr[j + 1])

      {
        temp = arr[j];

        arr[j] = arr[j + 1];

        arr[j + 1] = temp;
      }
    }

    cout << "After " << i + 1 << " swap"
         << " : ";
    printArray(arr, n);

    for (m = 0; m < n; m++)

    {
      if (arr[m] < arr[m + 1])
        continue;
      else
        break;
    }
    if (m == n)
    {
      goto end;
    }
  }
end:

  cout << "Number of swaps is : " << i + 1;
  cout << "\nThe Sorted array is :" << endl;

  printArray(arr, n);
}

//************************************ Quick sort  ***************************

void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[], int low, int high)
{

  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++)
  {
    if (array[j] <= pivot)
    {
      i++;
      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[high]);

  return (i + 1);
}

void quickSort(int array[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

int main()
{
  int n, choice;
  cout << "Enter the number of element to enter : ";
  cin >> n;
  int arr[n];
  cout << "Enter the element : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  while (1)
  {
    cout << "1. Bubble Sort \n2. Quick Sort \n3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      bsort(arr, n);
      break;
    case 2:
      quickSort(arr, 0, n - 1);
      cout << "Sorted array in ascending order: \n";
      printArray(arr, n);
      break;
    case 3:
      exit(0);
    default:
      cout << "Wrong choice !!";
      break;
    }
  }
  return 0;
}
