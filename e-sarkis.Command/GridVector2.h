#pragma once

class GridVector2
{
public:
	GridVector2(int = 0, int = 0);

	// Constructs Vector2 as the directional vector between given points
	GridVector2(const GridVector2&, const GridVector2&);

	~GridVector2();

	int x, y;

	bool IsZero() const;

	void SetValue(int, int);
	void SetValue(const GridVector2&);
	void SetValue(const GridVector2&, const GridVector2&);
	void Add(const GridVector2&);
	void Subtract(const GridVector2&);

#pragma region Operator_Overloads
	GridVector2 operator+(const GridVector2&) const;
	GridVector2 operator-(const GridVector2&) const;
	GridVector2 operator*(int) const;
	GridVector2 operator/(int) const;

	GridVector2& operator+=(const GridVector2&);
	GridVector2& operator-=(const GridVector2&);
	GridVector2& operator*=(int);
	GridVector2 operator-() const;
#pragma endregion

};