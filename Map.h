#ifndef MAP_H
#define MAP_H

#include <vector>

#include "Block.h"

class Map
{
	
public:
	
	Map();
	Map(unsigned int, unsigned int);
	
	void setSize(unsigned int, unsigned int); // just for maps with a size of 0 * 0
	
	unsigned int getWidth() const;
	unsigned int getHeight() const;
	Block getBlock(unsigned int,unsigned int) const;
	
private:
	
	std::vector<std::vector<Block>> map;
	
	unsigned int width;
	unsigned int height;
	
};

#endif