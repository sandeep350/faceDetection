## FACE DETECTION using OpenCV

This project implements real-time face detection using OpenCV and a webcam. It uses a Haar Cascade Classifier to detect human faces and displays the count of faces detected in each frame.

## 🔍 Features

- Real-time face detection using your system's webcam.
- Face count displayed on screen.
- Visual feedback with rectangles drawn around detected faces.
- Lightweight and easy to run.

## 🖥️ Demo

![image](https://github.com/user-attachments/assets/a5d3912c-aa2c-431c-bffa-74fb79977037)


## 🛠️ Technologies Used

- C++
- OpenCV (v4.x or compatible)
- Haarcascade XML file for frontal face detection

## 📂 File Structure

```
.
├── haarcascade_frontalface_default.xml
├── main.cpp
└── README.md
```

## 🚀 Getting Started

### Prerequisites

- C++ compiler (like g++)
- OpenCV installed on your system
- Webcam

### Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/yourusername/face-detection-opencv.git
   cd face-detection-opencv
   ```

2. **Make sure OpenCV is installed**
   You can install OpenCV using package managers like `vcpkg`, `apt`, or build from source.

3. **Build the project**
   ```bash
   g++ main.cpp -o FaceDetection `pkg-config --cflags --libs opencv4`
   ```

4. **Run the program**
   ```bash
   ./FaceDetection
   ```

## 📁 Notes

- Make sure the file `haarcascade_frontalface_default.xml` is present in the same directory as the code or provide the correct path to it.
- Press **Esc** key to exit the detection window.
Sure! Here's a more detailed yet still concise and clear version for your README file:

---

### 🔍 How the Face Detection Algorithm Works

1. **Capture Video from Webcam**  
   - Uses OpenCV’s `VideoCapture` to access the webcam and read frames in real-time.

2. **Convert Frame to Grayscale**  
   - Each frame is converted to grayscale using `cv2.cvtColor()`.  
   - This simplifies the image and reduces computational load since the Haar Cascade works on intensity rather than color.

3. **Load Haar Cascade Classifier**  
   - A pre-trained XML classifier (`haarcascade_frontalface_default.xml`) is loaded using `cv2.CascadeClassifier()`.  
   - This classifier has been trained on thousands of face images to recognize common facial features.

4. **Face Detection with `detectMultiScale()`**  
   - The classifier scans the grayscale image at multiple scales to detect faces of various sizes.  
   - Parameters like `scaleFactor`, `minNeighbors`, and `minSize` help fine-tune detection accuracy and speed.

5. **Draw Rectangles Around Faces**  
   - For every detected face, a rectangle is drawn on the original frame using `cv2.rectangle()` to visually highlight faces.

6. **Count and Display Number of Faces**  
   - The number of faces detected in the current frame is counted using `len(faces)` and displayed using `cv2.putText()`.

7. **Real-Time Loop**  
   - Steps 2 to 6 repeat continuously for each frame until the user exits (usually by pressing a key like 'q').

---

## 📸 Screenshot

![image](https://github.com/user-attachments/assets/e991d044-8f4e-4201-8b0e-b57c2d93cf13)


## 💡 Credits

- Haar cascade file by OpenCV contributors: [Link](https://github.com/opencv/opencv/tree/master/data/haarcascades)

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

