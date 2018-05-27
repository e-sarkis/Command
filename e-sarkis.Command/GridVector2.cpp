#include "GridVector2.h"


GridVector2::GridVector2(int p_x, int p_y) : x(p_x), y(p_y)
{ }

GridVector2::GridVector2(const GridVector2 &p_pointA, const GridVector2 &p_pointB)
{
	SetValue(p_pointA, p_pointB);
}

GridVector2::~GridVector2()
{ }

bool GridVector2::IsZero() const
{
	return (x == 0 && y == 0);
}

void GridVector2::SetValue(int p_x, int p_y)
{
	x = p_x;
	y = p_y;
}

void GridVector2::SetValue(const GridVector2 &p_other)
{
	x = p_other.x;
	y = p_other.y;
}

void GridVector2::SetValue(const GridVector2 &p_pointA, const GridVector2 &p_pointB)
{
	x = p_pointB.x - p_pointA.x;
	y = p_pointB.y - p_pointA.y;
}

void GridVector2::Add(const GridVector2 &p_other)
{
	x += p_other.x;
	y += p_other.y;
}

void GridVector2::Subtract(const GridVector2 &p_other)
{
	x -= p_other.x;
	y -= p_other.y;
}

GridVector2 GridVector2::operator+(const GridVector2 &p_other) const
{
	GridVector2 result(*this);
	result.Add(p_other);
	return result;
}

GridVector2 GridVector2::operator-(const GridVector2 &p_other) const
{
	GridVector2 result(*this);
	result.Subtract(p_other);
	return result;
}

GridVector2 GridVector2::operator*(int p_scale) const
{
	GridVector2 result(*this);
	result.x *= p_scale;
	result.y *= p_scale;
	return result;
}

GridVector2 GridVector2::operator/(int p_divisor) const
{
	GridVector2 result(*this);
	result.x /= p_divisor;
	result.y /= p_divisor;
	return result;
}

GridVector2 & GridVector2::operator+=(const GridVector2 &p_other)
{
	Add(p_other);
	return *this;
}

GridVector2 & GridVector2::operator-=(const GridVector2 &p_other)
{
	Subtract(p_other);
	return *this;
}

GridVector2 & GridVector2::operator*=(int p_scale)
{
	x *= p_scale;
	y *= p_scale;
	return *this;
}

GridVector2 GridVector2::operator-() const
{
	GridVector2 result;
	result.x = -x;
	result.y = -y;
	return result;
}