#ifndef BOX_HPP_INCLUDED
#define BOX_HPP_INCLUDED

class Box
{
public:
    Box(){
        Height = 0;
        Width = 0;
        Length = 0;
    }
    void setHeight(double height);
    void setWidth(double width);
    void setLength(double length);
    double getVolume();
    double getSurfaceArea();

private:
    double Length;
    double Width;
    double Height;
};


#endif //
