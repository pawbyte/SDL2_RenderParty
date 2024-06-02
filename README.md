# SDL2_RenderParty

![image](https://github.com/pawbyte/SDL2_RenderParty/blob/main/images/sdl2_renderparty_logo.png?raw=true)

A simple library of extending the current functionality of SDL2 without having to change your includes. Currently supporting RenderQuads, RenderPolygons and more! It's a party a SDL2 Render Party!

Example Project of adding more sides to a rotating polygon rendered drawn with a white color:


# As of V 1.1.3 and higher, SDL2_RenderParty is now a single header library!

What this means is when including in your projects include in in your .c or .cpp files instead of your .h files for enabling implementation.

## These two lines is all you need:

```c
#define SDL2_RENDERPARTY_IMPLEMENTATION //Allows the implementation of functions to be executed, withhout this line you may experience many compiler errors! 
#include "sdl2_renderparty.h" //Includes the SDL2_RenderParty single file library ( Written in C, compatabile with C++ ) 
```


## Screenshots: 
Rendered White Polygon with sides increasing:
![image](https://raw.githubusercontent.com/pawbyte/SDL2_Render_Party/main/examples/SDL2_Render_Party_White_Polygon_Test.gif)



Example Project Running on FreeBSD( Thanks high_on_tanor for testing):
![image](https://github.com/pawbyte/SDL2_RenderParty/blob/main/images/sdl2_renderparty_example_screenshot_freebsd.png)

Rendered Texture as polygon with sides increasing:
![image](https://github.com/pawbyte/SDL2_RenderParty/blob/main/examples/sdl2_render_party_mk_spinner_polygon.gif?raw=true)


## Functions:

**bool SDL2_RenderParty_Init**();  //optional   
  
**bool SDL2_RenderParty_Quit**(); //optional   
  
//Gets the Directional Length on the X Axis , used in other calls  
**float SDL2_RenderParty_LengthdirX( float length, float angle  );  
  
//Gets the Directional Length on the Y Axis , used in other calls   
**float SDL2_RenderParty_LengthdirY**( float length, float angle  );   
  
  
// Renders a texture or rotated rectangle based on 4 SDL_Vertices, you may toggle colors on or off and correct the inputted texture coordinates   
**bool SDL_RenderParty_Quad**( SDL_Renderer *renderer, SDL_Texture *tex, const SDL_Vertex * vertices, bool show_colors , bool update_tex_cords   );   
  

// Renders TriangleStrips based on the inputted SDL_Vertex vertices. You will need at least 3 vertices for this function.   
// tex can be left NULL to render colored TriangleStrips. If not left blank, please see the texture_effect which is based on the sdl_partyeffect enums   
**int SDL_RenderParty_Strips**(SDL_Renderer *renderer, SDL_Texture *tex, const SDL_Vertex * vertices, int num_vertices, bool is_closed , int texture_effect   );   
  
  
// Renders TriangleFans based on the inputted SDL_Vertex vertices. You will need at least 3 vertices for this function.   
// tex can be left NULL to render colored TriangleStrips. If not left blank, please see the texture_effect which is based on the sdl_partyeffect enums   
**int SDL_RenderParty_Fans**( SDL_Renderer *renderer, SDL_Texture *tex, const SDL_Vertex *vertices, int num_vertices, int texture_effect  );   
  
  
// Renders a Polygon based on the inputted SDL_Vertex vertices. You will need at least 3 vertices for this function.   
// tex can be left NULL to render colored TriangleFans. If not left blank, please see the texture_effect which is based on the sdl_partyeffect enums   
**bool SDL_RenderParty_Polygon**( SDL_Renderer * renderer, SDL_Texture * tex, SDL_Point pos, int shape_length , int point_count, SDL_Color * shape_colour, int alpha, float start_angle, int texture_effect  );   

  
