#pragma once
#include<cmath>
class RKfuncs
{
private:
	// ���������:
	double L; 
	double R; 
	double V; 

	//��������� ��������:
	double X0;
	double V0;

	//������� ��������:
	double Xi; 
	double Vi;
		
	//���������� ��������:
	double prevX;
	double prevV; 
	
	double H; 
	int maxSteps;
	int i; 
		
	double epsBorder; // ������� ��� �������� ������ �������
	double epsError; // ������� ��� �������� ��
	double S; // ������ ��������� ����������� �� i ����

	double countF(double Vi);//������� f ������
public:
	RKfuncs() {};

	//���������� �������� �����
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

	//�������� �������� �����
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
	
	

	void RK4(double h); // ����� �-� 4 �������
	bool tooBig(double vi, double v2i);
	bool tooSmall(double vi, double v2i);
	void goBack();
	void doHalfH(void); // �������� ��� �������
	void doDoubleH(void); // ������� ���
	double getLocalControl();
	double getCountS(double vi, double v2i);

};