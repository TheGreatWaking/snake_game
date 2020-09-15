#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "SDL.h"
#include <vector>

class Obstacle
{
public:
    Obstacle(int grid_width, int grid_height) : _grid_height(grid_height), _grid_width(grid_width) {}
    void PlaceObstacle();
    std::vector<SDL_Point> get_obstecle();
    bool ObstacleCell(int x, int y);
private:
    std::vector<SDL_Point> _obstacle_points;
    std::size_t _grid_width;
    std::size_t _grid_height;
};

#endif
