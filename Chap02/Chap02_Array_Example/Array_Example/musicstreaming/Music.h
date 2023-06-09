#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Music {
private:
	string title;
	string artist;
	string album;
	int year;
public:
	Music(string title, string artist, string album, int year) {
		this->title = title;
		this->artist = artist;
		this->album = album;
		this->year = year;
	}
	string getTitle() {
		return title;
	}
	string getArtist() {
		return artist;
	}
	string getAlbum() {
		return album;
	}
	int getYear() {
		return year;
	}
};

class MusicStreamingService {
private:
	string serviceName;
	vector<Music> musicList;
public:

	MusicStreamingService(string serviceName)
		:serviceName(serviceName) {}

	void addMusic(string title, string artist, string album, int year) {
		Music newMusic(title, artist, album, year);
		musicList.push_back(newMusic);
		cout << title << "  by  " << artist << "  added to  " << serviceName << endl;
	}

	Music* searchByTitle(string title) {                  //title이 Music에 있으면 반환을 해주는 함수
		for (int i = 0; i < musicList.size(); i++) {
			if (musicList[i].getTitle() == title) {
				return &musicList[i];                   // 변수의 주소값을 반환해줘야됨 & 표시!!!!!!!!!!!!!!
			}
		}
		return NULL;            // 아무것도 없는 주소값 반환
	}

	//artist로 musicList에서 검색하여 반환    (Music을 벡터형으로 반환)
	vector<Music*> searchByArtist(string artist) {
		vector<Music*> result;
		for (int i = 0; i < musicList.size(); i++) {
			if (musicList[i].getArtist() == artist) {
				result.push_back(&musicList[i]);                    //musiclist의 artist가 같은 음악을 pushback, 아티싀틔가 여러명일수도..
			}
		}
		return result;
	}

};