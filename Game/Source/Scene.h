#ifndef __SCENE_H__
#define __SCENE_H__

#include "Module.h"
#include "Player.h"
#include "Item.h"

struct SDL_Texture;

class Scene : public Module
{
public:

	Scene();

	// Destructor
	virtual ~Scene();

	// Called before render is available
	bool Awake(pugi::xml_node& config);

	// Called before the first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called each loop iteration
	bool Update(float dt);

	// Called before all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();

public:

	//L02: DONE 3: Declare a Player attribute 
	Player* player;

	//A que distancia del borde se empieza a mover la camara con el player
	int cameraMargin = 4;

	//Limites donde la camara dejara de moverse por salirse del mapa
	int maxCameraPosLeft;
	int maxCameraPosRigth;

private:
	SDL_Texture* img;

};

#endif // __SCENE_H__