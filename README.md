# SDL2_RenderParty

![image](https://github.com/pawbyte/SDL2_RenderParty/blob/main/images/sdl2_renderparty_logo.png?raw=true)

A simple library of extending the current functionality of SDL2 without having to change your includes. Currently supporting RenderQuads, RenderPolygons and more! It's a party a SDL2 Render Party!

Example Project of adding more sides to a rotating polygon rendered drawn with a white color:

Rendered White Polygon with sides increasing:
![image](https://raw.githubusercontent.com/pawbyte/SDL2_Render_Party/main/examples/SDL2_Render_Party_White_Polygon_Test.gif)

Rendered Texture as polygon with sides increasing:
![image](https://github.com/pawbyte/SDL2_RenderParty/blob/main/examples/sdl2_render_party_mk_spinner_polygon.gif?raw=true)


Functions:

bool SDL2_RenderParty_Init(); //optional
bool SDL2_RenderParty_Quit(); //optional
float SDL2_RenderParty_LengthdirX( float length, float angle  ); 
//Gets the Directional Length on the X Axis , used in other calls
float SDL2_RenderParty_LengthdirY( float length, float angle  ); 
//Gets the Directional Length on the Y Axis , used in other calls

//Renders a texture or rotated rectangle based on 4 SDL_Vertices, you may toggle colors on or off and correct the inputted texture coordinates


bool SDL_RenderParty_Quad( SDL_Renderer *renderer, SDL_Texture *tex, const SDL_Vertex * vertices, bool show_colors = true, bool update_tex_cords = true  );

/*
Renders TriangleStrips based on the inputted SDL_Vertex vertices. You will need at least 3 vertices for this function. 
tex can be left NULL to render colored TriangleStrips. If not left blank, please see the texture_effect which is based on the sdl_partyeffect enums
*/


int SDL_RenderParty_Strips(SDL_Renderer *renderer, SDL_Texture *tex, const SDL_Vertex * vertices, int num_vertices, bool is_closed = false, int texture_effect = sdl_partyeffect_full  );

/*
Renders TriangleFans based on the inputted SDL_Vertex vertices. You will need at least 3 vertices for this function. 
tex can be left NULL to render colored TriangleStrips. If not left blank, please see the texture_effect which is based on the sdl_partyeffect enums
*/

int SDL_RenderParty_Fans( SDL_Renderer *renderer, SDL_Texture *tex, const SDL_Vertex *vertices, int num_vertices, int texture_effect = sdl_partyeffect_full );

/*
Renders a Polygon based on the inputted SDL_Vertex vertices. You will need at least 3 vertices for this function. 
tex can be left NULL to render colored TriangleFans. If not left blank, please see the texture_effect which is based on the sdl_partyeffect enums
*/

bool SDL_RenderParty_Polygon( SDL_Renderer * renderer, SDL_Texture * tex, SDL_Point pos, int shape_length , int point_count, SDL_Color * shape_colour, int alpha = 255, float start_angle = 0, int texture_effect  = sdl_partyeffect_full );
