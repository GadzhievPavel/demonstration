﻿// ConsoleApplication27.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string line;
	ifstream in;
	ofstream out;
	out.open("out.txt");
	if (out.is_open())
	{
		out << "qwerty";
	}
	else {
		cout << "error in open";
	}
	out.close();
	in.open("out.txt");
	if (in.is_open())
	{
		while (getline(in, line))
		{
			std::cout << line <<endl;
		}
	}
	else {
		cout << "error in open";
	}
	in.close();
	//out.open("C:\\out.txt");
	/*if (out.is_open()) {
		out << endl << "1111111!!!!";
		cout << "write completed";
	}
	else {
		cout << "is not open";
	}*/
	
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
