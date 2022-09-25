#include "auto.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");


    Car* array = new Car[6];
    
    array[0].deserialize(array);

    // ����� �������� ����� ���������� ������ �� �����
    array[0].print();
    array[1].print();
    array[2].print();
    array[3].print();
    array[4].print();
    array[5].print();


    //  ������� ������ ������ ������ Car �� �����
    array[0] = Car();

    //  ������� ������ ������ Car �� �����
    array[1] = Car("Ford", "Focus", "e888ap", 10250, Color::BLUE, 2010);

    //   ������� ������ ������ Car �� ����� : ��������� ����������� � ����� ����������
    array[2] = Car(4000);


    // ������������ ���������� ��� �������
    array[2].setCompany("LADA");
    array[2].setModel("Kalina");
    array[2].setNo("o379ac");
    array[2].setColor(Color::RED);
    array[2].setYear(2005);

    //    ������� ����������� ������ lexus ������ Car � ���� :
    //    ��������� �������� ������������������� �����������
    const Car* lexus = new Car("Toyota", "Lexus", "a777aa", 135000, Color::GRAY, 2011);

    //    ������ ��������� � ������ ���������
    array[3] = *lexus;

    cout << "\n������ ������� �� �����������: " << array[3].getMileage() << "\n";

    array[3].longTravel();

    cout << "\n������ ������� ����� �����������: " << array[3].getMileage() << " (�������� �������)\n";

    cout << "������������ � ��� 2 �����������: \n";

    array[3].longTravel();
    array[3].longTravel();

    cout << "\n������ ������� ����� 2-� �����������: " << array[3].getMileage() << " (�������� �������)\n";


    cout << endl;

    array[0].print();
    array[1].print();
    array[2].print();
    array[3].print();

    // �������� ��� 2-� �������� ��� ������ �������� ����������������� ���������������� ������
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