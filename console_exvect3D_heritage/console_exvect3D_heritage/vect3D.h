#pragma once

using namespace std;

template <class T> class vect3D {
protected:
	T x, y, z;
	// coordonnees 
public:
	vect3D(T x=0, T y=0, T z=0)
	{
		this->x = x; this->y = y; this->z = z;
	}

	T getX() const;
	T getY() const;
	T getZ() const;
	void affiche();

	inline vect3D(const vect3D<T>& vcopy)
	{
		this->x = vcopy.x;
		this->y = vcopy.y;
		this->z = vcopy.z;
	}

	friend std::ostream& operator<<(ostream& flux, const vect3D& vect)
	{
		flux << "x:" << vect.x << " y:" << vect.y << " z:" << vect.z;
		return flux;
	}
	vect3D operator+=(const vect3D& p)
	{
		this->x += p.x;
		this->y += p.y;
		this->z += p.z;
		return *this;
	}

	vect3D operator+(const vect3D& p)
	{
		vect3D vectResult(0, 0, 0);
		vectResult.x = this->x + p.x;
		vectResult.x = this->y + p.y;
		vectResult.x = this->z + p.z;
		return vectResult;
	}

	vect3D operator*(const T p)
	{
		vect3D vectResult(0,0,0);
		vectResult.x = this->x * p;
		vectResult.y = this->y * p;
		vectResult.z = this->z * p;
		return vectResult;
	}

	vect3D operator*(const vect3D& p)
	{
		vect3D vectResult(0, 0, 0);
		vectResult.x = this->y * p.z - this->z * p.y;
		vectResult.y = this->z * p.x - this->x * p.z;
		vectResult.z = this->x * p.y - this->y * p.x;
		return vectResult;
	}

	vect3D operator=(const vect3D& p)
	{
		this->x = p.x;
		this->y = p.y;
		this->z = p.z;
		return *this;
	}

	bool operator==(const vect3D& p)const
	{
		return this->x == p.x && this->y == p.y && this->z == p.z;
	}

	bool coincide(const vect3D v)
	{
		return *this == v;
	}


};

template<class T>
T scalaire(vect3D<T>& v1, vect3D<T>& v2)
{
	return (v1.getX() * v2.getX() + v1.getY() * v2.getY() + v1.getZ() * v2.getZ());
}

template<class T>
T mixte( vect3D<T>& v1,  vect3D<T>& v2,  vect3D<T>& v3)
{
	vect3D<T> v = v1;
	v = v * v2;
	return fabs(scalaire(v, v3));
}

template<class T>
inline T vect3D<T>::getX() const
{
	return this->x;
}

template<class T>
inline T vect3D<T>::getY() const
{
	return this->y;
}

template<class T>
inline T vect3D<T>::getZ() const
{
	return this->z;
}

template <class T> void vect3D<T>::affiche()
{
	cout << "Coordonnees : " << *this << "\n";
}
