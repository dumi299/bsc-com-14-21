#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace Shapes{
    class Triangle{
        public:
        Triangle();
        Triangle(double newBase, double newHeight);
        
        void setBase(double w);
        double getBase();
        
        void setHeight(double z);
        double getHeight();

        ~Triangle();

        private:
        double Base;
        double Height;

    };
};
#endif