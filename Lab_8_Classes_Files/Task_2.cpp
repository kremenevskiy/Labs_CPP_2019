//
//  main.cpp
//  task  2
//
//  Created by Vladislav Kremenevskiy on 12/26/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
using namespace std;

#include <cstring>
#include <fstream>

// Как сделать так чтобы работал getline ???


// Прототипы функций


class Abiturient;
void addAbitur(Abiturient * & list1);
void ShowAbiturs();
void deleteAbitur();
void change();
void insertSort(int size, Abiturient * list);
void UnivesityPoint();
void initialization();



// Глобальные переменные

int countS;
Abiturient * list;
fstream task2_in;
fstream result;
fstream task2_out;




// Класс

class Abiturient{
public:
    
    void EnterData(){
        
        cout << "Введите ФИО абитуриента : ";
        //getline(cin, FIO);
        cin >> FIO;
        
        cout << "Введите первую отметку: ";
        cin >> mark1;
        
        cout << "Введите вторую отметку: ";
        cin >> mark2;
        
        cout << "Введите третью отметку: ";
        cin >> mark3;
        
    }
    
    
    
    void ShowData(){
        cout << FIO << ' ' << mark1 << ' ' << mark2 << ' ' << mark3 << '\n';
        //task2_out << FIO << ' ' << mark1 << ' ' << mark2 << ' ' << mark3 << '\n';
    }
    
    void addToFile(){
        task2_out << FIO << ' ' << mark1 << ' ' << mark2 << ' ' << mark3 << '\n';
    }
    
    void CalcAverage(){
        averageMark = (mark1 + mark2 + mark3) / 3.0;
    }
    
    double averageWork(){
        return averageMark;
    }
    
    string FIO;
    int mark1;
    int mark2;
    int mark3;
    
private:
    double averageMark;
};



// MAIN

int main(int argc, const char * argv[]) {
    
    
    
    string fileName = "/Users/kremenevskki/desktop/task2.txt";
    string fileName2 = "/Users/kremenevskki/desktop/result.txt";
    
    task2_in.open(fileName, ios::out | ios::in);
    result.open(fileName2, ios::out | ios::app);
    task2_out.open(fileName, ios::out | ios::app | ios::app);
    
    if (!task2_in.is_open() || !result.is_open()){
        return 2;
    }
    


    
    while(true){
        cout << "\n\nБаза данных заявленных абитуриентов\n";
        cout << "Какое действие желаете совершить?\n\n";

        cout << "1. Добавить новых абитурентов && в файл\n";
        cout << "2. Просмотреть уже имеющихся\n";
        cout << "3. Корректировать данные\n";
        cout << "4. Удалить абитуриента\n";
        cout << "5. Cредний балл по университету\n";
        cout << "6. Инициализация\n";
        cout << "0. Заврешить работу. Все данные будут удалены!\n";

        cout << "Ввод: ";
        int number;
        cin >> number;

        cout << '\n';

        switch (number) {
            case 1:
                addAbitur(list);
                break;
            case 2:
                ShowAbiturs();
                break;
            case 3:
                change();
                break;
            case 4:
                deleteAbitur();
                break;
            case 5:
                UnivesityPoint();
                break;
            case 6:
                initialization();
                break;
            case 0:
                task2_out.close();
                task2_in.close();
                result.close();
                return 1;
//
//            default:
//                break;
        }
    }
    
    
}
// Функции


void addAbitur(Abiturient * & list1){
    cout << "Сколько хотите внести абитурентов? - ";
    int number;
    cin >> number;
    
    Abiturient * list2 = new Abiturient [countS + number];
    
    if (countS){
        for (int i = 0; i < countS; i++){
            list2[i] = list1[i];
        }
    }
        
    delete [] list1;
        
    list1 = list2;
        
    for(int i = 0; i < number; i++){
        list1[countS].EnterData();
        list1[countS].addToFile();
        countS ++;
        cout << '\n';
        
        
        
    }
}

void ShowAbiturs(){
    cout << "Все заявленные абитуриенты:\n";
    for (int i = 0; i < countS; i++){
        cout << i+1 << ". ";
        list[i].ShowData();
        
    }
}

void deleteAbitur(){
    ShowAbiturs();
    cout << "Какого студента желаете удалить? - ";

    int number;
    cin >> number;
    
    Abiturient * list2 = new Abiturient [countS - 1];
    
    for(int i = 0; i < number - 1; i++){
        list2[i] = list[i];
    }
    
    for(int i = number; i < countS; i++){
        list2[i-1] = list[i];
    }
    
    delete [] list;
    
    list = list2;
    
    countS --;
}

void change(){
    
    ShowAbiturs();
    
    cout << "Какие данные хотите изменить? - ";
    int number;
    cin >> number;
    
    cout << "Что конкретно хотите изменить?\n";
    
    cout << "1. Первую отметка: " << list[number-1].mark1 << '\n';
    cout << "2. Вторую отметка: " << list[number-1].mark2 << '\n';
    cout << "3. Третью отметка: " << list[number-1].mark3 << '\n';
    cout << "4. ФИО: " << list[number-1].FIO << '\n';
    cout << "Ввод : ";
    int num;
    cin >> num;
    
    switch (num) {
        case 1:
            cout << "Введите новое значение: ";
            cin >> list[number-1].mark1;
            //list[number - 1].CalcAverage();
            break;
        case 2:
            cout << "Введите новое значение: ";
            cin >> list[number-1].mark2;
            //list[number - 1].CalcAverage();
            break;
        case 3:
            cout << "Введите новое значение: ";
            cin >> list[number-1].mark3;
            //list[number - 1].CalcAverage();
            break;
        case 4:
            cout << "Введите новое значение: ";
            //getline(cin, list[number-1].FIO);
            cin >> list[number-1].FIO;
            break;
            
//        default:
//            break;
    }
}

void UnivesityPoint(){
    double averagePoint = 0;
    for (int i = 0; i < countS; i++){
        list[i].CalcAverage();
        averagePoint += list[i].averageWork();
    }
    
    averagePoint /= countS;
    
    cout << "Средний балл по университету : " << averagePoint << '\n';
    result << "Средний балл по университету : " << averagePoint << '\n';
    
    int cnt = 0;
    
    for (int m = 0; m < countS; m++){
        if (list[m].averageWork() > averagePoint){
            cnt ++;
        }
    }
    
    Abiturient * catalog = new Abiturient [cnt];
    
    for (int s = 0, i = 0; s < countS; s++){
        if (list[s].averageWork() > averagePoint){
            catalog[i] = list[s];
            i++;
        }
    }
    
    insertSort(cnt, catalog);
    
    cout << "\nАбитуренты средний балл которых выше среднего:\n";
    result << "\nАбитуренты средний балл которых выше среднего:\n";

    
    for (int f = 0; f < cnt; f++){
        cout << catalog[f].FIO << " - " << catalog[f].averageWork() << '\n';
        result << catalog[f].FIO << " - " << catalog[f].averageWork() << '\n';
    }
    
    delete [] catalog;
    
}

void insertSort(int size, Abiturient * list){
    for(int i = 1; i < size; i++){
        Abiturient x = list[i];
        int j = i - 1;
        while(x.averageWork() > list[j].averageWork()){
            list[j+1] = list[j];
            j --;
            if (j < 0)
                break;
        }
        list[j+1] = x;
    }
}

void initialization(){

    string str;
    int mark;
    while(!task2_in.eof()){
        Abiturient * list2 = new Abiturient [countS+1];
        if (countS)
            for (int i = 0; i < countS; i++){
                list2[i] = list[i];
        }
        
        task2_in >> str; list2[countS].FIO = str;
        
        task2_in >> mark; list2[countS].mark1 = mark;
        
        task2_in >> mark; list2[countS].mark2 = mark;
        task2_in >> mark; list2[countS].mark3 = mark;
        
        cout << str << ' ';
        
        delete [] list;
        list = list2;
        
        countS ++;
    }
    
}
