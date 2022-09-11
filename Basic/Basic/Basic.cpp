#include<iostream>
using namespace std;

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
}
