#pragma once
#include<cmath>
class RKfuncs
{
private:
	// параметры:
	double L; 
	double R; 
	double V; 

	//начальные значения:
	double X0;
	double V0;

	//текущие значения:
	double Xi; 
	double Vi;
		
	//предыдущие значения:
	double prevX;
	double prevV; 
	
	double H; 
	int maxSteps;
	int i; 
		
	double epsBorder; // эпсилон для контроля правой границы
	double epsError; // эпсилон для контроля ЛП
	double S; // оценка локальной погрешности на i шаге

	double countF(double Vi);//функция f задачи
public:
	RKfuncs() {};

	//установить значение полей
	void setL(double L); 
	void setR(double R); 
	void setV(double V);
	void setH(double H);
	void setX0(double X0);
	void setV0(double V0);
	void setXi(double Xi);
	void setVi(double Vi);
	void setPrev(double prevX, double prevV);
	void setEpsBorder(double epsBorder);
	void setEpsError(double epsError);
	void setmaxSteps(int maxSteps);

	//получить значение полей
	double getL(); 
	double getR(); 
	double getV();
	double getH();
	double getHalfH();
	double getEpsBorder();
	double getEpsError();
	double getX0();
	double getV0();
	double getXi();
	double getVi(); 
	int getmaxSteps(); 
	
	

	void RK4(double h); // Метод Р-К 4 порядка
	bool tooBig(double vi, double v2i);
	bool tooSmall(double vi, double v2i);
	void goBack();
	void doHalfH(void); // поделить шаг пополам
	void doDoubleH(void); // удвоить шаг
	double getLocalControl();
	double getCountS(double vi, double v2i);

};