#pragma once

#include <glm/glm.hpp>

struct SAirfoil
{
	glm::vec2* m_airfoil_upper;
	glm::vec2* m_airfoil_lower;
	glm::vec2 m_chord;
	glm::vec2 m_location;
	float m_scale_factor;
	float m_attack_angle;
};

glm::vec2 g_airfoil_upper[] = {
	{ 0.0f, 0.0f } 
};

glm::vec2 g_airfoil_lower[] = {
	{ 0.0f, 0.0f }
};

SAirfoil g_airfoil_to_test{
	.m_airfoil_upper = g_airfoil_upper,
	.m_airfoil_lower = g_airfoil_lower,
	.m_chord = { 0.0f, 1.f },
	.m_location = { 0.1f, 0.0f },
	.m_scale_factor = 1.0f,
	.m_attack_angle = 0.f 
};

