#include <iostream>
using std::cout;
using std::cin;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

const int NAME = 10;         // количество имен в массиве
const char * names[::NAME] = { "Sasha", "Pasha", "Dasha" };

int getRandomNumber();

int main()
{
    setlocale(0, "");

    srand(static_cast<unsigned int>(time(NULL)));

    cout << "Меня зовут " << names[getRandomNumber()] << '\n';

    cin.get();
    return 0;
}

int getRandomNumber()
{
    return rand() % ::NAME;
}
