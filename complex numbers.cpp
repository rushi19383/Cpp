#include <iostream>
using namespace std;

class complexNum
{
private:
    float real, imag;

public:
    complexNum(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    complexNum operator+(complexNum obj);
    complexNum operator-(complexNum obj);
    complexNum operator*(complexNum obj);
    complexNum operator/(complexNum obj);
    void display(void);

    friend ostream &operator<<(ostream &out, const complexNum &c);
    friend istream &operator>>(istream &in, complexNum &c);
};

ostream &operator<<(ostream &out, const complexNum &c)
{
    out << c.real;
    out << " + " << c.imag<<"i" << endl;
    return out;
}

istream &operator>>(istream &in, complexNum &c)
{
    cout << "Enter Real Part: ";
    in >> c.real;
    cout << "Enter Imaginary Part: ";
    in >> c.imag;
    return in;
}

complexNum complexNum ::operator+(complexNum obj1)
{
    complexNum temp;
    temp.real = real + obj1.real;
    temp.imag = imag + obj1.imag;
    return temp;
}

complexNum complexNum ::operator-(complexNum obj1)
{
    complexNum temp;
    temp.real = real - obj1.real;
    temp.imag = imag - obj1.imag;
    return temp;
}

complexNum complexNum ::operator*(complexNum obj1)
{
    complexNum temp;
    temp.real = real * obj1.real;
    temp.imag = imag * obj1.imag;
    return temp;
}

complexNum complexNum ::operator/(complexNum obj1)
{
    complexNum temp;
    temp.real = real / obj1.real;
    temp.imag = imag / obj1.imag;
    return temp;
}

// void complexNum ::display(void)
// {
//     cout << real << " + " << imag << "i " << endl;
// }

int main()
{
    complexNum c1, c2, c3, c4, c5, c6;
    // c1 = complexNum(1, 1);
    // c2 = complexNum(1, 1);

    cin>>c1>>c2;

    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;
    c6 = c1 / c2;


    cout << "complex number c1: ";
    cout<<c1;

    cout << "complex number c2: ";
    cout<<c2;

    cout << "complex number addition: ";
    cout<<c3;

    cout << "complex number subtraction: ";
    cout<<c4;

    cout << "complex number multiplication: ";
    cout<<c5;

    cout << "complex number division: ";
    cout<<c6;

    return 0;
}

