//��������������_���������
#include <iostream>
#include <string>

//��������_������������
namespace motivation {

	// in     - input parameter
	// out    - output parameter 
	// in/out - input/output parameter

    // 0 or 1 parameter can be returned
	//��������_�������_get_user_info_�_�����������_�_���_����������
	//���������__��_���������_����������_name, surname, age (�������������)
	void get_user_info(std::string& name, std::string& surname, int& age) {

		//������_�������������_���������
		std::cout << "Hello!" << std::endl;
		
		//������_���������_�_�����_�����
		std::cout << "Enter your name:" << std::endl;
		//����_�����
		std::cin >> name;
		
		//��������_��_��������_��������_��_��������_�����
		//�����������_�������_��������
		std::size_t found_str = name.find_first_not_of("1234567890");
		//��������_��_�������_�������
		if (found_str != std::string::npos) {
			//������_���������
			std::cout << "Find_non_str_symbol";
			//������_���������_�������_
			std::cout << name[found_str] << found_str << std::endl;
		}

		//��������_��_����������_�������
		else {
			//���������_�_���_���_�������_��_�������
			std::cout << "Symbols_ok" << std::endl;
		}

		//������_��������_�_�����_�������
		std::cout << "Enter your surname:" << std::endl; 
		//����_�������
		std::cin >> surname;
		size_t found_strSurname = surname.find_first_not_of("1234567890");
		//��������_��_�������_�������
		if (found_strSurname != std::string::npos) {
			//������_���������
			std::cout << "Find_non_str_symbol";
			//������_���������_�������_45
			std::cout << surname[found_strSurname] << found_strSurname << std::endl;
		}

		//����_���������_�_�����_��������
		std::cout << "Enter your age:" << std::endl;
		//����_��������
		std::cin >> age;
	}

	void example() {
		//�������������_����������_name
		std::string name;
		//�������������_����������_surname
		std::string surname;
		//�������������_����������_age
		int age;
		//
		get_user_info(name, surname, age);
		//��������_��������_age
		if (age < 16) {
			//������_���������
			std::cout << "Access denied!" << std::endl;
		}
		//��������_��������_age
		else if (age < 30) {
			//������_���������
			std::cout << "Hello, " << name << std::endl;
		}
		//test
		//������_������_��_����������_�_����_������
		else {
			std::cout << "Hello, " << name << " " << surname << std::endl;
		}
	}

} // motivation


namespace structures {

    // Combine related data in a stand alone abstraction
	// ����������� ���������
	struct Person {
		//�������������_�������_����������_name
		std::string name;
		//�������������_�������_����������_surname
		std::string surname = "Ivanov";
		//�������������_�������������_����������_age
		int age;
	};
	
	//�����������_�������_�_���������
	Person get_user_info() {
		//���������_�������_�_����������_�������_�_���������
		Person   person;
		//������_����������
		std::cout << "Hello!" << std::endl;
		//������_��_����_�����
		std::cout << "Enter your name:" << std::endl;
		//������_�����
		std::cin >> person.name;
		//������_��_����_�������
		std::cout << "Enter your surname:" << std::endl; 
		//������_�������
		std::cin >> person.surname;
		//������_��_����_��������
		std::cout << "Enter your age:" << std::endl;
		//������_��_����_��������
		std::cin >> person.age;
		//�������_��������_���������
		return person;
	}

	void example() {
		//������������_��������_���������_��������_�������
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
	//�����_��������_�������_example
	motivation::example();
	//�����_��������_�������_example
	structures::example();

	return 0;
}
