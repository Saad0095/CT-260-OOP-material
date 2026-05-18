#include <iostream>
using namespace std;
class MediaFile {
public:
    virtual void play() = 0;
    virtual ~MediaFile() {}
};

class AudioFile : public MediaFile {
public:
    void play() {
        cout << "Playing Audio: Outputting sound to speakers." << endl;
    }
};

class VideoFile : public MediaFile {
public:
    void play() {
        cout << "Playing Video: Rendering frames on screen." << endl;
    }
};

int main() {
    MediaFile* files[2];
    files[0] = new AudioFile();
    files[1] = new VideoFile();
    for (int i = 0; i < 2; i++)
        files[i]->play();
    for (int i = 0; i < 2; i++)
        delete files[i];
    return 0;
}