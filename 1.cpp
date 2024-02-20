#include <iostream>
#include <windows.h>


class Point {
        private:
            int x, y;
        public:
            void set(int x_, int y_) {
                x = x_;
                y = y_;
            }

            int getx() {
                return x;
            }

            int gety() {
                return y;
            }

            // ��������� �� 㬮�砭��
            Point() {
                std::cout << "��������� �� 㬮�砭��" << std::endl;
            }

            // ��������� ���樠����樨 x � y
            Point(int x_, int y_) {
                std::cout << "��������� ���樠����樨" << std::endl;
                x = x_;
                y = y_;
            }

            Point operator+(Point &p) {
                Point result;
                result.x = this-> x + p.x;
                result.y = this-> y + p.y;

                return result;
            }

            Point operator-(Point p) {
                Point result;
                result.x = this-> x - p.x;
                result.y = this-> y - p.y;

                return result;
            }

            Point operator*(int c) {
                Point result;
                result.x = this-> x * c;
                result.y = this-> y * c;

                return result;
            }
};


int main(void) {
    SetConsoleCP(866);
    Point a(1, 1), b(2, 2);

    Point c = a + b;
    std::cout << "c:" << c.getx() << ", " << c.getx() << "\nb:" << b.getx() << ", " << b.getx() << "\na:" << a.getx() << ", " << a.getx() << std::endl << std::endl;

    c = a - b;
    std::cout << "c:" << c.getx() << ", " << c.getx() << "\nb:" << b.getx() << ", " << b.getx() << "\na:" << a.getx() << ", " << a.getx() << std::endl << std::endl;

    c = a * 10;
    std::cout << "c:" << c.getx() << ", " << c.getx() << "\nb:" << b.getx() << ", " << b.getx() << "\na:" << a.getx() << ", " << a.getx() << std::endl << std::endl;

    return 0;
}