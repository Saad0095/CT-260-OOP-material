// Build a system to manage different types of media files.
// 1.Class MediaFile: The base class containing a filename.
// 2.Class Playable: Inherits from MediaFile. It adds a duration
// (Single Inheritance).
// 3.Class Video: Inherits from Playable. It adds resolution
// (Multilevel Inheritance).
// 4.Class Image: Inherits from MediaFile. It adds dimensions
// (Hierarchical Inheritance).

// To implement this scenario properly, you need to add specific
// Member Functions that demonstrate how data from the base
// classes is utilized in the derived classes.

#include <iostream>
using namespace std;

class MediaFile {
protected:
  string filename;

public:
  MediaFile() : filename("Untitled.mp3") {};
  MediaFile(string file) : filename(file) {};
  void displayDetails() { cout << "Filename is: " << filename << endl; }
};

class Playable : public MediaFile {
protected:
  int duration;

public:
  Playable() : MediaFile(), duration(6000) {}
  Playable(string file, int dur) : MediaFile(file), duration(dur) {}
  void displayDetails() {
    MediaFile ::displayDetails();
    cout << "Duration is: " << duration << endl;
  }
};

class Video : public Playable {
private:
  string resolution;

public:
  Video() : Playable(), resolution("720p") {}
  Video(string file, int dur, string res)
      : Playable(file, dur), resolution(res) {}
  void displayDetails() {
    Playable ::displayDetails();
    cout << "Resolution is: " << resolution << endl;
  }
};

class Image : public MediaFile {
private:
  string dimensions;

public:
  Image() : MediaFile(), dimensions("1080x1080") {};
  Image(string file, string dim) : MediaFile(), dimensions(dim) {};
  void displayDetails() {
    MediaFile ::displayDetails();
    cout << "Dimensions is: " << dimensions << endl;
  }
};

int main() {
  Video v1("Vid1", 600, "2K");
  Image img1("Image1", "360 x 360");

  v1.displayDetails();
  cout << "\n";
  img1.displayDetails();
  return 0;
}