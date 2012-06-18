/*
    This file is part of Paje.

    Paje is free software: you can redistribute it and/or modify it
    under the terms of the GNU Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Paje is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Public License for more details.

    You should have received a copy of the GNU Public License
    along with Paje. If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __PAJE_COLOR_H
#define __PAJE_COLOR_H
#include "PajeObject.h"

class PajeColor : public PajeObject
{
public:
  float r;
  float g;
  float b;
  float a;
  PajeColor (float r, float g, float b, float a);
};

#endif
