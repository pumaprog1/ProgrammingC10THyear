#include <iostream>
using namespace std;
int main () {
	double SanduicheP, CafeP, RefrigeranteP, BoloP;
	double QtnS, QtnC, QtnR, QtnB;
	double PreçoS, PreçoC, PreçoR, PreçoB;
	PreçoS = 1;
	PreçoC = 0.6;
	PreçoB = 0.8;
	PreçoR = 1.5;
	
	
	cout << "Qual o preço de venda do sanduiche? ";
	cin >> SanduicheP;
	cout << "Qual o preço de venda do cafe? ";
	cin >> CafeP;
	cout << "Qual o preço de venda do refrigerante? ";
	cin >> RefrigeranteP;
	cout << "Qual o preço de venda do bolo? ";
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
	lucro = (SanduicheP * QtnS- PreçoS*QtnS) + (CafeP * QtnC-PreçoC*QtnC) + (RefrigeranteP * QtnR-PreçoR*QtnR) + (BoloP * QtnB-PreçoB*QtnB);

	cout << "O lucro total foi de: " << lucro << " Euros." << endl;
	

}
