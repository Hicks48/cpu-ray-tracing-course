#ifndef RAY_H
#define RAY_H

#include <glm/vec3.hpp>

class Ray {
    public:
        Ray(const glm::vec3& origin, const glm::vec3& direction): orig(origin), dir(direction) {}
    
        glm::vec3 origin() const { return this->orig; }

        glm::vec3 direction() const { return this->dir; }

        glm::vec3 at(float t) const { return this->orig + t * this->dir; }
    
    private:
        glm::vec3 orig;
        glm::vec3 dir;
};

#endif