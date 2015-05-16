#ifndef SONG_LOADER_H
#define SONG_LOADER_H
#include <string>
#include <stdlib.h>
#include <iostream>
#include <dirent.h>

//Headers for Randomizing
#include <algorithm>
#include <vector>
#include <random>



class SongLoader 
{
	int counter,song;
	std::vector<string> container[100];
	std::string CurrentSong;
	int readSongNames(); //Read all the songs in the directory
	
		public:
			SongLoader();
			int shuffleSongNames(); //Shuffle all the songs in the directory
			std::string nextSong(); //Returns Next song
			
			

	
};
#endif
