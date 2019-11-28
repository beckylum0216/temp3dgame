//
// Created by becky on 26/11/2019.
//

#include <cstdlib>
#include "Vector3.h"

Vector3::Vector3()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Vector3::Vector3(double inputX, double inputY, double inputZ)
{
    this->x = inputX;
    this->y = inputY;
    this->z = inputZ;
}

Vector3 Vector3::CrossProduct(Vector3 targetVector)
{
    Vector3 result;

    result.x = this->y * targetVector.z - this->z * targetVector.y;
    result.y = this->z * targetVector.x - this->x * targetVector.z;
    result.z = this->x * targetVector.y - this->y * targetVector.x;

    return result;

}

double Vector3::DotProduct(Vector3 targetVector)
{
    return this->x * targetVector.x + this->y * targetVector.y + this->z * targetVector.z;
}

double Vector3::Magnitude()
{
    return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
}

Vector3 Vector3::UnitVector()
{
    double magnitude = this->Magnitude();
    return Vector3(this->x / magnitude, this->y / magnitude, this->z / magnitude);
}

Vector3 Vector3::MultiplyScalar(double scalarInput)
{
    return Vector3(this->x * scalarInput, this->y * scalarInput, this->z * scalarInput);
}

Vector3 Vector3::operator+(Vector3 rhs)
{
    return Vector3(this->x + rhs.x, this->y + rhs.y, this->z + rhs.z);
}

Vector3 Vector3::operator-(Vector3 rhs)
{
    return Vector3(this->x - rhs.x, this->y - rhs.y, this->z -rhs.z);
}

double Vector3::ProjectionScalar(Vector3 targetVector)
{
    double temp = DotProduct(targetVector);
    return temp / (this->Magnitude() * this->Magnitude());
}

// https://math.oregonstate.edu/home/programs/undergrad/CalculusQuestStudyGuides/vcalc/dotprod/dotprod.html
Vector3 Vector3::Projection(Vector3 targetVector)
{
    return this->MultiplyScalar(ProjectionScalar(targetVector)) ;
}

