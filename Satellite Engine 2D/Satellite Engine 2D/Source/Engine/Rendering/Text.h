#pragma once

#include <string>
#include <glm/glm.hpp>

#include "../AssetsManager/AssetsManager.h"

class Text
{
	private:
		glm::vec2 position;
		glm::vec2 scale;
		std::string text;
		std::string asset_id;
		SDL_Color color;
		TTF_Font* font;

	public:
		Text(glm::vec2 position, glm::vec2 scale, const std::string& text, const std::string& asset_id,
			AssetsManager* assets_manager, SDL_Color color = { 255, 255, 255, 255 });

		void SetText(std::string new_text);
		void SetPosition(glm::vec2 new_position);
		void SetScale(glm::vec2 new_scale);

		void Render(SDL_Renderer* renderer);
};