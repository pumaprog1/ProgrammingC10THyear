#include <iostream>
using namespace std;
int main () {
	double SanduicheP, CafeP, RefrigeranteP, BoloP;
	double QtnS, QtnC, QtnR, QtnB;
	double Pre�oS, Pre�oC, Pre�oR, Pre�oB;
	Pre�oS = 1;
	Pre�oC = 0.6;
	Pre�oB = 0.8;
	Pre�oR = 1.5;
	
	
	cout << "Qual o pre�o de venda do sanduiche? ";
	cin >> SanduicheP;
	cout << "Qual o pre�o de venda do cafe? ";
	cin >> CafeP;
	cout << "Qual o pre�o de venda do refrigerante? ";
	cin >> RefrigeranteP;
	cout << "Qual o pre�o de venda do bolo? ";
	cin >> BoloP;
	
	cout << "Quantos sanduiches foram vendidos? ";
	cin >> QtnS;
	cout << "Quantos cafes foram vendidos? ";
	cin >> QtnC;
	cout << "Quantos refrigerantes foram vendidos? ";
	cin >> QtnR;
	cout << "Quantos bolos foram vendidos? ";
	cin >> QtnB;

	double lucro;
	lucro = (SanduicheP * QtnS- Pre�oS*QtnS) + (CafeP * QtnC-Pre�oC*QtnC) + (RefrigeranteP * QtnR-Pre�oR*QtnR) + (BoloP * QtnB-Pre�oB*QtnB);

	cout << "O lucro total foi de: " << lucro << " Euros." << endl;
	

}
