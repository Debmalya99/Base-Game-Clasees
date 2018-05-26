#ifndef _BGAME_
#define _BGAME_

#include <vector>
#include <string>


// Few Macros to be defined. Mainly error codes
#define ERROR_WINDOW_NOT_CREATED 0
#define ERROR_CONTEXT_NOT_CREATED 1
#define ERROR_RENDERER_NOT_CREATED 2
#define ERROR_ASSET_NOT_CREATED 4






struct Vector2f
{
	float x,y;
};

struct Vector3f
{
	float x,y,z;
};

struct Vector4f
{
	float x,y,z,w;
};



class b_Assetmanager
{
protected:
// previously I wanted to place a container here but now I think that should be done in the derived class
int iterator;
public:
	b_Assetmanager(){}
	virtual int add(std::string filename)=0;
	virtual void remove()=0;

};



class b_Game
{
protected:
	bool m_bRunning;
public:
	virtual void render()=0;
	virtual void update()=0;
	virtual void handleEvents()=0;
	bool running(){m_bRunning=true}
	virtual void init()=0;
	virtual void cleanup()=0;
};




#endif