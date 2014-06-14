/*
* Copyright 2014 David Houchin
* This file is part of m7engine, which is free software you probably
* don't even want.. It is made available to you under the terms of
* the GNU General Public License as published by the Free Software Foundation.
* For more information, see COPYING.
*/

#ifndef CONFIGREADER_H
#define CONFIGREADER_H

#include <stdio.h>
#include <cstring>
#include <string>
#include <allegro5/allegro.h>
#include "Logger.h"

namespace M7engine
{
class ConfigReader
{
public:
	ConfigReader();
	virtual ~ConfigReader();

	bool loadConfig(const char *filename);

	int getInt(const char *section, const char *key);
	bool getBool(const char *section, const char *key);
	const char* getChar(const char *section, const char *key);

private:
	ALLEGRO_CONFIG* engineConfig;
};
};

#endif