#include <QApplication>
#include "Tools/CSVWriter.hpp"
#include "UI/imageprocessingwindow.hpp"

int main(int argc, char *argv[])
{
    CSVWriter csv;
    csv << "this" << "is" << "a" << "row";


    std::fstream fs ("Data/test.txt", std::fstream::in | std::fstream::out);

    fs << csv;

    fs.close();


    QApplication a(argc, argv);
    ImageProcessingWindow w;
    w.show();

    return a.exec();
}
