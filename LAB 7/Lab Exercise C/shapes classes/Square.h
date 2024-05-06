#ifndef SQUARE_H
#define SQUARE_H

namespace Shapes{
    class Square{
        public:
        Square();
        Square(double newSideLenght);
        void setSideLength(double x);
        double getSideLength();
        ~Square();

        private:
        double sideLength;


    };
};
#endif