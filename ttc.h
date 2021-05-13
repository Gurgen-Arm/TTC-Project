#ifndef TTC_H
#define TTC_H
#include "ui_ttc.h"
#include <QMainWindow>
#include <QTableWidget>
#include<QMessageBox>
#include <iostream>
#include <QMainWindow>
#include <QSpinBox>
#include <cstdlib>
#include <algorithm>
QT_BEGIN_NAMESPACE
namespace Ui { class TTC; }
QT_END_NAMESPACE

class TTC : public QMainWindow
{
    Q_OBJECT

public:
    explicit TTC(QWidget *parent = nullptr);
    ~TTC();
    Ui::TTC *ui;
    void Create();
    void CostMatrixInitialization();
    void TransportationInitialization();
    void ShowResult(int sum);
    void Potential(); // рассчет потенциалов
    void Calculate(); // Рассчет
    void Correct(int i, int j);// Циклы из t
    void Optimal();

    void Sum();
public slots:
    void setRows();
    void setColumns();
    void startDecision();
protected:
    int** c;//Матрица стоимости
    int* a;//количество поставки, размер
    int* b;//количество потребности магазинов
    int rows;//строчки матрицы
    int cols;//столбцы
    int** X; //Матрица СЗ
    int** W; //Матрица оптимальности
    int* u;
    int* v;
};

#endif // TTC_H
