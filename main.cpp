#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


int main(){
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	string line;//slovo
	stringstream ss;	//strokovyi potoK
	int cnt = 1;//count
	while(getline(in,line, '.')){//schitivaem po 1 predlojeniuy
		if(line.find(',') == string::npos){	//esli net zapyatih
			ss << line << '\n';	//viviod v potok
		}
	}
	cout << ss.str();// vivodim predlojenie
	in.close();//file close
	system("pause>>void");

}
