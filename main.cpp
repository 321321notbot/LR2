#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void sss(string *name, int e)
{
	string line;//slovo
	stringstream ss;	//strokovyi potoK	
	ifstream in;
	in.exceptions(ifstream::failbit);
	try
	{
		in.open(name[e]);
		int cnt = 1;//count
			while (getline(in, line, '.')) {//schitivaem po 1 predlojeniuy
				if (line.find(',') == string::npos) {	//esli net zapyatih
					ss << line << '\n';	//viviod v potok
				}
			}
			cout << ss.str();// vivodim predlojenie	
			in.close();//file close	
	}
			catch(const ifstream::failure& exc)
			{
			
	          cout<<"Error while opening file:" << endl
				  <<exc.what()<< endl<<endl;
			}


}
int main(){
	setlocale(LC_ALL, "");
	int e;
	string line;//slovo
	stringstream ss;	//strokovyi potoK
	string name[5] = { "input.txt","input1.txt","input2.txt","input3.txt","input4.txt" };
	cout << "Choose file for programm:\n" << "1.All sentences are put in one line." << endl << "2.Sentences are separated, each sentence has its own line" << endl<< "3. Sentences may be put in one line ; may be separated; end of sentence may be on next line." << endl << "4. File is empty" << endl << "5. No File"<<endl <<"6.Exit"<< endl;
	while (true)
	{
		switch (getchar())		{
		case '1':		{
			e = 0;
		
		    sss(name, e);
		    break;		}
		case '2':		{
			e = 1;
			
			sss(name, e);		}
		case '3':	{
			e = 2;
			
     		sss(name, e);
			break;	}
		case '4':	{
			e = 3;
			
			sss(name, e);
			break;	}
		case '5':		{
			e = 4;
			
			sss(name, e);
			break;	}
		case '6':
			cout << "Exit" << endl;
			exit(EXIT_SUCCESS);}}
return 0;}
