/********************************************************************************
** Form generated from reading UI file 'administratorWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATORWINDOW_H
#define UI_ADMINISTRATORWINDOW_H

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

class Ui_administratorWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QStackedWidget *stackedWidget;
    QWidget *option_page;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *removeButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *updateButton;
    QPushButton *showButton;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLineEdit *dataSave;
    QPushButton *closeAdminWindow;
    QWidget *add_page;
    QHBoxLayout *horizontalLayout_8;
    QListWidget *petListAdd;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *breedLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *ageLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *photoLineEdit;
    QPushButton *addButtonPage;
    QPushButton *backButton_2;
    QWidget *remove_page;
    QVBoxLayout *verticalLayout_2;
    QListWidget *petListRemove;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *removeButtonPage;
    QPushButton *backButton_3;
    QWidget *update_page;
    QHBoxLayout *horizontalLayout_14;
    QListWidget *petListUpdate;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_6;
    QLineEdit *newBreed;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_7;
    QLineEdit *newAge;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLineEdit *newPhoto;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *updateButtonPage;
    QPushButton *backButton_4;
    QWidget *show_all_page;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_9;
    QTextEdit *nameShow;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_10;
    QTextEdit *breedShow;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_11;
    QTextEdit *ageShow;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *previousButton;
    QPushButton *nextButton;
    QPushButton *backButton_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *administratorWindowClass)
    {
        if (administratorWindowClass->objectName().isEmpty())
            administratorWindowClass->setObjectName("administratorWindowClass");
        administratorWindowClass->resize(661, 431);
        centralWidget = new QWidget(administratorWindowClass);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        option_page = new QWidget();
        option_page->setObjectName("option_page");
        verticalLayout_3 = new QVBoxLayout(option_page);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(option_page);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(20);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        addButton = new QPushButton(option_page);
        addButton->setObjectName("addButton");

        horizontalLayout->addWidget(addButton);

        removeButton = new QPushButton(option_page);
        removeButton->setObjectName("removeButton");

        horizontalLayout->addWidget(removeButton);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        updateButton = new QPushButton(option_page);
        updateButton->setObjectName("updateButton");

        horizontalLayout_2->addWidget(updateButton);

        showButton = new QPushButton(option_page);
        showButton->setObjectName("showButton");

        horizontalLayout_2->addWidget(showButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_13 = new QLabel(option_page);
        label_13->setObjectName("label_13");

        horizontalLayout_7->addWidget(label_13);

        dataSave = new QLineEdit(option_page);
        dataSave->setObjectName("dataSave");

        horizontalLayout_7->addWidget(dataSave);


        verticalLayout_3->addLayout(horizontalLayout_7);

        closeAdminWindow = new QPushButton(option_page);
        closeAdminWindow->setObjectName("closeAdminWindow");

        verticalLayout_3->addWidget(closeAdminWindow);

        stackedWidget->addWidget(option_page);
        add_page = new QWidget();
        add_page->setObjectName("add_page");
        horizontalLayout_8 = new QHBoxLayout(add_page);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        petListAdd = new QListWidget(add_page);
        petListAdd->setObjectName("petListAdd");
        petListAdd->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout_8->addWidget(petListAdd);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_2 = new QLabel(add_page);
        label_2->setObjectName("label_2");

        horizontalLayout_6->addWidget(label_2);

        nameLineEdit = new QLineEdit(add_page);
        nameLineEdit->setObjectName("nameLineEdit");

        horizontalLayout_6->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(add_page);
        label_3->setObjectName("label_3");

        horizontalLayout_5->addWidget(label_3);

        breedLineEdit = new QLineEdit(add_page);
        breedLineEdit->setObjectName("breedLineEdit");

        horizontalLayout_5->addWidget(breedLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(add_page);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        ageLineEdit = new QLineEdit(add_page);
        ageLineEdit->setObjectName("ageLineEdit");

        horizontalLayout_4->addWidget(ageLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(add_page);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        photoLineEdit = new QLineEdit(add_page);
        photoLineEdit->setObjectName("photoLineEdit");

        horizontalLayout_3->addWidget(photoLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        addButtonPage = new QPushButton(add_page);
        addButtonPage->setObjectName("addButtonPage");

        verticalLayout->addWidget(addButtonPage);

        backButton_2 = new QPushButton(add_page);
        backButton_2->setObjectName("backButton_2");

        verticalLayout->addWidget(backButton_2);


        horizontalLayout_8->addLayout(verticalLayout);

        stackedWidget->addWidget(add_page);
        remove_page = new QWidget();
        remove_page->setObjectName("remove_page");
        verticalLayout_2 = new QVBoxLayout(remove_page);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        petListRemove = new QListWidget(remove_page);
        petListRemove->setObjectName("petListRemove");

        verticalLayout_2->addWidget(petListRemove);

        label_12 = new QLabel(remove_page);
        label_12->setObjectName("label_12");

        verticalLayout_2->addWidget(label_12);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        removeButtonPage = new QPushButton(remove_page);
        removeButtonPage->setObjectName("removeButtonPage");

        horizontalLayout_9->addWidget(removeButtonPage);

        backButton_3 = new QPushButton(remove_page);
        backButton_3->setObjectName("backButton_3");

        horizontalLayout_9->addWidget(backButton_3);


        verticalLayout_2->addLayout(horizontalLayout_9);

        stackedWidget->addWidget(remove_page);
        update_page = new QWidget();
        update_page->setObjectName("update_page");
        horizontalLayout_14 = new QHBoxLayout(update_page);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        petListUpdate = new QListWidget(update_page);
        petListUpdate->setObjectName("petListUpdate");

        horizontalLayout_14->addWidget(petListUpdate);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_6 = new QLabel(update_page);
        label_6->setObjectName("label_6");

        horizontalLayout_12->addWidget(label_6);

        newBreed = new QLineEdit(update_page);
        newBreed->setObjectName("newBreed");

        horizontalLayout_12->addWidget(newBreed);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_7 = new QLabel(update_page);
        label_7->setObjectName("label_7");

        horizontalLayout_11->addWidget(label_7);

        newAge = new QLineEdit(update_page);
        newAge->setObjectName("newAge");

        horizontalLayout_11->addWidget(newAge);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_8 = new QLabel(update_page);
        label_8->setObjectName("label_8");

        horizontalLayout_10->addWidget(label_8);

        newPhoto = new QLineEdit(update_page);
        newPhoto->setObjectName("newPhoto");

        horizontalLayout_10->addWidget(newPhoto);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        updateButtonPage = new QPushButton(update_page);
        updateButtonPage->setObjectName("updateButtonPage");

        horizontalLayout_13->addWidget(updateButtonPage);

        backButton_4 = new QPushButton(update_page);
        backButton_4->setObjectName("backButton_4");

        horizontalLayout_13->addWidget(backButton_4);


        verticalLayout_4->addLayout(horizontalLayout_13);


        horizontalLayout_14->addLayout(verticalLayout_4);

        stackedWidget->addWidget(update_page);
        show_all_page = new QWidget();
        show_all_page->setObjectName("show_all_page");
        verticalLayout_5 = new QVBoxLayout(show_all_page);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_9 = new QLabel(show_all_page);
        label_9->setObjectName("label_9");

        horizontalLayout_18->addWidget(label_9);

        nameShow = new QTextEdit(show_all_page);
        nameShow->setObjectName("nameShow");
        nameShow->setReadOnly(true);

        horizontalLayout_18->addWidget(nameShow);


        verticalLayout_5->addLayout(horizontalLayout_18);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_10 = new QLabel(show_all_page);
        label_10->setObjectName("label_10");

        horizontalLayout_17->addWidget(label_10);

        breedShow = new QTextEdit(show_all_page);
        breedShow->setObjectName("breedShow");
        breedShow->setReadOnly(true);

        horizontalLayout_17->addWidget(breedShow);


        verticalLayout_5->addLayout(horizontalLayout_17);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_11 = new QLabel(show_all_page);
        label_11->setObjectName("label_11");

        horizontalLayout_16->addWidget(label_11);

        ageShow = new QTextEdit(show_all_page);
        ageShow->setObjectName("ageShow");
        ageShow->setReadOnly(true);

        horizontalLayout_16->addWidget(ageShow);


        verticalLayout_5->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        previousButton = new QPushButton(show_all_page);
        previousButton->setObjectName("previousButton");

        horizontalLayout_15->addWidget(previousButton);

        nextButton = new QPushButton(show_all_page);
        nextButton->setObjectName("nextButton");

        horizontalLayout_15->addWidget(nextButton);


        verticalLayout_5->addLayout(horizontalLayout_15);

        backButton_5 = new QPushButton(show_all_page);
        backButton_5->setObjectName("backButton_5");

        verticalLayout_5->addWidget(backButton_5);

        stackedWidget->addWidget(show_all_page);

        verticalLayout_6->addWidget(stackedWidget);

        administratorWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(administratorWindowClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 661, 22));
        administratorWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(administratorWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        administratorWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(administratorWindowClass);
        statusBar->setObjectName("statusBar");
        administratorWindowClass->setStatusBar(statusBar);

        retranslateUi(administratorWindowClass);
        QObject::connect(backButton_2, SIGNAL(clicked()), administratorWindowClass, SLOT(go_back()));
        QObject::connect(backButton_3, SIGNAL(clicked()), administratorWindowClass, SLOT(go_back()));
        QObject::connect(backButton_4, SIGNAL(clicked()), administratorWindowClass, SLOT(go_back()));
        QObject::connect(backButton_5, SIGNAL(clicked()), administratorWindowClass, SLOT(go_back()));
        QObject::connect(addButtonPage, SIGNAL(clicked()), administratorWindowClass, SLOT(add_pet()));
        QObject::connect(closeAdminWindow, SIGNAL(clicked()), administratorWindowClass, SLOT(close_window()));
        QObject::connect(addButton, SIGNAL(clicked()), administratorWindowClass, SLOT(add_pet_page()));
        QObject::connect(removeButton, SIGNAL(clicked()), administratorWindowClass, SLOT(remove_pet_page()));
        QObject::connect(updateButton, SIGNAL(clicked()), administratorWindowClass, SLOT(update_pet_page()));
        QObject::connect(showButton, SIGNAL(clicked()), administratorWindowClass, SLOT(show_pet_list_page()));
        QObject::connect(removeButtonPage, SIGNAL(clicked()), administratorWindowClass, SLOT(remove_pet()));
        QObject::connect(updateButtonPage, SIGNAL(clicked()), administratorWindowClass, SLOT(update_pet()));
        QObject::connect(nextButton, SIGNAL(clicked()), administratorWindowClass, SLOT(next_pet()));
        QObject::connect(previousButton, SIGNAL(clicked()), administratorWindowClass, SLOT(previous_pet()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(administratorWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *administratorWindowClass)
    {
        administratorWindowClass->setWindowTitle(QCoreApplication::translate("administratorWindowClass", "administratorWindow", nullptr));
        label->setText(QCoreApplication::translate("administratorWindowClass", "What do you want to do today?", nullptr));
        addButton->setText(QCoreApplication::translate("administratorWindowClass", "Add a new pet", nullptr));
        removeButton->setText(QCoreApplication::translate("administratorWindowClass", "Remove a pet from the list", nullptr));
        updateButton->setText(QCoreApplication::translate("administratorWindowClass", "Update the status of a pet", nullptr));
        showButton->setText(QCoreApplication::translate("administratorWindowClass", "Show the list of pets one by one", nullptr));
        label_13->setText(QCoreApplication::translate("administratorWindowClass", "The file name you want to save the data in (optional):", nullptr));
        closeAdminWindow->setText(QCoreApplication::translate("administratorWindowClass", "Close window", nullptr));
        label_2->setText(QCoreApplication::translate("administratorWindowClass", "New pets' name:", nullptr));
        label_3->setText(QCoreApplication::translate("administratorWindowClass", "New pets' breed:", nullptr));
        label_4->setText(QCoreApplication::translate("administratorWindowClass", "New pets' age:", nullptr));
        label_5->setText(QCoreApplication::translate("administratorWindowClass", "New pets' photo link:", nullptr));
        addButtonPage->setText(QCoreApplication::translate("administratorWindowClass", "Add", nullptr));
        backButton_2->setText(QCoreApplication::translate("administratorWindowClass", "Back", nullptr));
        label_12->setText(QCoreApplication::translate("administratorWindowClass", "Select a pet to remove it", nullptr));
        removeButtonPage->setText(QCoreApplication::translate("administratorWindowClass", "Remove", nullptr));
        backButton_3->setText(QCoreApplication::translate("administratorWindowClass", "Back", nullptr));
        label_6->setText(QCoreApplication::translate("administratorWindowClass", "New breed:", nullptr));
        label_7->setText(QCoreApplication::translate("administratorWindowClass", "New age:", nullptr));
        label_8->setText(QCoreApplication::translate("administratorWindowClass", "New photo:", nullptr));
        updateButtonPage->setText(QCoreApplication::translate("administratorWindowClass", "Update", nullptr));
        backButton_4->setText(QCoreApplication::translate("administratorWindowClass", "Back", nullptr));
        label_9->setText(QCoreApplication::translate("administratorWindowClass", "Pets' name:", nullptr));
        label_10->setText(QCoreApplication::translate("administratorWindowClass", "Pets' breed:", nullptr));
        label_11->setText(QCoreApplication::translate("administratorWindowClass", "Pets' age:", nullptr));
        previousButton->setText(QCoreApplication::translate("administratorWindowClass", "Previous", nullptr));
        nextButton->setText(QCoreApplication::translate("administratorWindowClass", "Next", nullptr));
        backButton_5->setText(QCoreApplication::translate("administratorWindowClass", "Back to main page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class administratorWindowClass: public Ui_administratorWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATORWINDOW_H
