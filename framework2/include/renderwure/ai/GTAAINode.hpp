#pragma once
#ifndef _GTAAINODE_HPP_
#define _GTAAINODE_HPP_
#include <glm/glm.hpp>
#include <cstdint>

struct GTAAINode
{
    enum NodeType {
        Vehicle,
        Pedestrian
    };

    enum {
        None = 0,
        External = 1, /// Node can connect to external nodes.
        CrossesRoad = 4 /// No documentation for other flags yet, but this is mentioned.
    };

    NodeType type;
    glm::vec3 position;
    uint32_t flags;

    int32_t nextIndex;
};

#endif