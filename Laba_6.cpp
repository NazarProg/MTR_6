// Laba_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

//Variant 2

int main()
{
	double a11, a12, a13, a14;
	double a21, a22, a23, a24;
	double a31, a32, a33, a34;
	double a41, a42, a43, a44;
	double u1, u2, u3, u4, u5, u6, u7, u8;
	double sum1, sum2, sum3, sum4;
	double s1, s2, s3, s4;
	double ss1, ss2, ss3, ss4;
     
	cout << "Enter 1 string: " << endl;
	cin >> a11 >> a12 >> a13 >> a14;
	cout << "Enter 2 string: " << endl;
	cin >> a21 >> a22 >> a23 >> a24;
	cout << "Enter 3 string: " << endl;
	cin >> a31 >> a32 >> a33 >> a34;
	cout << "Enter 4 string: " << endl;
	cin >> a41 >> a42 >> a43 >> a44;
	cout << "Enter u1 and u2 for 1 variant" << endl;
	cin >> u1 >> u2;
	cout << "Enter u1 and u2 for 2 variant" << endl;
	cin >> u3 >> u4;
	cout << "Enter u1 and u2 for 3 variant" << endl;
	cin >> u5 >> u6;
	cout << "Enter u1 and u2 for 4 variant" << endl;
	cin >> u7 >> u8;
	double a[4] = { a11, a12, a13, a14 };
	double b[4] = { a21, a22, a23, a24 };
	double c[4] = { a31, a32, a33, a34 };
	double d[4] = { a41, a42, a43, a44 };
	for (int i = 0; i < 4; ++i) {
		
		a[i] = -a[i];
		b[i] = -b[i];
		c[i] = -c[i];
		d[i] = -d[i];
		
		
	}
	
	for (int i = 0; i < 4; ++i) {

		a[i] = a[i] * u1;
		b[i] = b[i] * u1;
		c[i] = c[i] * u1;
		d[i] = d[i] * u1;


	}
	cout << a[0] <<" " <<  a[1] <<" " << a[2] <<" " << a[3] << endl;
	cout << b[0] << " "<< b[1] <<" " << b[2] <<" " << b[3] << endl;
	cout << c[0] <<" " << c[1] <<" " << c[2] <<" " << c[3] << endl;
	cout << d[0] << " " << d[1] << " " << d[2] <<" " << d[3] << endl;

	double m[4] = { a[0], a[1], a[2], a[3] };
	double m1[4] = { b[0], b[1], b[2], b[3] };
	double m2[4] = { c[0], c[1], c[2], c[3] };
	double m3[4] = { d[0], d[1], d[2], d[3] };
	double min = m[0], min1 = m1[0], min2 = m2[0], min3 = m3[0];
	for (int i = 0; i < 4; ++i)
	{
		if (m[i] < min)
		{
			min = m[i];
			min1 = m1[i];
			min2 = m2[i];
			min3 = m3[i];
		}
	}
	cout << " Minimals are " << min <<" " << min1 <<" "<< min2 <<" " << min3 << endl;
	double ma[4] = { min, min1, min2, min3 };
	double max = ma[0];

	for (int i = 0; i < 4; ++i) {
		if (ma[i] > max) {
			max = ma[i];
		}
	}

	cout << "Optimal choice for Vald is " << max << endl;
	sum1 = a[0] + a[1] + a[2] + a[3];
	sum2 = b[0] + b[1] + b[2] + b[3];
	sum3 = c[0] + c[1] + c[2] + c[3];
	sum4 = d[0] + d[1] + d[2] + d[3];
	double maa[4] = { sum1, sum2, sum3, sum4 };
	double maxx = maa[0];

	for (int i = 0; i < 4; ++i) {
		if (maa[i] > maxx) {
			maxx = maa[i];
		}
	}
	cout << "Optimal choice for Bernoulli-Laplace is " << maxx << endl;
	double a1[4] = { a11, a12, a13, a14 };
	double b1[4] = { a21, a22, a23, a24 };
	double c1[4] = { a31, a32, a33, a34 };
	double d1[4] = { a41, a42, a43, a44 };

	double minn = a1[0], minn1 = b1[0], minn2 = c1[0], minn3 = d1[0];
	for (int i = 0; i < 4; ++i)
	{
		if (a[i] < minn)
		{
			minn = a1[i];
			minn1 = b1[i];
			minn2 = c1[i];
			minn3 = d1[i];
		}
	}
	for (int i = 0; i < 4; ++i) {

		a1[i] = a1[i] / minn;
		b1[i] = b1[i] / minn1;
		c1[i] = c1[i] / minn2;
		d1[i] = d1[i] / minn3;


	}
	for (int i = 0; i < 4; ++i) {

		a1[i] = a1[i] * u5;
		b1[i] = b1[i] * u5;
		c1[i] = c1[i] * u5;
		d1[i] = d1[i] * u5;


	}
	
	double maaa[4] = { a1[0], a1[1], a1[2], a1[3] };
	double maa1[4] = { b1[0], b1[1], b1[2], b1[3] };
	double maa2[4] = { c1[0], c1[1], c1[2], c1[3] };
	double maa3[4] = { d1[0], d1[1], d1[2], d1[3] };
	double maxxx = maaa[0], maxxx1 = maa1[0], maxxx2 = maa2[0], maxxx3 = maa3[0];

	for (int i = 0; i < 4; ++i) {
		if (maaa[i] > maxxx) {
			maxxx = maaa[i];
			maxxx1 = maa1[i];
			maxxx2 = maa2[i];
			maxxx3 = maa3[i];

		}
	}
	double mm[4] = { maxxx, maxxx1, maxxx2, maxxx3 };
	double mi = mm[0];
	for (int i = 0; i < 4; ++i)
	{
		if (mm[i] < mi)
		{
			mi = mm[i];

		}
	}
	cout << "Optimal choice for Vald is " << mi << endl;

	s1 = a1[0] + a1[1] + a1[2] + a1[3];
	s2 = b1[0] + b1[1] + b1[2] + b1[3];
	s3 = c1[0] + c1[1] + c1[2] + c1[3];
	s4 = d1[0] + d1[1] + d1[2] + d1[3];

	double mmm[4] = { s1, s2, s3, s4 };
	double mii = mmm[0];
	for (int i = 0; i < 4; ++i)
	{
		if (mmm[i] < mii)
		{
			mii = mmm[i];

		}
	}
	cout << "Optimal choice for Bernoulli-Laplace is  " << mii << endl;
	double x[4] = { a11, a21, a31, a41 };
	double x1[4] = { a12, a22, a32, a42 };
	double x2[4] = { a13, a23, a33, a43 };
	double x3[4] = { a14, a24, a34, a44 };
	double xx = x[0], xx1 = x1[0], xx2 = x2[0], xx3 = x3[0];

	for (int i = 0; i < 4; ++i) {
		if (x[i] > xx) {
			xx = x[i];
			xx1 = x1[i];
			xx2 = x2[i];
			xx3 = x3[i];

		}
	}
	double ii[4] = { a11, a21, a31, a41 };
	double ii1[4] = { a12, a22, a32, a42 };
	double ii2[4] = { a13, a23, a33, a43 };
	double ii3[4] = { a14, a24, a34, a44 };
	double nn = ii[0], nn1 = ii1[0], nn2 = ii2[0], nn3 = ii3[0];
	for (int i = 0; i < 4; ++i)
	{
		if (ii[i] < nn)
		{
			nn = ii[i];
			nn1 = ii1[i];
			nn2 = ii2[i];
			nn3 = ii3[i];
		}
	}
	double a2[4] = { a11, a12, a13, a14 };
	double b2[4] = { a21, a22, a23, a24 };
	double c2[4] = { a31, a32, a33, a34 };
	double d2[4] = { a41, a42, a43, a44 };

	for (int i = 0; i < 4; ++i)
	{
		
		a2[i] = (xx - a[i]) / (xx - nn);
		b2[i] = (xx1 - b[i]) / (xx1 - nn1);
		c2[i] = (xx2 - c[i]) / (xx2 - nn2);
		d2[i] = (xx3 - d[i]) / (xx3 - nn3);
			
	}
	for (int i = 0; i < 4; ++i) {

		a2[i] = a2[i] * u7;
		b2[i] = b2[i] * u7;
		c2[i] = c2[i] * u7;
		d2[i] = d2[i] * u7;

	}
	double e[4] = { a2[0], a2[1], a2[2], a2[3] };
	double e1[4] = { b2[0], b2[1], b2[2], b2[3] };
	double e2[4] = { c2[0], c2[1], c2[2], c2[3] };
	double e3[4] = { d2[0], d2[1], d2[2], d2[3] };
	double ex = e[0], ex1 = e1[0], ex2 = e2[0], ex3 = e3[0];

	for (int i = 0; i < 4; ++i) {
		if (e[i] >ex) {
			ex = e[i];
			ex1 = e1[i];
			ex2 = e2[i];
			ex3 = e3[i];

		}
	}
	double inn[4] = { ex, ex1, ex2, ex3 };
	double mim = inn[0];
	for (int i = 0; i < 4; ++i)
	{
		if (inn[i] < mim)
		{
			mim = inn[i];

		}
	}
	cout << "Optimal choice for Vald is " << mim << endl;
	ss1 = a2[0] + a2[1] + a2[2] + a2[3];
	ss2 = b2[0] + b2[1] + b2[2] + b2[3];
	ss3 = c2[0] + c2[1] + c2[2] + c2[3];
	ss4 = d2[0] + d2[1] + d2[2] + d2[3];

	double miim[4] = { ss1, ss2, ss3, ss4 };
	double miii = miim[0];
	for (int i = 0; i < 4; ++i)
	{
		if (miim[i] < miii)
		{
			miii = miim[i];

		}
	}
	cout << "Optimal choice for Bernoulli-Laplace is  " << miii << endl;
}


