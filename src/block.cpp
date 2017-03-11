Block :: setiD(int newiD)
{
    iD = newiD;
    sprite = getSprite(iD);
}

Block :: ~Block()
{
    status = false;
}


void Block :: Block()
{
    collision = false;
    status = true;
    damages = 100;
    iD = 0;    
}

void Block :: getDammages(int dammage) const
{
        dammages -= dammage;
        if( dammages <= 0)
        {
            status = false;
        }
}

void Block :: void setParametter(int thisWide, int thisHeight,bool destructible,bool collisionnable)
{
    wide = thisWide;
    height = thisHeight;
    isDestructible = destructibl;
    collision = collisionnable;
    
}

bool Block :: getStatus() const
{
    return status;
}