#pragma once

#include <SDL.h>
#include <vector>

#include "../../Engine/AssetsManager/AssetsManager.h"
#include "../../Engine/Scenes/SceneManager.h"
#include "FacesManager/FacesManager.h"
#include "DicesManager/DicesManager.h"

class Game
{
	private:
		bool is_running;
		bool debug;

		SDL_Window* window;
		SDL_Renderer* renderer;
		
		AssetsManager* assets_manager;
		SceneManager* scene_manager;
		FacesManager* faces_manager;
		DicesManager* dices_manager;

		void Initialize();
		void Setup();
		void ProcessInput();
		void Update();
		void Render();

	public:
		Game();
		~Game();

		void Run();
		void Destroy();
};