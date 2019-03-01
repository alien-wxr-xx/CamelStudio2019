#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    textEdit = new QsciScintilla(this);
    setCentralWidget(textEdit);
    textLexer = new QsciLexerCPP;
    textLexer->setColor(QColor(Qt:: yellow),
                        QsciLexerCPP::CommentLine);
    textEdit->setLexer(textLexer);
}

MainWindow::~MainWindow()
{
    delete ui;
}
