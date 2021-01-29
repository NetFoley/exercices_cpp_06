#pragma once

#include "vect2D.h"

template <class T, int n> class vectArray {
private:
	vect3D<T> values[n];

public:
	vectArray();
	vectArray(vect3D<T> value);
	vect3D<T>& operator[](int);
	void affiche();
};

template<class T, int n>
inline vectArray<T, n>::vectArray()
{
	for (int i = 0; i < n; i++)
	{
		this->values[i] = vect3D<T>();
	}

	return *this;
}

template<class T, int n>
inline vectArray<T, n>::vectArray(vect3D<T> value)
{
	for (int i = 0; i < n; i++)
	{
		this->values[i] = value;
	}
}

template<class T, int n>
inline vect3D<T>& vectArray<T, n>::operator[](int index)
{
	if (index >= n)
	{
		cout << "Array index out of bound, exiting";
		exit(0);
		return this->values[0];
	}

	return this->values[index];
}

template<class T, int n>
inline void vectArray<T, n>::affiche()
{
	cout << "Array of vect : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "vect " << i << " :";
		this->values[i].affiche();
	}
}

