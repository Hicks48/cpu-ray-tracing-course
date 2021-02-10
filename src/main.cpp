#include "Ray.hpp"
#include "Image.hpp"
#include "Camera.hpp"

#include <iostream>
#include <glm/vec3.hpp>

int main() {
    Image image(400, 16.0f / 9.0f);
    image.writeHeader(std::cout);

    for (int h = image.height() - 1; h >= 0; --h) {
        std::cerr << "\r" << image.height() - h << "/" << image.height() << std::flush;
        for (int w = 0; w < image.width(); ++w) {
            image.writePixel(
                std::cout,
                glm::vec3(
                    float(w) / (image.width() - 1),
                    float(h) / (image.height() - 1),
                    0.25
                )
            );
        }
    }

    return 0;
}
