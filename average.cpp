#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        cout << "Please input numbers to find average." << endl;
        return 0;
    }

    double sum = 0.0;

    for (int i = 1; i < argc; i++)
    {
        sum += atof(argv[i]);
    }

    int count = argc - 1;
    double average = sum / count;

    cout << "---------------------------------" << endl;
    cout << "Average of " << count << " numbers = " << average << endl;
    cout << "---------------------------------" << endl;

    return 0;
}