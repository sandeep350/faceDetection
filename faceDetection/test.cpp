#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int main() {
    // To Open the default webcam
    VideoCapture video(0);
    if (!video.isOpened()) {
        cout << "Error: Could not open the camera!" << endl;
        return -1;
    }

    // To Load the Haar cascade for face detection
    CascadeClassifier facedetect;
    string cascadePath = "haarcascade_frontalface_default.xml"; // Ensure this file is in the correct path
    if (!facedetect.load(cascadePath)) {
        cout << "Error: Could not load Haarcascade file!" << endl;
        return -1;
    }

    Mat img;

    while (true) {
        video.read(img);
        if (img.empty()) {
            cout << "Error: Empty frame grabbed!" << endl;
            continue;
        }

        // Convert image to grayscale for better detection performance
        Mat gray;
        cvtColor(img, gray, COLOR_BGR2GRAY);

        // Detect faces
        vector<Rect> faces;
        facedetect.detectMultiScale(gray, faces, 1.1, 3, 0, Size(30, 30));

        // Draw rectangles around detected faces
        for (size_t i = 0; i < faces.size(); i++) {
            rectangle(img, faces[i].tl(), faces[i].br(), Scalar(50, 50, 255), 3);
        }

        // Display face count
        if (!faces.empty()) {
            rectangle(img, Point(0, 0), Point(250, 70), Scalar(50, 50, 255), FILLED);
            putText(img, to_string(faces.size()) + " FACE(S) FOUND", Point(10, 40), FONT_HERSHEY_DUPLEX, 1, Scalar(255, 255, 255), 1);
        }

        // Show the output frame
        imshow("Face Detection", img);

        // Press 'Esc' to exit
        if (waitKey(1) == 27)
            break;
    }

    // Release resources
    video.release();
    destroyAllWindows();
    return 0;
}
