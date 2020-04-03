#include <climits>
#include <ctime>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    cout << "INT_MIN = " << INT_MIN << endl;
    cout << "INT_MAX = " << INT_MAX << endl;

    clock_t begin = clock();
    for(int i = INT_MIN; i < INT_MAX; i++) {
    }
    clock_t end = clock();
    double timeElapsed = (double)(end - begin) / (double)CLOCKS_PER_SEC;
    
    cout << "time elapsed: " << timeElapsed << " seconds";
}