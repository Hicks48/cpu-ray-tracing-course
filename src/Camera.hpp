#ifndef CAMERA_H
#define CAMERA_H

#include <glm/vec3.hpp>

class Camera {
    public:
        Camera() {}
    private:
        glm::vec3 _origin;
        float _focalLength;
};

#endif
