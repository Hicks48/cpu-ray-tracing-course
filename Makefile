BUILD_DIR := ./build
SRC_DIRS := ./src
EXT_DIR := ./external

$(BUILD_DIR)/render.ppm: $(BUILD_DIR)/ray-tracer
	./build/ray-tracer >> ./build/render.ppm

$(BUILD_DIR)/ray-tracer:
	mkdir -p ./build
	g++ ./src/main.cpp -I ./external/glm -I ./src -o ./build/ray-tracer

.PHONY: open
open:
	open -a Preview ./build/render.ppm

.PHONY: clean
clean:
	rm -r ./build
