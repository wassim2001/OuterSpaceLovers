#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>



int main (int args,char* argc[])
{
int hight = 624;
int width = 957;

int continuerintro = 1;

TTF_Font *font = NULL;
SDL_Surface *imageIntro = IMG_Load("images/intro.png");
SDL_Surface* screen = NULL;
SDL_Surface* image = NULL;
SDL_Surface* image1 = NULL;
SDL_Surface* image2 = NULL;
SDL_Surface* back = NULL;
SDL_Surface* stings = NULL;
SDL_Surface* fullscreen = NULL;
SDL_Surface* stingsblack = NULL;
SDL_Surface* settingsb = NULL;
SDL_Surface* quit = NULL;
SDL_Surface* quit1black = NULL;
SDL_Surface* fullscreen1 = NULL;
SDL_Surface* imageblack = NULL;
SDL_Surface* gameback = NULL;
SDL_Surface* home = NULL;
SDL_Surface* ruler = NULL;
SDL_Surface* button = NULL;
SDL_Surface* ruler1 = NULL;
SDL_Surface* button1 = NULL;

SDL_Surface* musicimage= NULL;
SDL_Surface* soundimage=NULL;
SDL_Surface* r1 = NULL;
SDL_Surface* r2 = NULL;
SDL_Surface* r3 = NULL;
SDL_Surface* rback = NULL;
SDL_Surface* optemizedimage = NULL;
SDL_Surface* optemizedimage1 = NULL;
SDL_Surface* optemizedfullscreen = NULL;
SDL_Surface* optemizedback = NULL;
SDL_Surface* optemizedstings = NULL;
SDL_Surface* optemizedfullscreen1 = NULL;
SDL_Surface* optemizedquit = NULL;
SDL_Surface* optemizedquitblack = NULL;

SDL_Surface* optemizedimageblack = NULL;

SDL_Surface* optemizedstingsblack = NULL;
SDL_Surface* optemizedstingsb = NULL;
SDL_Surface* optemizedmusicimage =NULL;
SDL_Surface* optemizedsoundimage = NULL;
SDL_Surface* optemizedhome = NULL;
SDL_Surface* optemizedruler = NULL;
SDL_Surface* optemizedruler1 = NULL;
SDL_Surface* optemizedbutton1 = NULL;
SDL_Surface* optemizedbutton = NULL;
SDL_Surface* optemizedgameback=NULL;

SDL_Surface* optemizedback3=NULL;
SDL_Surface* optemizedresizeback3=NULL;
SDL_Surface* optemizedresizeback2=NULL;
SDL_Surface* optemizedresizeback1=NULL;
SDL_Surface* optemizedrback =NULL;

SDL_Event e;

Mix_Music* music = NULL;
Mix_Chunk* sound = NULL;
//image position
SDL_Rect position;
position.x = 390;
position.y = 250;

//image1 position
SDL_Rect scr;
scr.x = 37;
scr.y = 22;
scr.w = 150;
scr.h = 67;
SDL_Rect positionDuIntro;
  positionDuIntro.x=220;
  positionDuIntro.y=200;
SDL_Rect positionquit;
positionquit.x = 390;
positionquit.y = 390;

//destination position pause
SDL_Rect positionstings;
positionstings.x=390;
positionstings.y = 320;

//position settings background
SDL_Rect posstingsback ;
posstingsback.x = width/4.777;
posstingsback.y = 55;
//position home button
SDL_Rect poshome;
poshome.x = 210;
poshome.y = 65;
//
SDL_Rect posmusic;
posmusic.x =288;
posmusic.y =230;
//
SDL_Rect posruler;
posruler.x =350;
posruler.y =245;
//
SDL_Rect posbutton;
posbutton.x=390;
posbutton.y=237;
//
SDL_Rect posbutton1;
posbutton1.x=390;
posbutton1.y=339;
//
SDL_Rect posruler1;
posruler1.x=350;
posruler1.y=347;
//
SDL_Rect possound;
possound.x=288;
possound.y=330;
//
SDL_Rect posfull;
posfull.x=700;
posfull.y=560;



//
SDL_Rect postxt={250,160};

SDL_Color textColor = { 0, 0, 0};


SDL_Init( SDL_INIT_EVERYTHING );
Mix_OpenAudio( 22050, MIX_DEFAULT_FORMAT, 2, 0 );
TTF_Init();
SDL_Surface *intro = SDL_SetVideoMode(960, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
screen = SDL_SetVideoMode(width,hight,32,SDL_HWSURFACE );
//play 1
image = IMG_Load("images/play1.png");
imageblack = IMG_Load("images/p2.png");
//background
back =IMG_Load("images/background.png");

//settings 1
stings = IMG_Load("images/settings1.png");
stingsblack = IMG_Load("images/o2.png");

sound = Mix_LoadWAV("son1.wav");
music = Mix_LoadMUS("music.mp3");
//quit images
quit = IMG_Load("images/exit1.png");
quit1black = IMG_Load("images/e2.png");
//fullscreen
fullscreen =IMG_Load("images/fullscreen.png");
fullscreen1 =IMG_Load("images/fullscreen2.png");


//settings background
settingsb= IMG_Load("images/backsettings.png");
home = IMG_Load("images/backhome.png");
ruler = IMG_Load("images/barre.png");
ruler1 = IMG_Load("images/barre.png");
button = IMG_Load("images/bouton.png");
button1 = IMG_Load("images/bouton.png");
musicimage = IMG_Load("images/music.png");
soundimage = IMG_Load("images/soundtruck.png");
//game background
gameback= IMG_Load("images/backgame.png");

font = TTF_OpenFont( "Hello Jones Free Trial.otf", 60);

//play button 1
optemizedimage = SDL_DisplayFormat( image );
optemizedimageblack = SDL_DisplayFormat( imageblack );

// background
optemizedback = SDL_DisplayFormat( back );

// settings
optemizedstings = SDL_DisplayFormat( stings );
optemizedstingsblack = SDL_DisplayFormat( stingsblack );

// quit
optemizedquit = SDL_DisplayFormat( quit );
optemizedquitblack = SDL_DisplayFormat( quit1black );

//sound images
optemizedimage = SDL_DisplayFormat( image );
optemizedimageblack = SDL_DisplayFormat( imageblack );

//settings background
optemizedstingsb = SDL_DisplayFormat( settingsb );
optemizedhome = SDL_DisplayFormat( home );
optemizedmusicimage = SDL_DisplayFormat( musicimage );
optemizedsoundimage = SDL_DisplayFormat( soundimage );
//sound button
optemizedruler = SDL_DisplayFormat(ruler);
optemizedbutton = SDL_DisplayFormat(button);
optemizedruler1 = SDL_DisplayFormat(ruler1);
optemizedbutton1 = SDL_DisplayFormat(button1);
//fullscreen
optemizedfullscreen = SDL_DisplayFormat( fullscreen );
optemizedfullscreen1 = SDL_DisplayFormat( fullscreen1 );
//game background
optemizedgameback=SDL_DisplayFormat( gameback );

SDL_Surface *message = NULL;



SDL_WM_SetCaption( "CrewMates", NULL );

message = TTF_RenderText_Solid( font, "OUTERSPACE LOVERS", textColor );

SDL_FreeSurface(image);
SDL_FreeSurface(back);
SDL_FreeSurface(rback);
SDL_FreeSurface(stings);
SDL_FreeSurface(stingsblack);
SDL_FreeSurface(quit);
SDL_FreeSurface(quit1black);
SDL_FreeSurface(imageblack);
SDL_FreeSurface(settingsb);
SDL_FreeSurface(home);
SDL_FreeSurface(ruler);
SDL_FreeSurface(button);
SDL_FreeSurface(ruler1);
SDL_FreeSurface(button1);
SDL_FreeSurface(fullscreen);
SDL_FreeSurface(fullscreen1);



int quitgame = 0,d=1,showfullscreenbutton=0,f=0,showgame=0;
int x =0,y=0,x1=0,y1=0,x2=0,y2=0;
int i=0,show =0,showpause = 0,showquit =0,showblack = 0,showsettings =0,showsettingsback=0,showbutton=0,showbutton1=0,k=0,showbuttonstings =0,showbuttonplay=0,showbuttonquit=0;
Mix_PlayMusic(music, -1);

while(continuerintro)
{    
     SDL_FillRect(intro, NULL, SDL_MapRGB(intro->format, 75, 25, 150));
     SDL_BlitSurface(imageIntro, NULL, intro, &positionDuIntro);
     SDL_Flip(intro);
     SDL_Delay(4000);
     continuerintro = 0;

}


	while(quitgame == 0)
	{
         SDL_BlitSurface(optemizedback,NULL,screen,NULL);
        

        if(showbuttonplay ==0)
        {
            SDL_BlitSurface(optemizedimage,NULL,screen,&position);
        }
        if(showbuttonstings == 0)
        {
            SDL_BlitSurface(optemizedstings,NULL,screen,&positionstings);
        }
        if(showbuttonquit == 0)
        {
            SDL_BlitSurface(optemizedquit,NULL,screen,&positionquit);
        }
        SDL_BlitSurface(message,NULL,screen,&postxt);
        
if(SDL_PollEvent(&e) != 0)
	{
	if(e.type == SDL_QUIT)
		{
			quitgame = 1;
		}
			
	if( e.type == SDL_MOUSEMOTION )
    {
        //Get the mouse offsets
        x = e.motion.x;
        y = e.motion.y;

        if( ( x > position.x ) && ( x < position.x + position.w ) && ( y > position.y ) && ( y < position.y + position.h )  && (showsettingsback ==0))
        {
            
            showbuttonplay = 1;
            
        }
        else
            if( ( x > positionstings.x ) && ( x < positionstings.x + positionstings.w  ) && ( y > positionstings.y ) && ( y < positionstings.y + positionstings.h ) && (showsettingsback ==0))
            {
               
            showbuttonstings = 1;
            }
        else
            if(( x > positionquit.x ) && ( x < positionquit.x + positionquit.w ) && ( y > positionquit.y ) && ( y < positionquit.y + positionquit.h )&& (showsettingsback ==0))
            {
                
                showbuttonquit =1;
            }
        //If not
        else
        {
           
           showbuttonplay =0;
           showbuttonstings = 0;
           showbuttonquit =0;
        }
    }
    if( e.type == SDL_MOUSEBUTTONDOWN )
    {
        //If the left mouse button was pressed
        if( e.button.button == SDL_BUTTON_LEFT )
        {
            //Get the mouse offsets
            x1 = e.button.x;
            y1 = e.button.y;


            //If the mouse is over the button
            if( ( x1 > position.x ) && ( x1 < position.x + position.w ) && ( y1 > position.y ) && ( y1 < position.y + position.h  ) && (showsettingsback ==0))
            {
                 Mix_VolumeChunk(sound,128);
                 Mix_PlayChannel(-1,sound, 0);

            }
            
            else
            	if( ( x1 > positionstings.x ) && ( x1 < positionstings.x + positionstings.w  ) && ( y1 > positionstings.y ) && ( y1 < positionstings.y + positionstings.h ) && (showsettingsback ==0))
            {
                
                Mix_PlayChannel(-1,sound, 0);   
            }
            else

                if(( x1 > positionquit.x ) && ( x1 < positionquit.x + positionquit.w ) && ( y1 > positionquit.y ) && ( y1 < positionquit.y + positionquit.h )&& (showsettingsback ==0))
                {
                   Mix_PlayChannel(-1,sound, 0);

                }
            if(( x1 > poshome.x ) && ( x1 < poshome.x + poshome.w ) && ( y1 > poshome.y ) && ( y1 < poshome.y + poshome.h ) && (showsettingsback ==1))
            {
                showsettingsback=0;
            }
            
        
            if(( x1 > posbutton.x ) && ( x1 < posbutton.x + posbutton.w ) && ( y1 > posbutton.y ) && ( y1 < posbutton.y + posbutton.h ) && (showsettingsback ==1))
            {
                    showbutton=1;
            }
            if(( x1 > posbutton1.x ) && ( x1 < posbutton1.x + posbutton1.w ) && ( y1 > posbutton1.y ) && ( y1 < posbutton1.y + posbutton1.h ) && (showsettingsback ==1))
            {
                    showbutton1=1;
            }
            
            

        
        }
    }
    if( e.type == SDL_MOUSEBUTTONUP )
    {
        //If the left mouse button was released
        if( e.button.button == SDL_BUTTON_LEFT )
        {
            //Get the mouse offsets
            x2 = e.button.x;
            y2 = e.button.y;

            
            if( ( x2 > positionstings.x ) && ( x2 < positionstings.x + positionstings.w ) && ( y2 > positionstings.y ) && ( y2 < positionstings.y + positionstings.h )&& (showsettingsback ==0))
            {
                //show settings background
                showsettingsback = 1;

            }
            else
                if(( x2 > positionquit.x ) && ( x2 < positionquit.x + positionquit.w ) && ( y2 > positionquit.y ) && ( y2 < positionquit.y + positionquit.h ) && (showsettingsback ==0))
                {
                    quitgame = 1;
                }
                else
                    if((x2 > posfull.x) && (x2 < posfull.x + posfull.w ) && (y2 > posfull.y ) && (y2 < posfull.y + posfull.h) && (showsettingsback ==1) )
                {
                    f++;
                    if(f==1)
                    {
                        screen = SDL_SetVideoMode(width,hight,32,SDL_HWSURFACE |  SDL_RESIZABLE | SDL_FULLSCREEN );
                       showfullscreenbutton=1;
                   }
                    if(f==2)
                    {
                       showfullscreenbutton=0;
                       screen = SDL_SetVideoMode(width,hight,32,SDL_HWSURFACE  );
                       f=0;
                    }
                    

                }
            else
            	if(( x2 > posbutton.x ) && ( x2 < posbutton.x + posbutton.w ) && ( y2 > posbutton.y ) && ( y2 < posbutton.y + posbutton.h ) )
            {
            	
                showbutton=0;
            }
	else
		if( ( x2 > position.x ) && ( x2 < position.x + position.w ) && ( y2 > position.y ) && ( y2 < position.y + position.h  ))
			showgame=1;
            else
                {

                    
                    showbutton=0;
                    showbutton1=0;
                }

        }

    }
    if(e.type == SDL_KEYDOWN)
    	{
    		if(e.key.keysym.sym == SDLK_UP)
    		{
    			k++;
    			if(k>2)
    			{
    				k=2;
    			}
    			if(k==1)
    			{
    				showbuttonstings =1;
    				showbuttonquit=0;
    			}
    			
    			if(k==2)
    				{

    					showbuttonstings =0;
    					showbuttonplay=1;
    				}

    			
    		}
    		if(e.key.keysym.sym == SDLK_DOWN)
    		{
    			k--;
    			if(k<0)
    			{
    				k=0;
    			}
    			if(k==0)
    			{
    				showbuttonstings =0;
    				showbuttonquit=1;
    			}
    			if(k==1)
    			{
    				showbuttonplay = 0;
    				showbuttonstings =1;
    				
    			}
    		}
            if(e.key.keysym.sym == SDLK_KP_ENTER )
            {
                if(k==0)
                {
                    quitgame =1;
                }
                if(k==1)
                {
                    showsettingsback=1;
                }
                if(k==2)
                    {
                         showgame=1;
                    }

            }
    		if(e.key.keysym.sym == SDLK_p)            
                showgame=1;
            if(e.key.keysym.sym==SDLK_s)
                showsettingsback=1;
            if(e.key.keysym.sym== SDLK_ESCAPE)
            {
               showgame=0;
               showsettingsback=0;
            }
            if(e.key.keysym.sym == SDLK_q)
            {
                showbuttonquit=1;
                quitgame = 1;
            }



        }
    	
	}
		if(showbuttonquit==1)
		{
			SDL_BlitSurface(optemizedquitblack,NULL,screen,&positionquit);
		}
		if(showbuttonplay==1)
		{
			SDL_BlitSurface(optemizedimageblack,NULL,screen,&position);
		}
		if(showbuttonstings ==1)
		{
			SDL_BlitSurface(optemizedstingsblack,NULL,screen,&positionstings);
		}
        if(showsettingsback==1)
        {
        	

            SDL_BlitSurface(optemizedstingsb,NULL,screen,&posstingsback);
            SDL_BlitSurface(optemizedhome,NULL,screen,&poshome);
            SDL_BlitSurface(optemizedmusicimage,NULL,screen,&posmusic);
            SDL_BlitSurface(optemizedsoundimage,NULL,screen,&possound);
            SDL_BlitSurface(optemizedruler,NULL,screen,&posruler);
            SDL_BlitSurface(optemizedbutton,NULL,screen,&posbutton);
            SDL_BlitSurface(optemizedruler1,NULL,screen,&posruler1);
            SDL_BlitSurface(optemizedbutton1,NULL,screen,&posbutton1);
            SDL_BlitSurface(optemizedfullscreen1,NULL,screen,&posfull);
        }
       
        if(showfullscreenbutton==1)
        {
            SDL_BlitSurface(optemizedfullscreen,NULL,screen,&posfull);
        }
        if(showgame==1)
        {
            SDL_BlitSurface(optemizedgameback,NULL,screen,NULL);
        }
        
        if(showbutton==1)
        {
        	if(( x > posruler.x-1 ) && ( x < posruler.x + posruler.w -6) )
        	{
        		if(posbutton.x == posruler.x +0)
        		{
        			Mix_VolumeMusic(0);
        		}
        		else
        			if(posbutton.x == posruler.x +10)
        		{
        			Mix_VolumeMusic(5);
        		}
        		else
        			if(posbutton.x == posruler.x +20)
        		{
        			Mix_VolumeMusic(10);
        		}
        		else
        			if(posbutton.x == posruler.x +30)
        		{
        			Mix_VolumeMusic(15);
        		}
        		else
        			if(posbutton.x == posruler.x +40)
        		{
        			Mix_VolumeMusic(20);
        		}
        		else
        			if(posbutton.x == posruler.x +50)
        		{
        			Mix_VolumeMusic(25);
        		}
        		else
        			if(posbutton.x == posruler.x +60)
        		{
        			Mix_VolumeMusic(30);
        		}
        		else
        			if(posbutton.x == posruler.x +70)
        		{
        			Mix_VolumeMusic(35);
        		}
        		else
        			if(posbutton.x == posruler.x +80)
        		{
        			Mix_VolumeMusic(40);
        		}
        		else
        			if(posbutton.x == posruler.x +90)
        		{
        			Mix_VolumeMusic(45);
        		}
        		else
        			if(posbutton.x == posruler.x +100)
        		{
        			Mix_VolumeMusic(50);
        		}
        		else
        			if(posbutton.x == posruler.x +120)
        		{
        			Mix_VolumeMusic(55);
        		}
        		else
        			if(posbutton.x == posruler.x +150)
        		{
        			Mix_VolumeMusic(60);
        		}
        		else
        			if(posbutton.x == posruler.x +170)
        		{
        			Mix_VolumeMusic(65);
        		}
        		else
        			if(posbutton.x == posruler.x +190)
        		{
        			Mix_VolumeMusic(70);
        		}
        		else
        			if(posbutton.x == posruler.x +210)
        		{
        			Mix_VolumeMusic(75);
        		}
        		else
        			if(posbutton.x == posruler.x +230)
        		{
        			Mix_VolumeMusic(80);
        		}
        		else
        			if(posbutton.x == posruler.x +260)
        		{
        			Mix_VolumeMusic(85);
        		}
        		else
        			if(posbutton.x == posruler.x +290)
        		{
        			Mix_VolumeMusic(90);
        		}
        		else
        			if(posbutton.x == posruler.x +320)
        		{
        			Mix_VolumeMusic(128);
        		}
        		posbutton.x = x;
        	}
        	
        }
        else
        if(showbutton1==1)
        {
        	if(( x > posruler1.x-1 ) && ( x < posruler1.x + posruler1.w -6) )
        	{
        		if(posbutton1.x == posruler1.x +0)
        		{
        			Mix_VolumeChunk(sound,0);
        			Mix_PlayChannel(-1,sound, 0);

        		}
        		else
        			if(posbutton1.x == posruler1.x +10)
        		{
        			Mix_VolumeChunk(sound,5);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +20)
        		{
        			Mix_VolumeChunk(sound,10);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +30)
        		{
        			Mix_VolumeChunk(sound,15);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +40)
        		{
        			Mix_VolumeChunk(sound,20);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +50)
        		{
        			Mix_VolumeChunk(sound,25);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +60)
        		{
        			Mix_VolumeChunk(sound,30);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +70)
        		{
        			Mix_VolumeChunk(sound,35);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +80)
        		{
        			Mix_VolumeChunk(sound,40);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +90)
        		{
        			Mix_VolumeChunk(sound,45);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +100)
        		{
        			Mix_VolumeChunk(sound,50);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +110)
        		{
        			Mix_VolumeChunk(sound,55);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +120)
        		{
        			Mix_VolumeChunk(sound,60);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +150)
        		{
        			Mix_VolumeChunk(sound,65);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +170)
        		{
        			Mix_VolumeChunk(sound,70);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +190)
        		{
        			Mix_VolumeChunk(sound,75);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +210)
        		{
        			Mix_VolumeChunk(sound,80);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +230)
        		{
        			Mix_VolumeChunk(sound,85);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +260)
        		{
        			Mix_VolumeChunk(sound,90);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		else
        			if(posbutton1.x == posruler1.x +320)
        		{
        			Mix_VolumeChunk(sound,128);
        			Mix_PlayChannel(-1,sound, 0);
        		}
        		posbutton1.x = x;
        	}
        }

        
		SDL_Flip(screen);

	}   

	//play button 1
SDL_FreeSurface(optemizedimage );
SDL_FreeSurface(optemizedimageblack );

// background
SDL_FreeSurface(optemizedback );

// settings
SDL_FreeSurface(optemizedstings );
SDL_FreeSurface(optemizedstingsblack);

// quit
SDL_FreeSurface(optemizedquit);
SDL_FreeSurface(optemizedquitblack );

//sound images
SDL_FreeSurface(optemizedimage );
SDL_FreeSurface(optemizedimageblack );

//settings background
SDL_FreeSurface(optemizedstingsb );
SDL_FreeSurface(optemizedhome );
SDL_FreeSurface(optemizedmusicimage);
SDL_FreeSurface(optemizedsoundimage );
//sound button
SDL_FreeSurface(optemizedruler );
SDL_FreeSurface(optemizedbutton );
SDL_FreeSurface(optemizedruler1 );
SDL_FreeSurface(optemizedbutton1  );
//fullscreen
SDL_FreeSurface(optemizedfullscreen );
SDL_FreeSurface(optemizedfullscreen1 );
//game background
SDL_FreeSurface(optemizedgameback);
SDL_FreeSurface(imageIntro);

    Mix_CloseAudio();
    TTF_CloseFont( font );
    TTF_Quit();
SDL_Quit();
	

    
    Mix_CloseAudio();
    TTF_CloseFont( font );
    TTF_Quit();
	SDL_Quit();
}
