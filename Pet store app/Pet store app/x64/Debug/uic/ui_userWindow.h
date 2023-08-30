/********************************************************************************
** Form generated from reading UI file 'userWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userWindowClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QStackedWidget *stackedWidget;
    QWidget *option_list_user;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *showButtonUser;
    QPushButton *specificBreedButton;
    QPushButton *adoptionButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QLineEdit *dataSave;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *closeUserWindow;
    QWidget *show_all;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_9;
    QTextEdit *nameShow;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_10;
    QTextEdit *breedShow;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_11;
    QTextEdit *ageShow;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QTextEdit *photoShow;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *previousButton;
    QPushButton *nextButton;
    QPushButton *adoptButton;
    QPushButton *backButtonUser_2;
    QWidget *see_by_breed;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_12;
    QTextEdit *nameShow_2;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_14;
    QTextEdit *ageShow_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QTextEdit *photoShow_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *searchedBreed;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *searchedAge;
    QPushButton *searchButton;
    QHBoxLayout *horizontalLayout_22;
    QPushButton *previousButton_2;
    QPushButton *nextButton_2;
    QPushButton *adoptButton_2;
    QPushButton *backButtonUser_3;
    QWidget *adoption_list;
    QVBoxLayout *verticalLayout_4;
    QListWidget *adoptionShow;
    QPushButton *removeAdoption;
    QPushButton *backButtonUser_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *userWindowClass)
    {
        if (userWindowClass->objectName().isEmpty())
            userWindowClass->setObjectName("userWindowClass");
        userWindowClass->resize(851, 562);
        centralWidget = new QWidget(userWindowClass);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        option_list_user = new QWidget();
        option_list_user->setObjectName("option_list_user");
        verticalLayout = new QVBoxLayout(option_list_user);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(option_list_user);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(20);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        showButtonUser = new QPushButton(option_list_user);
        showButtonUser->setObjectName("showButtonUser");

        horizontalLayout->addWidget(showButtonUser);

        specificBreedButton = new QPushButton(option_list_user);
        specificBreedButton->setObjectName("specificBreedButton");

        horizontalLayout->addWidget(specificBreedButton);


        verticalLayout->addLayout(horizontalLayout);

        adoptionButton = new QPushButton(option_list_user);
        adoptionButton->setObjectName("adoptionButton");

        verticalLayout->addWidget(adoptionButton);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_13 = new QLabel(option_list_user);
        label_13->setObjectName("label_13");

        horizontalLayout_8->addWidget(label_13);

        dataSave = new QLineEdit(option_list_user);
        dataSave->setObjectName("dataSave");

        horizontalLayout_8->addWidget(dataSave);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        closeUserWindow = new QPushButton(option_list_user);
        closeUserWindow->setObjectName("closeUserWindow");

        horizontalLayout_2->addWidget(closeUserWindow);


        verticalLayout->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(option_list_user);
        show_all = new QWidget();
        show_all->setObjectName("show_all");
        verticalLayout_2 = new QVBoxLayout(show_all);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_9 = new QLabel(show_all);
        label_9->setObjectName("label_9");

        horizontalLayout_18->addWidget(label_9);

        nameShow = new QTextEdit(show_all);
        nameShow->setObjectName("nameShow");
        nameShow->setReadOnly(true);

        horizontalLayout_18->addWidget(nameShow);


        verticalLayout_2->addLayout(horizontalLayout_18);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_10 = new QLabel(show_all);
        label_10->setObjectName("label_10");

        horizontalLayout_17->addWidget(label_10);

        breedShow = new QTextEdit(show_all);
        breedShow->setObjectName("breedShow");
        breedShow->setReadOnly(true);

        horizontalLayout_17->addWidget(breedShow);


        verticalLayout_2->addLayout(horizontalLayout_17);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_11 = new QLabel(show_all);
        label_11->setObjectName("label_11");

        horizontalLayout_16->addWidget(label_11);

        ageShow = new QTextEdit(show_all);
        ageShow->setObjectName("ageShow");
        ageShow->setReadOnly(true);

        horizontalLayout_16->addWidget(ageShow);


        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_5 = new QLabel(show_all);
        label_5->setObjectName("label_5");

        horizontalLayout_7->addWidget(label_5);

        photoShow = new QTextEdit(show_all);
        photoShow->setObjectName("photoShow");
        photoShow->setReadOnly(true);

        horizontalLayout_7->addWidget(photoShow);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        previousButton = new QPushButton(show_all);
        previousButton->setObjectName("previousButton");

        horizontalLayout_15->addWidget(previousButton);

        nextButton = new QPushButton(show_all);
        nextButton->setObjectName("nextButton");

        horizontalLayout_15->addWidget(nextButton);


        verticalLayout_2->addLayout(horizontalLayout_15);

        adoptButton = new QPushButton(show_all);
        adoptButton->setObjectName("adoptButton");

        verticalLayout_2->addWidget(adoptButton);

        backButtonUser_2 = new QPushButton(show_all);
        backButtonUser_2->setObjectName("backButtonUser_2");

        verticalLayout_2->addWidget(backButtonUser_2);

        stackedWidget->addWidget(show_all);
        see_by_breed = new QWidget();
        see_by_breed->setObjectName("see_by_breed");
        verticalLayout_3 = new QVBoxLayout(see_by_breed);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_12 = new QLabel(see_by_breed);
        label_12->setObjectName("label_12");

        horizontalLayout_19->addWidget(label_12);

        nameShow_2 = new QTextEdit(see_by_breed);
        nameShow_2->setObjectName("nameShow_2");
        nameShow_2->setReadOnly(true);

        horizontalLayout_19->addWidget(nameShow_2);


        verticalLayout_3->addLayout(horizontalLayout_19);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_14 = new QLabel(see_by_breed);
        label_14->setObjectName("label_14");

        horizontalLayout_21->addWidget(label_14);

        ageShow_2 = new QTextEdit(see_by_breed);
        ageShow_2->setObjectName("ageShow_2");
        ageShow_2->setReadOnly(true);

        horizontalLayout_21->addWidget(ageShow_2);


        verticalLayout_3->addLayout(horizontalLayout_21);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(see_by_breed);
        label_4->setObjectName("label_4");

        horizontalLayout_6->addWidget(label_4);

        photoShow_2 = new QTextEdit(see_by_breed);
        photoShow_2->setObjectName("photoShow_2");
        photoShow_2->setReadOnly(true);

        horizontalLayout_6->addWidget(photoShow_2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(see_by_breed);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        searchedBreed = new QLineEdit(see_by_breed);
        searchedBreed->setObjectName("searchedBreed");

        horizontalLayout_3->addWidget(searchedBreed);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(see_by_breed);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        searchedAge = new QLineEdit(see_by_breed);
        searchedAge->setObjectName("searchedAge");

        horizontalLayout_4->addWidget(searchedAge);


        verticalLayout_3->addLayout(horizontalLayout_4);

        searchButton = new QPushButton(see_by_breed);
        searchButton->setObjectName("searchButton");

        verticalLayout_3->addWidget(searchButton);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        previousButton_2 = new QPushButton(see_by_breed);
        previousButton_2->setObjectName("previousButton_2");

        horizontalLayout_22->addWidget(previousButton_2);

        nextButton_2 = new QPushButton(see_by_breed);
        nextButton_2->setObjectName("nextButton_2");

        horizontalLayout_22->addWidget(nextButton_2);


        verticalLayout_3->addLayout(horizontalLayout_22);

        adoptButton_2 = new QPushButton(see_by_breed);
        adoptButton_2->setObjectName("adoptButton_2");

        verticalLayout_3->addWidget(adoptButton_2);

        backButtonUser_3 = new QPushButton(see_by_breed);
        backButtonUser_3->setObjectName("backButtonUser_3");

        verticalLayout_3->addWidget(backButtonUser_3);

        stackedWidget->addWidget(see_by_breed);
        adoption_list = new QWidget();
        adoption_list->setObjectName("adoption_list");
        verticalLayout_4 = new QVBoxLayout(adoption_list);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        adoptionShow = new QListWidget(adoption_list);
        adoptionShow->setObjectName("adoptionShow");

        verticalLayout_4->addWidget(adoptionShow);

        removeAdoption = new QPushButton(adoption_list);
        removeAdoption->setObjectName("removeAdoption");

        verticalLayout_4->addWidget(removeAdoption);

        backButtonUser_4 = new QPushButton(adoption_list);
        backButtonUser_4->setObjectName("backButtonUser_4");

        verticalLayout_4->addWidget(backButtonUser_4);

        stackedWidget->addWidget(adoption_list);

        horizontalLayout_5->addWidget(stackedWidget);

        userWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(userWindowClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 851, 22));
        userWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(userWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        userWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(userWindowClass);
        statusBar->setObjectName("statusBar");
        userWindowClass->setStatusBar(statusBar);

        retranslateUi(userWindowClass);
        QObject::connect(closeUserWindow, SIGNAL(clicked()), userWindowClass, SLOT(close_window()));
        QObject::connect(showButtonUser, SIGNAL(clicked()), userWindowClass, SLOT(show_pet_list_page()));
        QObject::connect(specificBreedButton, SIGNAL(clicked()), userWindowClass, SLOT(show_specific_breed_page()));
        QObject::connect(adoptionButton, SIGNAL(clicked()), userWindowClass, SLOT(show_adoption_list_page()));
        QObject::connect(previousButton_2, SIGNAL(clicked()), userWindowClass, SLOT(previous_specific_breed()));
        QObject::connect(nextButton_2, SIGNAL(clicked()), userWindowClass, SLOT(next_specific_breed()));
        QObject::connect(searchButton, SIGNAL(clicked()), userWindowClass, SLOT(search_breed()));
        QObject::connect(backButtonUser_2, SIGNAL(clicked()), userWindowClass, SLOT(back()));
        QObject::connect(backButtonUser_3, SIGNAL(clicked()), userWindowClass, SLOT(back()));
        QObject::connect(backButtonUser_4, SIGNAL(clicked()), userWindowClass, SLOT(back()));
        QObject::connect(previousButton, SIGNAL(clicked()), userWindowClass, SLOT(previous_pet()));
        QObject::connect(nextButton, SIGNAL(clicked()), userWindowClass, SLOT(next_pet()));
        QObject::connect(removeAdoption, SIGNAL(clicked()), userWindowClass, SLOT(remove_selected_adoption()));
        QObject::connect(adoptButton_2, SIGNAL(clicked()), userWindowClass, SLOT(adopt_current()));
        QObject::connect(adoptButton, SIGNAL(clicked()), userWindowClass, SLOT(adopt_current()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(userWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *userWindowClass)
    {
        userWindowClass->setWindowTitle(QCoreApplication::translate("userWindowClass", "userWindow", nullptr));
        label->setText(QCoreApplication::translate("userWindowClass", "What do you want to do today?", nullptr));
        showButtonUser->setText(QCoreApplication::translate("userWindowClass", "See pets one by one", nullptr));
        specificBreedButton->setText(QCoreApplication::translate("userWindowClass", "See a specific breed with a maximum given age", nullptr));
        adoptionButton->setText(QCoreApplication::translate("userWindowClass", "See current adoption list", nullptr));
        label_13->setText(QCoreApplication::translate("userWindowClass", "The file name you want to save the data in (optional):", nullptr));
        closeUserWindow->setText(QCoreApplication::translate("userWindowClass", "Close window", nullptr));
        label_9->setText(QCoreApplication::translate("userWindowClass", "Pets' name:", nullptr));
        label_10->setText(QCoreApplication::translate("userWindowClass", "Pets' breed:", nullptr));
        label_11->setText(QCoreApplication::translate("userWindowClass", "Pets' age:", nullptr));
        label_5->setText(QCoreApplication::translate("userWindowClass", "Pets' photo link:", nullptr));
        previousButton->setText(QCoreApplication::translate("userWindowClass", "Previous", nullptr));
        nextButton->setText(QCoreApplication::translate("userWindowClass", "Next", nullptr));
        adoptButton->setText(QCoreApplication::translate("userWindowClass", "Adopt current pet", nullptr));
        backButtonUser_2->setText(QCoreApplication::translate("userWindowClass", "Back to main page", nullptr));
        label_12->setText(QCoreApplication::translate("userWindowClass", "Pets' name:", nullptr));
        label_14->setText(QCoreApplication::translate("userWindowClass", "Pets' age:", nullptr));
        label_4->setText(QCoreApplication::translate("userWindowClass", "Pets' photo link:", nullptr));
        label_2->setText(QCoreApplication::translate("userWindowClass", "Searched breed:", nullptr));
        label_3->setText(QCoreApplication::translate("userWindowClass", "Maximum searched age:", nullptr));
        searchButton->setText(QCoreApplication::translate("userWindowClass", "Search", nullptr));
        previousButton_2->setText(QCoreApplication::translate("userWindowClass", "Previous", nullptr));
        nextButton_2->setText(QCoreApplication::translate("userWindowClass", "Next", nullptr));
        adoptButton_2->setText(QCoreApplication::translate("userWindowClass", "Adopt current pet", nullptr));
        backButtonUser_3->setText(QCoreApplication::translate("userWindowClass", "Back to main page", nullptr));
        removeAdoption->setText(QCoreApplication::translate("userWindowClass", "Give up selected pet adoption", nullptr));
        backButtonUser_4->setText(QCoreApplication::translate("userWindowClass", "Back to main page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userWindowClass: public Ui_userWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
