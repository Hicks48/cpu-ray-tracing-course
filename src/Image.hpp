#ifndef IMAGE_H
#define IMAGE_H

#include <iostream>

class Image {
    public:
        Image(int width, float aspectRatio): _width(width), _aspectRatio(aspectRatio) {}

        int width() const { return this->_width; }
        int height() const { return static_cast<int>(this->_width / this->_aspectRatio); }

        float aspectRatio() const { return this->_aspectRatio; }

        void writeHeader(std::ostream& out) {
            out << "P3" << std::endl;
            out << this->_width << " " << this->height() << std::endl;
            out << 255 << std::endl;
        }

        void writePixel(std::ostream& out, glm::vec3 color) {
            out << static_cast<int>(255.999 * color.x) << " "
                << static_cast<int>(255.999 * color.y) << " "
                << static_cast<int>(255.999 * color.z) << std::endl;
        }

    private:
        float _aspectRatio;
        int _width;
};

#endif