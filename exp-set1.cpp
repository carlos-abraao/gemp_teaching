#include <iostream>
#include <set>
//#include <utility>
#include <cmath>

using namespace std;

int main(){	

	set< pair<int, int> > S;	

	cout << "Please enter N--> ";

	int N;

	cin >> N;

	if (N <= 0) return 0; 	

	for (int k=1; k<=N; k++) {
		for (int j=1; j<=N; j++) {
			S.insert(make_pair(k,j));
		}
	}

	cout << "\e[1;1H\e[2J" << "Normal!" << endl;
	
	set< pair<int, int> >::iterator si;

	for (si = S.begin(); si != S.end() ; si++) {
		cout << (*si).first << " " << si->second << endl;

	}

	/*

	cout <<"\e[1;1H\e[2J" << "Reverso!" << endl;

	set< pair<int, int> >::reverse_iterator ssi;

	for (ssi = S.rbegin(); ssi != S.rend() ; ssi++) {
		cout << (*ssi).first << " " << ssi->second<< endl;
	}

	//*/

	/*

	cout <<"\e[1;1H\e[2J" << "Testes diversos!" << endl;
	
	S.insert(make_pair(2,2));
	cout << "Count: " << S.count(make_pair(2,2)) << endl;

	S.erase(make_pair(2,2));
	cout << "Count depois de remoção: " << S.count(make_pair(2,2)) << endl;

	int x = -5;

	cout << "Size sem ajuste: " << (S.size() > x) << endl; // .size() problem

	cout << "Size com ajuste: " << (int(S.size()) > -5) << endl;

	for (si = S.find(make_pair(1,4)); si != S.end() ; si++) { // if not in the set, return an it to .end()
		cout << (*si).first << " " << si->second << endl;

	}
	//*/

	/*

	cout <<"\e[1;1H\e[2J" << "Remoção por intervalo!" << endl;

	S.erase(S.begin(), S.find(make_pair(2,1))); // apagando de begin até um certo elemento

	for (si = S.begin(); si != S.end() ; si++) {
		cout << (*si).first << " " << si->second << endl;

	}	

	//*/
	return 0;
}