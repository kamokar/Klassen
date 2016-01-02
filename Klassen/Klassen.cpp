#include <iostream>
#include <C:\Projekty\Klassen\Klassen\zwierze.h>
#include <C:\Projekty\Klassen\Klassen\kot.h>
#include <C:\Projekty\Klassen\Klassen\pies.h>
using namespace std;

void glosik(zwierze *k) {
	k->glos();
};

int main()
{
		pies *pimpek = new pies;
		kot *punia = new kot;
		
		zwierze *zwierzak = new zwierze;
		glosik(zwierzak);
		delete zwierzak;

		zwierzak = punia;
		glosik(zwierzak);
		delete punia;

		zwierzak = pimpek;
		glosik(zwierzak);
		delete pimpek;



	system("pause");
	return 0;
}

