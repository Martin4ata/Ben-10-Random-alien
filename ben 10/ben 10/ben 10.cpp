#include <iostream>
#include <cstring>
#include <cmath>
#include <conio.h>
#include <iomanip> 
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

int main()
{
	//randomizer seed?
	srand(time(NULL));
	ios_base::sync_with_stdio(false);
	string aliens[] = {
		"Heatblast","Wildmutt","Diamondhead","XLR8","Gray Matter","Four Arms","Stinkfly","Ripjaws","Upgrade","Ghostfreak","Cannonbolt","Wildvine","Buzzshock","Arctiguana","Blitzwolfer","Snare-oh","Frankenstrike","Upchcuk","Ditto","Eye Guy","Way Big",
		"Swampfire","Echo Echo","Humungousaur","Jetray","Big Chill","Chromastone","Brainstorm","Spidermonkey","Goop","Alien X","Lodestar","Rath","Nanomech",
		"Water Hazard","AmpFibian","Armodrillo","Terraspin","NRG","Fasttrack","Clockwork","Chamalien","Shocksqatch","Eatle","Juryrigg",
		"Feedback","Bloxx","Gravattack","Crashhopper","Ball Weevil","Walkatrout","Pesky Dust","Mole-Stache","The Worst","Kickin Hawk","Toepick","Astrodactyl","Bullfrag","Atomix","Gutrot","Whampire",
		"Ultimate Swampfire","Ultimate Spidermonkey","Ultimate Big Chill","Ultimate Humungousaur","Ultimate Cannonbolt","Ultimate Echo Echo","Ultimate Wildmutt","Ultimate Way Big",
		"Albedo Ultimate Humungousaur","Albedo Ultimate Echo Echo","Albedo Ultimate Spidermonkey","Albedo Ultimate Albedo","Albedo Ultimate Arctiguana","Albedo Ultimate Gravattack","Albedo Ultimate Rath"
	};
	for (int i = 0; i <= 5; i++)
	{
		int rnd = rand() % 76 + 1;
		cout << aliens[rnd] << "\n";
	}
}