//
//  main.cpp
//  LB8
//
//  Created by Vladislav Kremenevskiy on 12/25/19.
//  Copyright © 2019 kremenevskki. All rights reserved.
//

#include <iostream>
using namespace std;

#include <iomanip>
#include "cstring"

class Student;
void addStudent();
void deleteEl(int quantity, Student * & list);
void push_back(int number, Student * &list);
void showDB();
void Search();
void sortSelecet(Student *list, int quantity);
void push_back(int number, Student * &list);
void change();


int quantity = 0;
Student * list;


class Student{
public:
    void DataEnter(){
        //cout << "ФИО студента : ";
        printf("ФИО студента : ");
        cin >> FIO;

        //cout << "Номер группы : ";
        printf("Номер группы : ");
        //cin >> groupNumber;
        scanf("%d", &groupNumber);
        
        //cout << "Средняя отметка : ";
        printf("Средняя отметка : ");
        //cin >> averageMark;
        scanf("%f", &averageMark);
        
        //cout << "Доход на члена семьи : ";
        printf("Доход на члена семьи : ");
        //cin >> incomeFM;
        scanf("%f", &incomeFM);
    }
    
    void ShowData(){
        cout << FIO << ' ' << groupNumber << ' ' << averageMark << ' ' << incomeFM << '\n';
    }
    

    string FIO;
    int groupNumber;
    float averageMark;
    float incomeFM;
    //int age;
};

int main(int argc, const char * argv[]) {
    
    while(true){
        //cout << "\nБаза данных нуждающихся в общежитии:\n";
        //cout << "Какое дейсвтие совершить?\n\n";
        
        //cout << "1. Добавить нуждающихся студентов\n";
        //cout << "2. Просмотр всей базы\n";
        //cout << "3. Поиск по полю\n";
        //cout << "4. Изменить элемент\n";
        //cout << "5. Удалить элемент\n";
        //cout << "6. Отсортировать\n";
        //cout << "7. Завершить работу\n\n";
        //cout << "Ввод : ";
        printf("\nБаза данных нуждающихся в общежитии:\n");
        printf("Какое действие совершить?\n\n");
        
        printf("1. Добавить нуждающихся студентов\n");
        printf("2. Просмотр всей базы\n");
        printf("3. Поиск по полю\n");
        printf("4. Изменить элемент\n");
        printf("5. Удалить элемент\n");
        printf("6. Отсортировать\n");
        printf("7. Завершить работу\n\n");
        printf("Ввод : ");
        

        
        int number;
        //cin >> number;
        scanf("%d", &number);
        
        switch (number) {
            case 1: addStudent();
                break;
            case 2: showDB();
                break;
            case 3: Search();
                break;
            case 4: change();
                break;
            case 5: deleteEl(quantity, list);
                break;
            case 6: sortSelecet(list, quantity);
                break;
            case 7: return 1;
        }
    }
    
    
    return 0;
}

void addStudent(){
    
        int n;
        //cout << "Сколько студентов добавить? - ";
        printf("Сколько студентов добавить? - ");
        //cin >> n;
        scanf("%d", &n);
        
        
        push_back(n, list);
    
        for(int i = 0; i < n; i++){
            list[quantity].DataEnter();
            quantity++;
            //cout << '\n';
            printf("\n");

        }
}

void push_back(int number, Student * &list){
    
    Student * list2 = new Student [quantity + number];
    if (quantity){
        for(int i = 0; i < quantity; i++){
            list2[i] = list[i];
        }
    }

    delete [] list;
    
    list = list2;
    
}

void showDB(){
    //cout << "Полный список студентов:\n";
    printf("Полный список студентов:\n");
    
    for (int i = 0; i < quantity; i++){
        //cout << i+1 << ". ";
        printf("%d. ", i+1);
        list[i].ShowData();
        //cout << '\n';
        printf("\n");
    }
}


void change(){
    int num;
    int flag = 0;
    //cout << "Поиск по:\n";
    printf("Поиск по:\n");
    
    //cout << "1. ФИО студента\n";
    //cout << "2. Номеру группы\n";
    //cout << "3. Среденей отметке\n";
    //cout << "4. Доходу\n\n";
    //cout << "Ввод : ";
    printf("1. ФИО студента\n");
    printf("2. Номеру группы\n");
    printf("3. Среденей отметке\n");
    printf("4. Доходу\n\n");
    printf("Ввод : ");

    //cin >> num;
    scanf("%d", &num);
    string name;
    
    switch(num){
        case 1:
    
            //cout << "ФИО студента: ";
            printf("ФИО студента: ");
            cin >> name;
            
            for(int i = 0; i < quantity; i++){
                if (name == list[i].FIO){
                    //cout << "Введите новое значение: ";
                    printf("Введите новое значение: ");
                    cin >> list[i].FIO;
                }
            }
            break;
            
        case 2: int group;
            //cout << "Введите номер группы: ";
            printf("Введите номер группы: ");
            cin >> group;
            for(int i = 0; i < quantity; i++){
                if (group == list[i].groupNumber){
                    //cout << "Введите новое значение: ";
                    printf("Введите новое значение: ");
                    cin >> list[i].groupNumber;
                }
            }
            break;
            
        case 3: int mark;
            //cout << "Введите среднию отметку: ";
            printf("Введите среднию отметку: ");
            cin >> mark;
            for(int i = 0; i < quantity; i++){
                if (mark == list[i].averageMark){
                    //cout << "Введите новое значение: ";
                    printf("Введите новое значение: ");
                    cin >> list[i].averageMark;
                }
            }
            break;
            
        case 4: int income;
            //cout << "Введите доход члена семьи: ";
            printf("Введите доход члена семьи: ");
            cin >> income;
            for(int i = 0; i < quantity; i++){
                if (income == list[i].incomeFM){
                    //cout << "Введите новое значение: ";
                    printf("Введите новое значение: ");
                    cin >> list[i].incomeFM;
                }
            }
            break;
            
    }

    
    if (!flag){
        //cout << "Такого студента не найдено\n\n";
        printf("Такого студента не найдено\n\n");
    }
    
    
    
}

void Search(){
    int num;
    int flag = 0;
    //cout << "Поиск по:\n";
    //cout << "1. ФИО студента\n";
    //cout << "2. Номеру группы\n";
    //cout << "3. Среденей отметке\n";
    //cout << "4. Доходу\n\n";
    //cout << "Ввод : ";
    printf("Поиск по:\n");
    printf("1. ФИО студента\n");
    printf("2. Номеру группы\n");
    printf("3. Среденей отметке\n");
    printf("4. Доходу\n\n");
    printf("Ввод : ");

    cin >> num;
    scanf("%d", &num);
    string name;
    
    switch(num){
        case 1:
    
            //cout << "ФИО студента: ";
            printf("ФИО студента: ");
            cin >> name;
            
            for(int i = 0; i < quantity; i++){
                if (name == list[i].FIO){
                    list[i].ShowData();
                    flag ++;
                }
            }
            break;
            
        case 2: int group;
            //cout << "Введите номер группы: ";
            printf("Введите номер группы: ");
            cin >> group;
            scanf("%d", &group);
            for(int i = 0; i < quantity; i++){
                if (group == list[i].groupNumber){
                    list[i].ShowData();
                    flag ++;
                }
            }
            break;
            
        case 3: int mark;
            //cout << "Введите среднию отметку: ";
            printf("Введите среднию отметку: ");
            //cin >> mark;
            scanf("%d", &mark);
            for(int i = 0; i < quantity; i++){
                if (mark == list[i].averageMark){
                    list[i].ShowData();
                    flag ++;
                }
            }
            break;
            
        case 4: int income;
            //cout << "Введите доход: ";
            printf("Введите доход: ");
            //cin >> income;
            scanf("%d", &income);
            for(int i = 0; i < quantity; i++){
                if (income == list[i].incomeFM){
                    list[i].ShowData();
                    flag ++;
                }
            }
            break;
            
    }

    
    if (!flag){
        //cout << "Такого студента не найдено\n\n";
        printf("Такого студента не найдено\n\n");
    }
}





void deleteEl(int quantityHere, Student * & list){
    
    showDB();
    //cout << "Какого студента удалить?\n\nВвод : ";
    printf("Какого студента удалить?\n\nВвод : ");
    int number;
    //cin >> number;
    scanf("%d", &number);
    
    Student * newList = new Student [quantityHere - 1];
    
    for(int i = 0; i < number - 1; i ++){
        newList[i] = list[i];
        
    }
    
    for(int i = number; i < quantity; i++){
        newList[i-1] = list[i];
    }
    
    delete [] list;
    
    list = newList;
    
    quantity --;

}

void sortSelecet(Student *list, int quantity){
    
    for(int i = 0; i < quantity - 1; i++){
        Student low = list[i];
        int low_ind = i;
        for(int j = i + 1; j < quantity; j++){
            if (list[j].incomeFM < low.incomeFM){
                low = list[j];
                low_ind = j;
            }
            
        }
        
        list[low_ind] = list[i];
        list[i] = low;
    }
}
