#ifndef FONT_H
#define	FONT_H

#include <stdio.h>
#include <stdarg.h>
#include <cstring>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

namespace M7engine
{
	class Font
	{
	public:
		Font();
		virtual ~Font();

		bool loadFont(const char *filename, int size);
		void setFont(ALLEGRO_FONT *arg);
		ALLEGRO_FONT* getFont(){ return font; }

		void setColor(ALLEGRO_COLOR arg){ color = arg; }
		ALLEGRO_COLOR getColor(){ return color; }

		void setJustification(int arg){ justification = arg; }
		int getJustification(){ return justification; }

	private:
		ALLEGRO_FONT *font;
		ALLEGRO_COLOR color;
		int justification;
	};

	class FontManager
	{
	public:
		FontManager();
		virtual ~FontManager();

		bool init();

		void drawText(float x, float y, Font *font, char const *text);
		void drawTextF(float x, float y, Font *font, char const *text, ...);
	};
}
#endif
