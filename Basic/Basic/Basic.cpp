#include<iostream>
#include "MyHeader.h"
using namespace std;

int func(int);
inline float square(float x) { return x * x; }

//class 혹은 typeName
template <class Any>
Any sum(Any, Any);

class Stock {
private:
    string name;
    int shares;
    float share_val;
    double total_val;
public:
    void acquire(string&, int, float);
    void buy(int, float);
    void sell(int, float);
    void update(float);
    void show();
    Stock();
    ~Stock();
};
//사용 범위 결정 연산자 ::
void Stock::acquire(string& co, int n, float pr) {

}
void Stock::buy(int n, float pr) {

}
void Stock::sell(int n, float pr) {

}
void Stock::update(float pr) {

}
void Stock::show() {

}
Stock::Stock() {
     
}
Stock::~Stock() {

}
int main()
{
    cout << "Hello World!" << endl;
    bool a = 0;
    bool b = -1; //음수도 1로 취급
    cout << a << " " << b << endl;

    //구조체
    struct MyStruct
    {
        string word = "";
        int number = 0;
    };

    //공용체
    union MyUnion
    {
        int intVal;
        float floatVal;
        long longVal;
    };

    //열거체
    enum MyEnum
    {
        red, orange, yellow
    };

    //포인터
    int c = 10;
    int* d;
    d = &c;

    //new, delete
    d = new int[3];
    delete[] d;

    //포인터 연산
    MyStruct* temp = new MyStruct;
    temp->word = "word";
    (*temp).number = 10;
    delete temp;

    //반복문
    for (int i = 0; i < 5; i++)
    {
        break;
    }

    int e[] = { 2, 4, 6, 8 };
    for (int i : e)
    {
        cout << i << endl;
    }

    while (true)
    {
        break;
    }

    //2차원 배열
    int f[4][5];

    //조건문
    if (true)
    {
        
    }
    else if (true)
    {

    }
    else
    {

    }

    switch (c)
    {
    case 1:
        break;
    default:
        break;
    }

    //함수를 지시하는 포인터
    int (*pf)(int);
    pf = func;
    cout << (*pf)(3) << endl;

    //인라인 함수
    float f = square(5);

    //참조변수
    int& g = c;

    //함수 템플릿
    int h = 5;
    cout << sum(c, h) << endl;
    int a = 0;
    int b = 0;
    cin >> a;
    for (int i = 0; i <= a; i++)
    {
        b += i;
    }
    cout << b << endl; 
}
int func(int n) {
    return n + 1;
}
template <class Any>
Any sum(Any a, Any b) {
    return a + b;
}
