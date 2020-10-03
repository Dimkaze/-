#include <iostream>
#include <cmath>
#include <tuple>
int if1(int a)
{
    if (a > 0)
    {
        return a + 1;
    }
    return a;
}
int if2(int a)
{
    if (a > 0)
    {
        return a + 1;
    }
    return a - 2;
}
int if3(int a)
{
    if (a > 0)
    {
        return a + 1;
    }
    if (a == 0)
    {
        return a = 10;
    }
    return a - 2;
}
int if4(int a, int b, int c)
{
    int count = 0;
    if (a > 0)
    {
        ++count;
    }
    if (b > 0)
    {
        ++count;
    }
    if (c > 0)
    {
        ++count;
    }
    return count  ;
}
void if5(int a, int b, int c)
{
    int count = 0;
    int uncount = 0;
    if (a > 0)
    {
       ++count;
    }
    else { ++uncount; }
    if (b > 0)
    {
        ++count;
    }
    else { ++uncount; }
    if (c > 0)
    {
        ++count;
    }
    else { ++uncount; }
    std::cout << count << " "<< uncount ;
}
int if6(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}
int if7(int a, int b)
{
    if (a > b)
    {
        return 1;
    }
    return 2;
}
void if8(int a, int b)
{
    if (a > b)
    {
        std::cout << a << b;
    }
    else 
    {
        std::cout << b << a;
    }
}
void if9(double a, double b)
{
    if (b > a)
    {
        std::cout << b << a;
   }
    else {
        int temp = a;
        a = b;
        b = temp;
        std::cout << b << a;
    }
}
void if10(int a, int b)
{
    if (a == b)
    {
        std::cout << a * 0 << " " << b * 0;
    }
    else {
        std::cout << a + b << " " << a + b;
    }
}
void if11(int a, int b)
{
     
    if (a > b)
    {
        std::cout << a << " " << a * b / b;
    }
    if(a < b)
    {
        std::cout << b << " " << b * a / a;
    }
    else {
        std::cout << a * 0 << " " << b * 0;
    }
}
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}
int min/*if12*/(int a, int b, int c)
{
    return min(min(a, b), c);
}
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}
int average /*if13*/(int a, int b, int c)
{
    int average = min(max(a, b), c);
    return average;
}
void MaxMin/*if14*/(int a, int b, int c)
{
    int maximal = max(max(a, b), c);
    int minimal = min(min(a, b), c);
    std::cout << minimal << " " << maximal;
}
void sumMaxAndMax/* if15*/(int a, int b, int c)
{
 int maximal = max(max(a, b), c);
 int average = min(max(a, b), c);
 std::cout << maximal + average << std::endl;
}
void if16(double a, double b, double c)
{
    if (a > b && a > c)
    {
        if (b > c)
        {
            std::cout << a * 2 << " " << b * 2 << " " << c * 2;
        }
    }
    else
    {
        std::cout << -a << " " << -b << " " << -c;
    }
}
void if17(double a, double b, double c)
{
    if (a > b && a > c)
    {
        if (b > c)
        {
            std::cout << a * 2 << " " << b * 2 << " " << c * 2;
        }
    }
     else if (c > a && c > b)
    {
        if (a < b)
        {
            std::cout << a * 2 << " " << b * 2 << " " << c * 2;
        }
    }
     else 
    {
        std::cout << -a << " " << -b << " " << -c;
    }
}

int if18(int a, int b, int c)
{
    if (a != b && c==b )
    {
        return 1;
    }
    if (b != a  && a==c)
    {
        return 2;
    }
    if (c != a  && a==b)
    {
        return 3;
    }
}
int if19(int a, int b, int c, int d)
{
    if (a == b && b == c && d != a)
    {
        return 4;
    }
    if (a == d && d == c && b != a)
    {
        return 3;
    }
    if (a == b && b == d && c != a)
    {
        return 2;
    }
    if (d == b && b == c && a != b)
    {
        return 1;
    }
}
void if20(int a, int b, int c)
{
    if (std::abs(b - a) > std::abs(c - a))
    {
        std::cout << c << " " << std::abs(c - a);
    }
    if (std::abs(b - a) < std::abs(c - a))
    {
        std::cout << b << " " << std::abs(c - a);
    }
}
int if21(int x, int y)
{
    if (x == 0 && y == 0)
    {
        return 0;
    }
    if (x != 0 && y == 0)
    {
        return 1;
    }
    if (y != 0 && x == 0)
    {
        return 2;
    }
    if (x != 0 && y != 0)
        return 4;
}
int if22(int x, int y)
{
    if (x > 0 && y > 0)
    {
        return 1;
    }
    if (x < 0 && y > 0)
    {
        return 2;
    }
    if (x < 0 && y < 0)
    {
        return 3;
    }
    if (x > 0 && y < 0)
    {
        return 4;
    }
}
int if24(int x)
{
    if (x > 0)
    {
        return 2 * sin(x);
    }
    else
    {
        return 6 - x;
    }
}
int if25(int x)
{
    if (x < -2 && x>2)
    {
        return 2 * x;
    }
    else
    {
        return 6 - x;
    }
}
int if26(int x)
{
    if (x <= 0) {
        return -x;
    }
    if (x > 0 && x < 2)
    {
        return std::pow(x, 2);
    }
    else {
        return 4;
    }
}
int if27(int x)
{
    if (x < 0)
    {
        return 0;
    }
    if ((( x % 2 == 0 )<=x) && (x % 2 != 1)<x)
    {
        return 1;
    }
    else
    {
       return -1;
    }
}
void if28(int x)
{
    if ((x % 4 == 0) && (x % 100 != 0 && x % 400 != 0)) {
        std::cout << "Год является високосным" << std::endl;
    }
    else {
        std::cout << "Год является не високосным" <<std::endl;
    }
}
void if29(int a)
{
    if (a % 2 == 0) {
        std::cout << "Четное " << std::endl;
    }
    if (a % 2 != 0) {
        std::cout << "Нечетное " << std::endl;
    }
    if (a < 0) {
        std::cout << "Отрицательное " << std::endl;
    }
}
void if30(int a)
{
    if (a > 9 && a < 100 && a % 2 == 0)
    {
        std::cout << "Even double_count";
    }
    if (a > 9 && a < 100 && a % 2 != 0)
    {
        std::cout << "not_Even double_count";
    }
    if (a > 99 && a < 1000 && a % 2 != 0)
    {
        std::cout << "Not_even tripl_count";
    }
    if (a > 99 && a < 1000 && a % 2 == 0)
    {
        std::cout << "even tripl_count";
    }
}
int min1(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    return y;
}
double max1(double x,double y)
{
    if (x > y)
    {
        return x;
    }
    return y;
}
double min1(double z, double x, double y)
{
    double minimal = min1(min1(x, y), z);
    double maximum = max1(x, y);
    return minimal + maximum;
}
void exchange3(double x1, double x2, double x3, double x4)
{
    if (x1 < x2)
    {
        std::cout << x1 << " " << x2 << " ";
    }
    else
    {
        double count = x1;
        x1 = x2;
        x2 = count;
        std::cout << x1 << " " << x2 << " ";
    }
    if (x3 < x4)
    {
        std::cout << x3 << " " << x4;
    }
    else
    {
        double temp = x3;
        x3 = x4;
        x4 = temp;
        std::cout << x3 << " " << x4;
    }
}
void exchange4(double x1, double x2, double x3, double x4)
{
    if (x1 > x2)
    {
        std::cout << x1 << " " << x2 << " ";
    }
    else
    {
        double count = x1;
        x1 = x2;
        x2 = count;
        std::cout << x1 << " " << x2 << " ";
    }
    if (x3 < x4)
    {
        std::cout << x3 << " " << x4;
    }
    else
    {
        double temp = x3;
        x3 = x4;
        x4 = temp;
        std::cout << x3 << " " << x4;
    }
}
void exchange5(double x1, double x2, double x3, double x4)
{
    if (x1 >= x2)
    {
        std::cout << x1 << " " << x2 << " ";
    }
    else
    {
        double count = x2;
        x2 = x1;
        x1 = count;
        std::cout << x1 << " " << x2 << " ";
    }
    if (x3 >= x4)
    {
        std::cout << x3 << " " << x4;
    }
    else
    {
        double temp = x4;
        x4 = x3;
        x3 = temp;
        std::cout << x3 << " " << x4;
    }
}
void exchange6(double x1, double x2, double x3,double x4) 
{
    if (x1 < x2)
    {
        std::cout << x1 << " " << x2 << " ";
    }
    else
    {
        double count = x1;
        x1 = x2;
        x2 = count;
        std::cout << x1 << " " << x2 << " ";
    }
    if (x3 >= x4)
    {
        std::cout << x3 << " " << x4;
    }
    else
    {
        double temp = x3;
        x3 = x4;
        x4 = temp;
        std::cout << x3 << " " << x4;
    }
}
void exchange7(double x, double y, double z)
{
    if (x < y && y < z)
    {
        std::cout << x << " " << y << " " << z;
    }
    double min = min1(min1(x, y), z);
    double max = max1(max1(x, y), z);
    double average = min1(max1(x, y), z);
    x =min ;
    z = max;
    y = average;
    std::cout << min << " " << average << " " << max;
}
//TASKS B

void z1_b(int x, int y, int z)
{
    if (x <= y)
    {
        int swap1 = x;
        x = y;
        y = swap1;
    }
    if (y <= z)
    {
        int swap2 = y;
        y = z;
        z = swap2;
    }
    if (x <= y)
    {
        int swap3 = x;
        x = y;
        y = swap3;
    }
    std::cout << x << " " << y << " " << z;
}
void z2_b(int x, int y, int z)
{
    if (x > y)
    {
        int swap1 = x;
        x = y;
        y = swap1;
    }
    if (y > z)
    {
        int swap2 = y;
        y = z;
        z = swap2;
    }
    if (x > y)
    {
        int swap3 = x;
        x = y;
        y = swap3;
    }
    std::cout << x << " " << y << " " << z;
}
void z3_b(int x1, int x2, int x3, int x4)
{
    if (x1 > x2)
    {
        int swap1 = x1;
        x1 = x2;
        x2 = swap1;
    }
    if (x2 > x3)
    {
        int swap2 = x2;
        x2 = x3;
        x3 = swap2;
    }
    if (x1 > x2)
    {
        int swap1 = x1;
        x1 = x2;
        x2 = swap1;
    }
    if (x3 > x4)
    {
        int swap3 = x3;
        x3 = x4;
        x4 = swap3;
    }
    if (x2 > x3)
    {
        int swap2 = x2;
        x2 = x3;
        x3 = swap2;
    }
    if (x1 > x2)
    {
        int swap1 = x1;
        x1 = x2;
        x2 = swap1;
    }
    std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z4_b(int x1, int x2, int x3, int x4)
{
    if (x1 < x2)
    {
        int swap1 = x1;
        x1 = x2;
        x2 = swap1;
    }
    if (x2 < x3)
    {
        int swap2 = x2;
        x2 = x3;
        x3 = swap2;
    }
    if (x1 < x2)
    {
        int swap1 = x1;
        x1 = x2;
        x2 = swap1;
    }
    if (x3 < x4)
    {
        int swap3 = x3;
        x3 = x4;
        x4 = swap3;
    }
    if (x2 < x3)
    {
        int swap2 = x2;
        x2 = x3;
        x3 = swap2;
    }
    if (x1 < x2)
    {
        int swap1 = x1;
        x1 = x2;
        x2 = swap1;
    }
    std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z5_b(int x1, int x2, int x3, int x4)
{
    if (x2 > x3)
    {
        int swap1 = x2;
        x2 = x3;
        x3 = swap1;
    }
    if (x1 <= x2)
    {
        int swap2 = x1;
        x1 = x2;
        x2 = swap2;
    }
    if (x3 <= x4)
    {
        int swap3 = x3;
        x3 = x4;
        x4 = swap3;
    }
    std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z6_b(int x1, int x2, int x3, int x4)
{
    if (x2 < x3)
    {
        int swap1 = x2;
        x2 = x3;
        x3 = swap1;
    }
    if (x1 >= x2)
    {
        int swap2 = x1;
        x1 = x2;
        x2 = swap2;
    }
    if (x3 >= x4)
    {
        int swap3 = x3;
        x3 = x4;
        x4 = swap3;
    }
    std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z7_b(int x1, int x2, int x3, int x4)
{
    if (x1 <= x2)
    {
        int swap1 = x1;
        x1 = x2;
        x2 = swap1;
    }
    if (x2 <= x3)
    {
        int swap2 = x2;
        x2 = x3;
        x3 = swap2;
    }
    if (x1 <= x2)
    {
        int swap1 = x1;
        x1 = x2;
        x2 = swap1;
    }
    if (x3 <= x4)
    {
        int swap3 = x3;
        x3 = x4;
        x4 = swap3;
    }
    if (x2 <= x3)
    {
        int swap2 = x2;
        x2 = x3;
        x3 = swap2;
    }
    if (x1 <= x2)
    {
        int swap1 = x1;
        x1 = x2;
        x2 = swap1;
    }
    std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z8_b(int x1, int x2, int x3, int x4)
{
    if (x3 < x4)
    {
        int swap1 = x3;
        x3 = x4;
        x4 = swap1;
    }
    if (x2 < x3)
    {
        int swap2 = x2;
        x2 = x3;
        x3 = swap2;
    }
    if (x3 < x4)
    {
        int swap1 = x3;
        x3 = x4;
        x4 = swap1;
    }
    if (x1 > x2)
    {
        int swap3 = x1;
        x1 = x2;
        x2 = swap3;
    }
    std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z9_b(int x1, int x2, int x3, int x4)
{
    if (x1 < x2)
    {
        int swap1 = x1;
        x1 = x2;
        x2 = swap1;
    }
    if (x2 < x3)
    {
        int swap2 = x2;
        x2 = x3;
        x3 = swap2;
    }
    if (x1 < x2)
    {
        int swap1 = x1;
        x1 = x2;
        x2 = swap1;
    }
    if (x3 > x4)
    {
        int swap3 = x3;
        x3 = x4;
        x4 = swap3;
    }
    std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z10_b(int x1, int x2, int x3, int x4)
{
    if (x3 < x4)
    {
        int swap1 = x3;
        x3 = x4;
        x4 = swap1;
    }
    if (x2 < x3)
    {
        int swap2 = x2;
        x2 = x3;
        x3 = swap2;
    }
    if (x3 < x4)
    {
        int swap1 = x3;
        x3 = x4;
        x4 = swap1;
    }
    if (x1 > x2)
    {
        int swap3 = x1;
        x1 = x2;
        x2 = swap3;
    }
    std::cout << x1 << ' ' << x2 <<  ' ' << x3 << ' ' << x4;
}
void z11_b(int x1, int x2, int x3, int x4)
{
    if (x2 > x3)
    {
        int swap1 = x2;
        x2 = x3;
        x3 = swap1;
    }
    if (x1 <= x2)
    {
        int swap2 = x1;
        x1 = x2;
        x2 = swap2;
    }
    if

        (x3 <= x4)
    {
        int swap3 = x3;
        x3 = x4;
        x4 = swap3;
    }
    std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z12_b(int x1, int x2, int x3, int x4)
{
    if (x2 < x3)
    {
        int swap1 = x2;
        x2 = x3;
        x3 = swap1;
    }
    if (x1 >= x2)
    {
        int swap2 = x1;
        x1 = x2;
        x2 = swap2;
    }
    if (x3 >= x4)
    {
        int swap3 = x3;
        x3 = x4;
        x4 = swap3;
    }
    std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void exchange8(double x, double y, double z)
{
    if (x < y && y < z)
    {
        std::cout << x << " " << y << " " << z;
    }
    double min = min1(min1(x, y), z);
    double max = max1(max1(x, y), z);
    double average = min1(max1(x, y), z);
    z = min;
    x = max;
    y = average;
    std::cout << max << " " << average << " " << min;
}
int max9(int x1, int x2)
{
    if (x1 > x2)
    {
        return x1;
    }
    
    return x2;
}

int max9(int first, int second, int third, int fouth)
{
    int maxX = max9(second, first);
    int maxy = max9(third, fouth);

   return max9(maxX, maxy);
}
int main()
{

    max9(10, 12, 22, 24);
   //z1_b(9, 5, 7);
   //std::cout << min1(5,4,6) << std::endl;
   exchange8(10,8,11);
}
