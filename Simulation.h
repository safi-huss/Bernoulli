#pragma once

#include <glm/glm.hpp>

namespace Sim
{
	struct SRay {
		glm::vec2 m_ray_origin;
		glm::vec2 m_ray_normal;
	};

	struct SSegment {
		glm::vec2 m_seg_origin;
		glm::vec2 m_seg_vector;
	};

	glm::vec2 IntersectionRaySegment(SRay arg_ray, SSegment arg_seg);
	glm::vec2 IntersectionRayRay(SRay arg_ray1, SRay arg_ray2);
};