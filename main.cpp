//���������� ������� ��� 2

#include <iostream>
#include <Windows.h>
#include <string>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int initialMessages = 0, endMessage = 0;
	std::string vvod;

	std::cout << "\t\t\t\t\t����� ���������� � �������� ��������\n" << std::endl <<
		"������� ���������� ����� ������� �� ��������� 19 ��������: " << std::endl;
	std::getline(std::cin, vvod);

	while (vvod.size() > 19) {
		std::cout << "��������, �� �� ����� ����� ������� ��������� 19 ��������, ���������� ��� ���: " << std::endl;
		std::getline(std::cin, vvod);
	}

	if (vvod.size() == 0) {
		std::cout << "������� ������� ��� ��� ��������������� ����, �� �������� ��� ����� �����" << std::endl;
	}
	else {
		std::cout << "�������, ��� ������������ � ����� �������: " << std::endl;
	}

	system("pause");
	system("CLS");

	if (vvod.size() % 2 == 0 && vvod.size() != 19) {
		initialMessages = (19 - vvod.size()) / 2;
		endMessage = initialMessages + 1;
	}
	else if (vvod.size() % 2 != 0 && vvod.size() != 19) {
		initialMessages = (19 - vvod.size()) / 2;
		endMessage = initialMessages;
	}

	std::cout << " --------------------- " << std::endl << "< ";
	for (int i = 0; i < initialMessages; i++) { std::cout << " "; }
	std::cout << vvod;
	for (int i = 0; i < endMessage; i++) { std::cout << " "; }
	std::cout << " >" << std::endl <<
		" --------------------- " << std::endl <<
		"\t\\   ^__^" << std::endl <<
		"\t \\  (00)\\_______" << std::endl <<
		"\t    (__)\\\t)\\/\\" << std::endl <<
		"\t\t||----w |" << std::endl <<
		"\t\t||     ||" << std::endl;



	return 0;
}