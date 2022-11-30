

#include <iostream>
using namespace std;

int main()
{
    int sz, resultSize = 0, found = 0;
    char character;
    cout << "Enter size of array\n";
    cin >> sz;
    char* array = new char[sz];
    char* result = new char[sz];
    for (int i = 0; i < sz; i++) {
        cout << "Enter character\n";
        cin >> character;
        array[i] = character;
    }

    for (int i = 0; i < sz; i++) {
        found = 0;
        if (resultSize == 0) {
            result[resultSize] = array[i];
            resultSize++;
        }
        else {
            for (int j = 0; j < resultSize; j++) {
                if (array[i] == result[j]) {
                    found = 1;
                }
            }
            if (found == 0) {
                result[resultSize] = array[i];
                resultSize++;
            }
        }
    }


    if (resultSize != 0) {
        cout << "Result\n";
        for (int k = 0; k < resultSize; k++) {
            cout << result[k] << " ";
        }
    }
    else {
        cout << "Result not exist\n";
    }
}
