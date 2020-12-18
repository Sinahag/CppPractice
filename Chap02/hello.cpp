// hello.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
    int ia[5];
    ia[0] = 1;
    ia[1] = 2;
    printf("this is the first value in the array %d\n", ia[0]);
    printf("this is the second value in the array %d\n", ia[1]);
    int* ip = ia;
    *ip = 5;
    printf("this is the first value in the array %d\n", ia[0]);
    printf("this is the second value in the array %d\n", ia[1]);
    *(++ip) = 9;
    printf("this is the first value in the array %d\n", ia[0]);
    printf("this is the second value in the array %d\n", ia[1]);
    *(++ip) = 23;
    printf("this is the first value in the array %d\n", ia[0]);
    printf("this is the second value in the array %d\n", ia[1]);
    printf("this is the second value in the array %d\n", ia[2]);
    return 0;
}
