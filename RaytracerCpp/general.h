#pragma once

#include <cmath>
#include <limits>
#include <memory>


using std::shared_ptr;
using std::make_shared;
using std::sqrt;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

#include "ray.h"
#include "vec3.h"
#include "interval.h"
#include "color.h"
#include "mat3.h"

inline double degree_to_radian(double degree)
{
	return degree * pi / 180;
}

inline int random_int(int a, int b) {
	return static_cast<int>(random_double(a, b + 1));
}



