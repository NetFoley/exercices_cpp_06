#pragma once

#include "vect3D.h"

using namespace std;

template <class T> class vect2D : public vect3D<T>
{

public:
	//void affiche();
	vect2D();
	vect2D(T x = 0, T y = 0);
	inline vect2D(const vect2D<T>& vcopy);
	vect2D<T> operator+=(const vect2D<T>& p);
	vect2D<T> operator+(const vect2D<T>& p);
	vect2D<T> operator*(const vect2D<T>& p);
	vect2D<T> operator*(const T p);
	vect2D<T> operator=(const vect3D<T>& p);

	/*
	vect2D operator*(const float p)
	{
		this->x *= p;
		this->y *= p;
		return *this;
	}
	vect2D operator*(const vect2D& p)
	{
		this->x = this->y - p.y;
		this->y = p.x - this->x;
		return *this;
	}

	vect2D operator=(const vect2D& p)
	{
		this->x = p.x;
		this->y = p.y;
		return *this;
	}*/

	friend std::ostream& operator<<(ostream& flux, const vect2D& vect)
	{
		flux << "x:" << vect.x << " y:" << vect.y;
		return flux;
	}
};
/*
template <class T> void vect2D<T>::affiche()
{
	cout << "Coordonnees : " << *this << "\n";
}*/

template <class T> vect2D<T>::vect2D()
{
	this->x = 0;
	this->y = 0;
	this->z = 1;
}

template <class T> vect2D<T>::vect2D(T x, T y)
{
	this->x = x;
	this->y = y;
	this->z = 1;
}	

template <class T> inline vect2D<T>::vect2D(const vect2D<T>& vcopy)
{
	this->x = vcopy.x;
	this->y = vcopy.y;
	this->z = 1;
}

template<class T>
inline vect2D<T> vect2D<T>::operator+=(const vect2D<T>& p)
{
	vect2D v = *this;
	v.x += p.x;
	v.y += p.y;
	return v;
}

template<class T>
inline vect2D<T> vect2D<T>::operator+(const vect2D<T>& p)
{
	vect2D v = *this;
	v.x += p.x;
	v.y += p.y;
	return v;
}

template<class T>
inline vect2D<T> vect2D<T>::operator*(const vect2D<T>& p)
{
	vect2D v = *this;
	v.x *= p.x;
	v.y *= p.y;
	return v;
}

template<class T>
inline vect2D<T> vect2D<T>::operator*(T p)
{
	vect2D v = *this;
	v.x *= p;
	v.y *= p;
	return v;
}

template<class T>
inline vect2D<T> vect2D<T>::operator=(const vect3D<T>& p)
{
	vect2D v = *this;
	v.x = p.getX();
	v.y = p.getY();
	return v;
}