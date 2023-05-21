#include "Simulation.h"

namespace Sim {
	glm::vec2 IntersectionRaySegment(SRay arg_ray, SSegment arg_seg)
	{
		auto vec_seg_mornalized = glm::normalize(arg_seg.m_seg_vector);
		float dot_prod = glm::dot(arg_ray.m_ray_normal, vec_seg_mornalized);

		if (dot_prod > (1.0f - FLT_EPSILON)) return glm::vec2(INFINITY, INFINITY);

		
		return glm::vec2();
	}

	glm::vec2 IntersectionRayRay(SRay arg_ray1, SRay arg_ray2)
	{
		return glm::vec2();
	}
};