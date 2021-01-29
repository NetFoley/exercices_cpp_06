// console_exvect3D_heritage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "vect3D.h"
#include "vect2D.h"
#include "vectArray.h"

int main()
{
    std::cout << "Hello World!\n";
    vect3D<int> v1(1,0,1);
    vect3D<int> v2(2, 3, 3);

    vect3D<int>v3 = (v1 + v2);
    v1.affiche();
    v3.affiche();

    vect3D<int> v4(3, 3, 4);
    vect3D<int> v5(v4);
    v5.affiche();
    v5 = v5 * 2;
    v5.affiche();

    vect3D<int> v6 = v1 * vect3D<int>(0,0,1);
    v6.affiche();

    if (v3 == v4)
        cout << "coincide de ouf" << endl;
    else
        cout << "coincide pas de ouf" << endl;

    cout << v6 << endl;

    vect2D<int> v7(1, 3);
    v7.affiche();

    std::cout << v7 << endl;

    std::cout << "\nVECT2D TIME!\n";
    vect2D<int> v8(1, 0);
    vect2D<int> v9(2, 3);

    vect2D<int> v10 = (v8 + v9);
    v10.affiche();

    vect2D<int> v11(3, 3);
    vect2D<int> v12(v11);
    // = v12 * 2;
    //v12.affiche();

    //vect2D<int> v13 = (v8 * vect2D<int>(0, 1));
    vect2D<int> v13 = v8;
    v13 = v13 * vect2D<int>(0, 1);

    v13.affiche();
    std::cout << v13 << endl;

    if (v10 == v11)
        std::cout << "coincide de ouf" << endl;
    else
        std::cout << "coincide pas de ouf" << endl;

    vect3D<float> v14(1,9,3);
    vect3D<float> v15(4,5,8);
    vect3D<float> v16(4,6,2);
    vect2D<float> v17(8,5);
    vect2D<float> v18(3,6);
    vect2D<float> v19(0,0);
    float a = mixte(v14, v15, v16);
    cout << " mixte : " << a << endl;
    float b = scalaire(v14, v15);
    cout << " scalaire : " << b << endl;

    float c = mixte(v17, v18, v19);
    cout << " mixte 2D : " << c << endl;

    vectArray<float, 5> vects(v14);

    vects.affiche();

    vects[2] = v15;
    vects[3] = v16;
    vects.affiche();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
