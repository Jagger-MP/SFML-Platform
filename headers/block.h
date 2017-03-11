enum ID {
Air = 0,
Water = 38,
Ground = 60,
TreeLog = 1,
TreeLeave = 9,
Body = 26,
Snow = 95,
Lava = 113
}

class Block 
{
    
    private :
        int iD;
        bool collision;
        int wide;
        int height;
        bool isDestructible;
        bool status;
        int damages;
        
    
        
    public :
        Block();
        bool getStatus() const;
        void setiD(int newiD);
        void getDammages(int damage) const;
        void setParametter(int wide, int height,bool destructible,bool collisionnable);
        
    
}