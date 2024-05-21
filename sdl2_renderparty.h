/*
sdl_rederparty.h
This file is part of:
SDL2_RenderParty
https://www.pawbyte.com/sdl2_renderparty
Copyright (c) 2024 Nathan Hurde, Chase Lee.

Copyright (c) 2024 PawByte.
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the �Software�), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED �AS IS�, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

-SDL2_RenderParty <https://www.pawbyte.com/sdl2_renderparty>


*/

#ifndef sd2_renderparty_ex_h
#define sd2_renderparty_ex_h

#define SDL2_RENDERPARTY_VERSION_MAJOR 1
#define SDL2_RENDERPARTY_MINOR 1
#define SDL2_RENDERPARTY_PATCH 1

#include <stdbool.h>
#include "SDL2/SDL.h"

/*
Requires SDL_RenderGeometry, which was introduced in SDL 2.0.18

SDL_2.0.18 or higher is required!
*/

const int sdl_party_max_vertex_count = 999999;

extern bool SDL2_RenderParty_WasInitted;

//A giant Vertex list for polygon rendering. This number is rather huge, but if your game/app needs larger polygons just increase this constant...
extern SDL_Vertex SDL_RenderParty_Vertex_List[sdl_party_max_vertex_count];
extern bool SDL2_Party_WasInitted;

//  Effects for polygon rendering, some are experimental. Toggle to see which effect works best for your game/app.

enum
{
    sdl_partyeffect_full = 0,
    sdl_partyeffect_additive = 1,
    sdl_partyeffect_subtractive = 2,
    sdl_partyeffect_inverted =3,
    sdl_partyeffect_bottom_up = 4,
    sdl_partyeffect_full_inverted = 5,
    sdl_partyeffect_none = 6,
};



//  Math related variables

const float sdl_renderparty_math_pi = 3.14159265359;
const float sdl_renderparty_math_to_radians = 180.f/sdl_renderparty_math_pi;
const float sdl_renderparty_math_degrees_multiplier = 180.f/sdl_renderparty_math_pi;
const float sdl_renderparty_math_radians_multiplier = sdl_renderparty_math_pi/180.f;


//  Function Declarations

bool SDL2_RenderParty_Init();
bool SDL2_RenderParty_Quit();
float SDL2_RenderParty_LengthdirX( float length, float angle  );
float SDL2_RenderParty_LengthdirY( float length, float angle  );
bool SDL_RenderParty_Quad( SDL_Renderer *renderer, SDL_Texture *tex, const SDL_Vertex * vertices, bool show_colors = true, bool update_tex_cords = true  );
int SDL_RenderParty_Strips(SDL_Renderer *renderer, SDL_Texture *tex, const SDL_Vertex * vertices, int num_vertices, bool is_closed = false, int texture_effect = sdl_partyeffect_none, int start_vertice_pos = 0  );
int SDL_RenderParty_Fans( SDL_Renderer *renderer, SDL_Texture *tex, const SDL_Vertex * vertices, int num_vertices, int texture_effect = sdl_partyeffect_none, int start_vertice_pos = 0 );
bool SDL_RenderParty_Polygon( SDL_Renderer * renderer, SDL_Texture * tex, SDL_Point pos, int shape_length , int point_count, SDL_Color * shape_colour, int alpha = 255, float start_angle = 0, int texture_effect  = sdl_partyeffect_none, int start_vertice_pos = 0 );

#endif //sd2_renderparty_ex_h
