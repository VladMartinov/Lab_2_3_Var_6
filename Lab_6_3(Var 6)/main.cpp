#include "auto.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");


    Car* array = new Car[6];
    
    array[0].deserialize(array);

    // Вывод значений после считывания данных из файла
    array[0].print();
    array[1].print();
    array[2].print();
    array[3].print();
    array[4].print();
    array[5].print();


    //  создаем пустой ОБЪЕКТ КЛАССА Car на стеке
    array[0] = Car();

    //  создаем ОБЪЕКТ КЛАССА Car на стеке
    array[1] = Car("Ford", "Focus", "e888ap", 10250, Color::BLUE, 2010);

    //   создаем ОБЪЕКТ КЛАССА Car на стеке : вызовется конструктор с одним параметром
    array[2] = Car(4000);


    // Установление параметров для объекта
    array[2].setCompany("LADA");
    array[2].setModel("Kalina");
    array[2].setNo("o379ac");
    array[2].setColor(Color::RED);
    array[2].setYear(2005);

    //    создаем константный ОБЪЕКТ lexus КЛАССА Car в хипе :
    //    вызовется основной параметризированный конструктор
    const Car* lexus = new Car("Toyota", "Lexus", "a777aa", 135000, Color::GRAY, 2011);

    //    запись указателя в массив элементов
    array[3] = *lexus;

    cout << "\nПробег лексуса до путешетсвия: " << array[3].getMileage() << "\n";

    array[3].longTravel();

    cout << "\nПробег лексуса после путешетсвия: " << array[3].getMileage() << " (полюбому скрутил)\n";

    cout << "Отправляемся в еще 2 путеществия: \n";

    array[3].longTravel();
    array[3].longTravel();

    cout << "\nПробег лексуса после 2-х путешетсвий: " << array[3].getMileage() << " (полюбому скрутил)\n";


    cout << endl;

    array[0].print();
    array[1].print();
    array[2].print();
    array[3].print();

    // Создание еще 2-х объектов для точной проверки работоспособности Отсортированного вывода
    array[4] = Car("ACrob", "Zenva", "p324ad", 103242, Color::BLUE, 2011);
    array[5] = Car("Zesord", "Banvo", "g212rp", 30000, Color::BLUE, 2016);

    cout << endl;

    Car().print();                                              
    std::cout << std::endl;

    Car("VAZ", "2109", "c111cc", 205000, Color::BLACK, 2007).print();
    std::cout << std::endl;


    cout << "\nSORTED TEST\n";
    array[0].sortedPrint(array);

    cout << "\n Remove the main array: \n";

    array[5].serialize(array);

    //cout << "Count of objects : " << array[0].getCount() << " \n";

    delete[] array;

    return 0;
}