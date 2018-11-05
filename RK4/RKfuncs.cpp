#include "RKfuncs.h"

void RKfuncs::setL(double L)
{
	this->L = L;
}

void RKfuncs::setR(double R)
{
	this->R = R;
}

void RKfuncs::setV(double V)
{
	this->V = V;
}

void RKfuncs::setH(double H)
{
	this->H = H;
}

void RKfuncs::setX0(double X0)
{
	this->X0=X0;
}

void RKfuncs::setV0(double V0)
{
	this->V0 = V0;
}

void RKfuncs::setXi(double Xi)
{
	this->Xi = Xi;
}

void RKfuncs::setEpsBorder(double epsBorder)
{
	this->epsBorder = epsBorder;

}

void RKfuncs::setEpsError(double epsError)
{
	this->epsError = epsError;
}

void RKfuncs::setmaxSteps(int maxSteps)
{
	this->maxSteps = maxSteps;
}

void RKfuncs::setPrev(double prevX, double prevV)
{
	this->prevX = prevX; 
	this->prevV = prevV;
}

void RKfuncs::setVi(double Vi)
{
	this->Vi = Vi;
}

double RKfuncs::getL()
{
	return L;
}

double RKfuncs::getR()
{
	return R;
}

double RKfuncs::getV()
{
	return V;
}

double RKfuncs::getH()
{
	return H;
}

double RKfuncs::getHalfH()
{
	return H/2;
}

double RKfuncs::getEpsBorder()
{
	return epsBorder;
}

double RKfuncs::getEpsError()
{
	return epsError;
}

double RKfuncs::getX0()
{
	return X0;
}

double RKfuncs::getV0()
{
	return V0;
}

double RKfuncs::getXi()
{
	return Xi;
}

double RKfuncs::getVi()
{
	return Vi;
}

int RKfuncs::getmaxSteps()
{
	return maxSteps;
}

void RKfuncs::RK4(double h)
{double k1, k2, k3, k4;
	double xi, vi;

	xi = Xi + h;
	k1 = countF(Vi);
	k2 = countF(Vi + h / 2 * k1);
	k3 = countF(Vi + h / 2 * k2);
	k4 = countF(Vi + h * k3);
	vi = Vi + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
	prevX = Xi;
	prevV = Vi;
	Xi = xi;
	Vi = vi;
}

bool RKfuncs::tooBig(double vi, double v2i)
{
	double s = getCountS(vi, v2i);
	if (s > epsError)
	{
		return true;
	}

	return false;
}

bool RKfuncs::tooSmall(double vi, double v2i)
{

	double s = getCountS(vi, v2i);
	double Eps = getLocalControl();
	if (s < Eps)
		return true;

	return false;
}

void RKfuncs::goBack()
{
	Xi = prevX;
	Vi = prevV;
}

void RKfuncs::doHalfH(void)
{
	H = H / 2;
}

void RKfuncs::doDoubleH(void)
{
	H = H * 2;
}

double RKfuncs::getLocalControl()
{
	double Eps = epsError;
	Eps = Eps / pow(2, 4 + 1);
	return Eps;
}

double RKfuncs::getCountS(double vi, double v2i)
{
	double S = (v2i - vi) / (pow(2, 4) - 1);
	return fabs(S);
}

double RKfuncs::countF(double Vi)
{
	return (V-R*Vi)/L;
}
