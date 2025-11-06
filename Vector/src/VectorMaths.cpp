#include "VectorMaths.hpp"
#include "Vector.hpp"
#include <cmath>

static int a = 5;

inline const float& VecMath::dot(const Vector2f& a, const Vector2f& b)
{
	return a.x * b.x + a.y * b.y;
}

const Vector2f& VecMath::normalize(const Vector2f& a)
{
	if (a.x == 0 || a.y == 0) return Vector2f();
	float norm = sqrtf(a.x * a.x + a.y * a.y);
	return Vector2f(a.x / norm, a.y / norm);
}
