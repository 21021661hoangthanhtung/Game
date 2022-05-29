#include"sound.h"
#include "base_value.h"
sound::sound()
{
    int au = Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT, 2, 1024);
     Mix_Music *music= Mix_LoadMUS("audio/sound.wav");
     Mix_PlayMusic( music, -1 );

}
void sound :: mus()
{
    int au = Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT, 2, 1024);
     Mix_Music *music= Mix_LoadMUS("audio/sound.wav");
     if( Mix_PlayingMusic() == 0 )
							{

								Mix_PlayMusic( music, -1 );
							}
							else
							{
								if( Mix_PausedMusic() == 1 )
								{
									Mix_ResumeMusic();
								}
								else
								{
									Mix_PauseMusic();
								}
							}

}

void sound::Motion()
{
     int au = Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT, 2, 1024);
     Mix_Chunk *motion = Mix_LoadWAV("audio/sound_move.wav");
     Mix_PlayChannel(-1,motion,0);

}




