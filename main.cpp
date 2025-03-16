#include <iostream>
#include <QApplication>
#include <QWidget>
int main(int argc, char *argv[]){
    std::cout << "Welcome to Curzor!" << std::endl;
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("Curzor");
    window.resize(800, 600);
    window.show();
    return app.exec();
}