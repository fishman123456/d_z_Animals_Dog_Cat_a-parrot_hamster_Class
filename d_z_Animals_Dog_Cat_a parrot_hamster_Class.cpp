// d_z_Animals_Dog_Cat_a parrot_hamster_Class.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Создать базовый класс "Домашнее животное" и производные классы "Собака", "Кошка"
// "Попугай", "Хомяк". С помощью конструктора установить имя каждого животного и его характеристики.
// Реализуйте для каждого из классов функции:
// Sound - издаёт звук животного
// Show - отображает имя животного
// Type - отображает его подвид

#include <iostream>
#include <string.h>
using namespace std;
//абстрактный базовый класс Животные
class Animals
{
public:
	//имя животного
	string title;
	int age{ 0 };
	Animals(string t) {
		title.swap(t); //элемент-функция для обмена содержимого строк
	}
	//возраст сотрудника
	//чисто виртуальная функция
	virtual void Print() = 0;
	//virtual int Get_age() = 0;
	int get_age(int age1)
	{
		return age;
	}
};
//класс президент
class President : public Animals
{
public:
	President(string title1) : Animals(title1) {};

	int get_age();

	virtual void Print() {
		cout << " President " << "\t" << title << "\t";
		cout << " возраст " << age << "\n";
	}


};
//класс менеджер
class Manager : public Animals
{
public:
	Manager(string title) : Animals(title) {};
	virtual void Print() {
		cout << " Manager " << "\t" << title << "\t";
		cout << " возраст " << age << "\n";
	}
};
//класс рабочий
class Worker : public Animals
{
public:
	Worker(string title) : Animals(title) {};
	virtual void Print() {
		cout << " Worker " << "\t" << title << "\t";
		cout << " возраст " << age << "\n";
	}
};
void main()
{
	system("chcp 1251");
	//объявим массив указателей на базовый класс Animals
	//и сразу его заполним указателями, создавая объекты
	//cписок животных
	Animals* Animalss[3] =
	{
		new President("Путин"),
		new Manager("Денис"),
		new Worker("Саня"),
	};
	for (int k = 0; k < 3; k++)
		Animalss[k]->Print();
}

int President::get_age()
{
	return age;
}