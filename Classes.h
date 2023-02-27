#pragma once
#include<cstring>
#include<vector>
using namespace std;
int id = 0;
class Animals {
	string _name_;
	int _id_;
public:
	Animals() {};
	Animals(string name) {
		_name_ = name;
		_id_ = id++;
	}
	string GetAnimal() {
		return _name_;
	}
	int GetIndex() {
		return _id_;
	}
};

class Mammals : public Animals {
public:
	Mammals() {};
	Mammals(string name) : Animals(name) {};
};

class Humanity : public Mammals {
public:
	Humanity() {};
	Humanity(string name) : Mammals(name) {};
	void sound() { cout << "Give me my money!"; }

};
class Cats : public Mammals {
public:
	Cats() {};
	Cats(string name) : Mammals(name) {};
	void sound() { cout << "Meow"; }
};
class Dogs : public Mammals {
public:
	Dogs() {};
	Dogs(string name) : Mammals(name) {};
	void sound() { cout << "Woof"; }
};
class Dolphins : public Mammals {
public:
	Dolphins() {};
	Dolphins(string name) : Mammals(name) {};
	void sound() { cout << "Viu"; }
};
class Foxes : public Mammals {
public:
	Foxes() {};
	Foxes(string name) : Mammals(name) {};
	void sound() { cout << "I am not crazy..."; }
};


class Birds : public Animals {
public:
	Birds() {};
	Birds(string name) : Animals(name) {};
};

class Parrots : public Birds {
public:
	Parrots() {};
	Parrots(string name) : Birds(name) {};
	void sound() { cout << "Petka is a fool!"; }
};
class Flamingos : public Birds {
public:
	Flamingos() {};
	Flamingos(string name) : Birds(name) {};
	void sound() { cout << "...silence..."; }
};

class Sparrows : public Birds {
public:
	Sparrows() {};
	Sparrows(string name) : Birds(name) {};
	void sound() { cout << "Tweet-tweet"; }
};

class Zoo {
	vector<Animals*> comand1, comand2;

public:
	void _pushback1_(Animals* animalname) {
		comand1.push_back(animalname);
	}
	void _pushback2_(Animals* animalname) {
		comand2.push_back(animalname);
	}
	void _popBack1_() {
		comand1.pop_back();
	}
	void _popBack2_() {
		comand2.pop_back();
	}

	int size1_() {
		return(comand1.size());
	}
	int size2_() {
		return(comand2.size());
	}
	Animals* vivod1(int flag123) {
		return(comand1[flag123]);
	}
	Animals* vivod2(int flag123) {
		return(comand2[flag123]);
	}
};