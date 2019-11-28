//
// Created by becky on 26/11/2019.
//

#ifndef TEMPPROJECT_VECTOR3_H
#define TEMPPROJECT_VECTOR3_H

namespace LITD
{
    class Vector3;
}

class Vector3
{
    public:
        double x;
        double y;
        double z;
        Vector3();
        Vector3(double inputX, double inputY, double inputZ);
        double  DotProduct(Vector3 targetVector);
        Vector3 CrossProduct(Vector3 targetVector);
        Vector3 UnitVector();
        double Magnitude();
        double ProjectionScalar(Vector3 targetVector);
        Vector3 Projection(Vector3 targetVector);
        Vector3 operator +(Vector3 rhs);
        Vector3 operator -(Vector3 rhs);
        Vector3 MultiplyScalar(double scalarInput);


    private:

};


#endif //TEMPPROJECT_VECTOR3_H
