#include <iostream>
#include "obstacle.h"
#include "SDL.h"

void Obstacle::PlaceObstacle()
{

}

std::vector<SDL_Point> Obstacle::get_obstecle()
{
    return _obstacle_points;
}

bool Obstacle::ObstacleCell(int x, int y)
{
    for(auto const point : _obstacle_points)
    {
        
    }
}