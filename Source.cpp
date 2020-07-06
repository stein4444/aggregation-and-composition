#include<iostream>
using namespace std;
enum Permission {
	guest,
	admin
};
class Cpu
{
private:
	int hz;
	int cores;
public:
	Cpu(int hz, int cores) : hz(hz), cores(cores) {}
	void connect() {

	}
	void myFunctionality()
	{
		cout << "I'm central processor and I'm procssing all data" << endl;
	}
};
class Gpu
{
private:
	int memory;
	int cache;
public:
	Gpu(int memory, int cache) : memory(memory), cache(cache) {}
	void connect() {

	}
	void myFunctionality()
	{
		cout << "I'm grafic card and I'm renderring all grafics on your pc" << endl;
	}
};

class Hdd
{
private:
	int memory;
	int speed;
public:
	Hdd(int memory, int speed) : memory(memory), speed(speed) {}
	void connect() {

	}
	void myFunctionality()
	{
		cout << "I'm hard data disc and I'm contain all the information" << endl;
	}
};
class Ram
{
private:
	int memory;
	int hz;
public:
	Ram()
	{
		memory = 0;
		hz = 0;
	}
	Ram(int memory, int hz) : memory(memory), hz(hz) {}
	void cacheInfo() {
		Ram r_memory;
		r_memory.cacheInfo();
	}
	void myFunctionality()
	{
		cout << "I'm Ram - Random Access Memory and I'm giving access to any cell of information" << endl;
	}
	void connect() {

	}
};

class MotherBoard
{
private:
	Cpu& processor;
	Gpu& videoCard;
	Ram& r_memory;
	Hdd& h_memory;
public:
	MotherBoard() = default;

	void setPar(Cpu& cpu, Gpu& video, Ram& rm, Hdd& hm)
	{
		this->processor = cpu;
		this->videoCard = video;
		this->r_memory = rm;
		this->h_memory = hm;
	}
	void combinate()
	{
		processor.connect();
		videoCard.connect();
		r_memory.connect();
		h_memory.connect();
	}
	void connect() {

	}

	void myFunctionality()
	{
		cout << "I'm mother board and I'm allows communication between, \n"
			<< "many of the crucial electronic components of a system" << endl;
	}

};
class PowerSupply
{
private:
	MotherBoard asus;
	Hdd hdd;
public:
	void sendElectricity()
	{
		asus.connect();
		asus.combinate();
	}
	void connectToPower()
	{

		asus.connect();
		hdd.connect();
	}
	void myFunctionality()
	{
		cout << "I'm power supply and I'm converts mains AC to low-voltage regulated DC power \n"
			<< "for the internal components of a computer" << endl;
	}
};
class PC {
private:

public:
	void TurnOn()
	{
		cout << "Loading..." << endl;

		cout << "Hello World" << endl;
	}

	void TurnOff()
	{
		cout << "Bye - bye " << endl;
	}

};


int main()
{
	PC compic;
	compic.TurnOn();
	system("pause");
	compic.TurnOff();



	return 0;
}