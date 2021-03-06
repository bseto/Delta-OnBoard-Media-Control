#include "SDL.h"
#include <vector>


int main() {

    SDL SDLObject;

    if( !SDLObject.init_SDL() ) 
    {
        printf( "Failed to initialize!\n" );
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while( !quit )
    {
        //Handle events on queue
        while( SDL_PollEvent( &e ) != 0 )
        {
            //User requests quit
            if( e.type == SDL_QUIT )
            {
                quit = true;
            }
        } 
        
        //Clear screen
        SDL_RenderClear(SDLObject.get_Renderer());

        //Render textures
        //SDL_RenderCopy(SDLObject.get_Renderer(), texture.display(), NULL, NULL);

        //Update screen
        SDL_RenderPresent(SDLObject.get_Renderer());
    }

    //Free resources and close SDL
    SDLObject.close();

    return 0;
}


//Will be used to initialize all objects and to get them to listen to each other. 
int init() {


    return 0;
}





