#include<iostream>
#include<cmath>
#include "Classes.h"
using namespace std;

	int main() {
		Zoo myzoo;
		Humanity* human1 = new Humanity("Boris");
		Humanity* human2 = new Humanity("Andrew");
		Cats* cat1 = new Cats("Alisa");
		Cats* cat2 = new Cats("Mila");
		Cats* cat3 = new Cats("Asya");

		Dogs* dog1 = new Dogs("Sharik");
		Dogs* dog2 = new Dogs("Motya");
		Dolphins* Dolphin1 = new Dolphins("Arcady");
		Foxes* Fox1 = new Foxes("Rose");
		Parrots* parrot1 = new Parrots("Cache");
		Flamingos* flamingo1 = new Flamingos("Ruby");
		Sparrows* sparrow1 = new Sparrows("Chizhik");
		Sparrows* sparrow2 = new Sparrows("Rublic");
		myzoo._pushback1_(human1);
		myzoo._pushback1_(human2);
		myzoo._pushback1_(cat1);
		myzoo._pushback1_(cat2);
		myzoo._pushback1_(cat3);
		myzoo._pushback1_(dog1);
		myzoo._pushback1_(dog2);
		myzoo._pushback1_(Dolphin1);
		myzoo._pushback1_(Fox1);
		myzoo._pushback2_(parrot1);
		myzoo._pushback2_(flamingo1);
		myzoo._pushback2_(sparrow1);
		myzoo._pushback2_(sparrow2);
		double flag = 1.0;
		while (flag != 0) { //Для выполнения работы программы необходимо вводить исключительно числовые значения с клавиатуры в консоль...
			int point, point1;
			cout << "Choose the category:" << "\n" << "Mammals[1]" << "\n" << "Birds[2]" << "\n";
			cin >> point;
			if (point != 1 && point != 2) {
				cout << "Incorrect data entered...";
				continue;
			}
			cout << "What do you want to choose?:" << "\n" << "To listen[1]" << "\n" << "See the information[2]" << "\n";
			cin >> point1;
			if ((point == 1) && (point1 == 1)) {
				cout << "Whom do you want to listen to? Keep choosing" << "\n" << "Humanity[1]" << "\n" << "Cats[2]" << "\n" << "Dogs[3]" << "\n" << "Dolphins[4]" << "\n" << "Foxes[5]" << "\n";
				int point1;
				cin >> point1;
				Humanity number1; Cats number2; Dogs number3; Dolphins number4; Foxes number5;
				switch (point1) {
				case 1:  number1.sound(); break;
				case 2:  number2.sound(); break;
				case 3:  number3.sound(); break;
				case 4:  number4.sound(); break;
				case 5:  number5.sound(); break;
				default: cout << "Incorrect data entered...";
				}
			}
			else if ((point == 1) && (point1 == 2)) {
				for (int flag123 = 0; flag123 < myzoo.size1_(); flag123++) {
					cout << "There lives: \n";
					cout << "Name: " << myzoo.vivod1(flag123)->GetAnimal() << "  id: " << myzoo.vivod1(flag123)->GetIndex();
					cout << "\n";
				}
			}
			else if ((point == 2) && (point1 == 1)) {
				cout << "Who do you want to listen to? Keep choosing" << "\n" << "Parrots[1]" << "\n" << "Flamingos[2]" << "\n" << "Sparrows[3]" << "\n";
				int point1;
				cin >> point1;
				Parrots number6; Flamingos number7; Sparrows number8;
				switch (point1) {
				case 1:  number6.sound(); break;
				case 2:  number7.sound(); break;
				case 3:  number8.sound(); break;
				default: cout << "Incorrect data entered...";
				}
			}
			else if ((point == 2) && (point1 == 2)) {
				for (int flag123 = 0; flag123 < myzoo.size2_(); flag123++) {
					cout << "There lives: \n";
					cout << "Name: " << myzoo.vivod2(flag123)->GetAnimal() << "  id: " << myzoo.vivod2(flag123)->GetIndex();
					cout << "\n";

				}
			}
			else { cout << "Incorrect data entered..."; }

			cout << "\n" << "Do you want to try again?" << "\n" << "Press \"0\" if you want to exit or press all other number if you want to complete" << "\n";
			cin >> flag;

		}
		myzoo._popBack1_();
		myzoo._popBack2_();
		
		delete human1;
		delete human2;
		delete cat1;
		delete cat2;
		delete dog1;
		delete dog2;
		delete Dolphin1;
		delete Fox1;
		delete parrot1;
		delete flamingo1;
		delete sparrow1;
		return 0;
	}






	