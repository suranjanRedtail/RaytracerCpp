#pragma once
#include "general.h"

#include "ray.h"
#include "interval.h"
#include "aabb.h";

class material;

class hit_record {
public:
	point3 p;
	vec3 normal;	
	double t;
	double u, v;
	bool front_face;
	shared_ptr<material> mat;

	void set_face_normal(const ray& r, const vec3& out_normal)
	{
		front_face = dot(r.direction(), out_normal) < 0;
		normal = front_face ? out_normal : -out_normal;
	}
};

class hittable {
public:
	hittable() = default;
	virtual ~hittable() = default;	
	virtual bool hit(const ray& r, interval ray_t, hit_record& rec) const = 0;
	virtual aabb bounding_box() const = 0;
};
