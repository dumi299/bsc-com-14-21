#ifndef CIRCLE_H
#define CIRCLE_H

namespace Shapes{
    class Circle{
        public:
            Circle();
            Circle(double newRadius);
            void setRadius(double y);
            double getRadius();
            ~Circle();

        private:
            double radius;


    };
};
#endif