#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int *Myarray = new int[25];
    int *checked = new int[25];   
    int M;
    int FoundIndex = -1;
    int countChecked = 0;
    int iterations = 0;

    cout << "Enter the number you need to find in Myarray (M): ";
    cin >> M;

    for (int i = 0; i < 25; i++) {
        Myarray[i] = rand() % 100 + 1;
        checked[i] = 0;
    }

    
    while (countChecked < 25) {
        iterations++;

        int i = rand() % 25; 

        if (checked[i] == 0) {     
            checked[i] = 1;        
            countChecked++;

            if (Myarray[i] == M) {
                FoundIndex = i;
                break;             
            }
        }
    }

    cout << "Array contents: ";
    for (int i = 0; i < 25; i++)
        cout << Myarray[i] << " ";
    cout << endl;

    if (FoundIndex != -1)
        cout << "The number " << M << " is found at index " << FoundIndex << endl;
    else
        cout << "The number " << M << " is not found in the array." << endl;

    cout << "Iterations taken: " << iterations << endl;

    delete[] Myarray;
    delete[] checked;

    return 0;
}


