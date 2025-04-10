### Face Detection using OpenCV

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

## 📸 Screenshot

![image](https://github.com/user-attachments/assets/e991d044-8f4e-4201-8b0e-b57c2d93cf13)


## 💡 Credits

- Haar cascade file by OpenCV contributors: [Link](https://github.com/opencv/opencv/tree/master/data/haarcascades)

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

