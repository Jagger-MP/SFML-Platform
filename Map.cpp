#include "Map.h"

Map::Map()
{
	width = 0;
	height = 0;
}

Map::Map(unsigned int width, unsigned int height)
{
	for(unsigned int i {0}; i < width; i++)
	{
		map.push_back(std::vector<Block>);
		
		for(unsigned int j {0}; j < height; j++)
		{
			map[i].push_back(Bloc {});
		}
	}
	
	this->width = width;
	this->height = height;
}

Map::setSize(unsigned int wigth, unsigned int height)
{
	for(unsigned int i {0}; i < width; i++)
	{
		map.push_back(std::vector<Block>);
		
		for(unsigned int j {0}; j < height; j++)
		{
			map[i].push_back(Bloc {});
		}
	}
	
	this->width = width;
	this->height = height;
}

unsigned int Map::getWidth() const
{
	return width;
}

unsigned int Map::getHeight() const
{
	return height;
}

Block Map::getBlock(unsigned int x, unsigned int y) const
{
	if(x < width && y < height)
	{
		return map[x][y];
	}
	else
	{
		return Block {};
	}
}
