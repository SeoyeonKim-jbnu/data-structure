#include "Music.h"

int main()
{
	//Music Streaming Service »ý¼º
	MusicStreamingService myService("MyMusic");
	myService.addMusic("Say My Name", "Say Yes!", "Ablum", 2023);
	myService.addMusic("I am", "Ive", "Ablum", 2023);
	myService.addMusic("Kitsch", "Ive", "Ablum", 2023);
	myService.addMusic("Flower", "Jisoo", "Ablum", 2023);

	//Search for music by title

	string music_title;
	cout << "Enter the Music Title : ";
	cin >> music_title;
	Music* result = myService.searchByTitle(music_title);
	if (result != NULL) {
		cout << " found " << result->getTitle() << " by " << result->getArtist() << endl;
	}

	//Search for music by artist

	string artist_Name;
	cout << "Enter the Artist Name : ";
	cin >> artist_Name;
	vector<Music*> artistResult = myService.searchByArtist(artist_Name);
	if (artistResult.size() > 0) {
		cout << " found " << artistResult.size() << " songs by " << artist_Name << " : " << endl;
		for (int i = 0; i < artistResult.size(); i++) {
			cout << artistResult[i]->getTitle() << endl;
		}
	}

	else {
		cout << " NOT FOUND " << endl;
	}

	return 0;
}