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

	Music* searchByTitle(string title) {                  //title�� Music�� ������ ��ȯ�� ���ִ� �Լ�
		for (int i = 0; i < musicList.size(); i++) {
			if (musicList[i].getTitle() == title) {
				return &musicList[i];                   // ������ �ּҰ��� ��ȯ����ߵ� & ǥ��!!!!!!!!!!!!!!
			}
		}
		return NULL;            // �ƹ��͵� ���� �ּҰ� ��ȯ
	}

	//artist�� musicList���� �˻��Ͽ� ��ȯ    (Music�� ���������� ��ȯ)
	vector<Music*> searchByArtist(string artist) {
		vector<Music*> result;
		for (int i = 0; i < musicList.size(); i++) {
			if (musicList[i].getArtist() == artist) {
				result.push_back(&musicList[i]);                    //musiclist�� artist�� ���� ������ pushback, ��Ƽ��Ʒ�� �������ϼ���..
			}
		}
		return result;
	}

};