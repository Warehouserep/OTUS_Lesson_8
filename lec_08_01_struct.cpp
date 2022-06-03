//импортирование_библиотек
#include <iostream>
#include <string>

//создание_пространства
namespace motivation {

	// in     - input parameter
	// out    - output parameter 
	// in/out - input/output parameter

    // 0 or 1 parameter can be returned
	//создание_функции_get_user_info_с_определение_в_ней_параметров
	//указатель__на_строковую_переменную_name, surname, age (целочисленный)
	void get_user_info(std::string& name, std::string& surname, int& age) {

		//печать_риветсвенного_сообщения
		std::cout << "Hello!" << std::endl;
		
		//печать_сообщения_о_вводе_имени
		std::cout << "Enter your name:" << std::endl;
		//ввод_имени
		std::cin >> name;
		
		//проверка_на_числовые_значения_во_введении_имени
		//определение_словаря_значений
		std::size_t found_str = name.find_first_not_of("1234567890");
		//проверка_на_наличие_символа
		if (found_str != std::string::npos) {
			//печать_сообщения
			std::cout << "Find_non_str_symbol";
			//печать_найденого_символа_
			std::cout << name[found_str] << found_str << std::endl;
		}

		//проверка_на_отсутствие_символа
		else {
			//сообщение_о_том_что_символы_не_найдены
			std::cout << "Symbols_ok" << std::endl;
		}

		//печать_значения_о_вводе_фамилии
		std::cout << "Enter your surname:" << std::endl; 
		//ввод_фамилии
		std::cin >> surname;
		size_t found_strSurname = surname.find_first_not_of("1234567890");
		//проверка_на_наличие_символа
		if (found_strSurname != std::string::npos) {
			//печать_сообщения
			std::cout << "Find_non_str_symbol";
			//печать_найденого_символа_45
			std::cout << surname[found_strSurname] << found_strSurname << std::endl;
		}

		//ввод_сообщения_о_вводе_возраста
		std::cout << "Enter your age:" << std::endl;
		//ввод_возраста
		std::cin >> age;
	}

	void example() {
		//инициализация_переменной_name
		std::string name;
		//инициализация_переменной_surname
		std::string surname;
		//инициализация_переменной_age
		int age;
		//
		get_user_info(name, surname, age);
		//проверка_значения_age
		if (age < 16) {
			//печать_сообщения
			std::cout << "Access denied!" << std::endl;
		}
		//проверка_значения_age
		else if (age < 30) {
			//печать_сообщения
			std::cout << "Hello, " << name << std::endl;
		}
		//test
		//прочий_случай_не_подошедший_к_двум_другим
		else {
			std::cout << "Hello, " << name << " " << surname << std::endl;
		}
	}

} // motivation


namespace structures {

    // Combine related data in a stand alone abstraction
	// Определение структуры
	struct Person {
		//инициализация_строкой_переменной_name
		std::string name;
		//инициализация_строкой_переменной_surname
		std::string surname = "Ivanov";
		//инициализация_целочисленной_переменной_age
		int age;
	};
	
	//определение_функции_в_структуре
	Person get_user_info() {
		//получение_доступа_к_параметрам_функции_в_структуре
		Person   person;
		//печать_приветсвия
		std::cout << "Hello!" << std::endl;
		//печать_на_ввод_имени
		std::cout << "Enter your name:" << std::endl;
		//печать_имени
		std::cin >> person.name;
		//печать_на_ввод_фамилии
		std::cout << "Enter your surname:" << std::endl; 
		//печать_фамилии
		std::cin >> person.surname;
		//печать_на_ввод_возраста
		std::cout << "Enter your age:" << std::endl;
		//печать_на_ввод_возраста
		std::cin >> person.age;
		//возврат_значения_структура
		return person;
	}

	void example() {
		//присваивание_значению_структуры_значение_функции
		Person person = get_user_info();

		if (person.age < 16) {
			std::cout << "Access denied!" << std::endl;
		}
		else if (person.age < 30) {
			std::cout << "Hello, " << person.name << std::endl;
		}
		else {
			std::cout << "Hello, " << person.name << " " << person.surname << std::endl;
		}
	}
} // namespace structures

int main() {
	//вывод_значения_функции_example
	motivation::example();
	//вывод_значения_функции_example
	structures::example();

	return 0;
}
