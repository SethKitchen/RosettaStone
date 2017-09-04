/*************************************************************************
> File Name: main.cpp
> Project Name: Hearthstone++
> Author: Chan-Ho Chris Ohk
> Purpose: Main entry of Hearthstone++ simulator.
> Created Time: 2017/08/10
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <Loaders/CardLoader.h>

int main()
{
	Hearthstonepp::CardLoader loader;
	loader.Load();

	return 0;
}