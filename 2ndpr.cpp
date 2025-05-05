#include <iostream>
using namespace std; // Чтобы не писать std::

int main() {
    // Здесь будет ваш код
    int birth_year, current_year = 2025, age;
    cout << "Ur bitrh year: ";
    cin >> birth_year;

    age = current_year - birth_year;
    cout << "Ur age:" << age << "years\n";

    return 0;
}