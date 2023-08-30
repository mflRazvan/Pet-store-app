/********************************************************************************
** Form generated from reading UI file 'Pet_store_app.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PET_STORE_APP_H
#define UI_PET_STORE_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pet_store_appClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *MainPage;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginButtonPage;
    QPushButton *signinButtonPage;
    QPushButton *closeApplicationButton;
    QWidget *LoginPage;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *emailAddressLog;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *passwordLog;
    QRadioButton *showPassword;
    QComboBox *comboBoxLogin;
    QPushButton *loginButton;
    QPushButton *backButton;
    QWidget *SigninPage;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *emailAddressSign;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *passwordSign;
    QRadioButton *showPassword_2;
    QComboBox *comboBoxSignin;
    QComboBox *userType;
    QPushButton *signinButton;
    QPushButton *backButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Pet_store_appClass)
    {
        if (Pet_store_appClass->objectName().isEmpty())
            Pet_store_appClass->setObjectName("Pet_store_appClass");
        Pet_store_appClass->resize(662, 486);
        centralWidget = new QWidget(Pet_store_appClass);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMinimumSize(QSize(0, 402));
        MainPage = new QWidget();
        MainPage->setObjectName("MainPage");
        verticalLayout = new QVBoxLayout(MainPage);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 147, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        label = new QLabel(MainPage);
        label->setObjectName("label");

        horizontalLayout_11->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_11);

        verticalSpacer = new QSpacerItem(20, 146, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        loginButtonPage = new QPushButton(MainPage);
        loginButtonPage->setObjectName("loginButtonPage");
        loginButtonPage->setMaximumSize(QSize(16777215, 24));

        horizontalLayout->addWidget(loginButtonPage);

        signinButtonPage = new QPushButton(MainPage);
        signinButtonPage->setObjectName("signinButtonPage");
        signinButtonPage->setMaximumSize(QSize(16777215, 24));

        horizontalLayout->addWidget(signinButtonPage);


        verticalLayout->addLayout(horizontalLayout);

        closeApplicationButton = new QPushButton(MainPage);
        closeApplicationButton->setObjectName("closeApplicationButton");

        verticalLayout->addWidget(closeApplicationButton);

        stackedWidget->addWidget(MainPage);
        LoginPage = new QWidget();
        LoginPage->setObjectName("LoginPage");
        verticalLayout_3 = new QVBoxLayout(LoginPage);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(LoginPage);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        emailAddressLog = new QLineEdit(LoginPage);
        emailAddressLog->setObjectName("emailAddressLog");

        horizontalLayout_2->addWidget(emailAddressLog);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(LoginPage);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        passwordLog = new QLineEdit(LoginPage);
        passwordLog->setObjectName("passwordLog");

        horizontalLayout_3->addWidget(passwordLog);

        showPassword = new QRadioButton(LoginPage);
        showPassword->setObjectName("showPassword");
        showPassword->setMaximumSize(QSize(16, 16777215));

        horizontalLayout_3->addWidget(showPassword);


        verticalLayout_3->addLayout(horizontalLayout_3);

        comboBoxLogin = new QComboBox(LoginPage);
        comboBoxLogin->setObjectName("comboBoxLogin");

        verticalLayout_3->addWidget(comboBoxLogin);

        loginButton = new QPushButton(LoginPage);
        loginButton->setObjectName("loginButton");

        verticalLayout_3->addWidget(loginButton);

        backButton = new QPushButton(LoginPage);
        backButton->setObjectName("backButton");

        verticalLayout_3->addWidget(backButton);

        stackedWidget->addWidget(LoginPage);
        SigninPage = new QWidget();
        SigninPage->setObjectName("SigninPage");
        verticalLayout_6 = new QVBoxLayout(SigninPage);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(SigninPage);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        emailAddressSign = new QLineEdit(SigninPage);
        emailAddressSign->setObjectName("emailAddressSign");

        horizontalLayout_4->addWidget(emailAddressSign);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_6 = new QLabel(SigninPage);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);

        passwordSign = new QLineEdit(SigninPage);
        passwordSign->setObjectName("passwordSign");

        horizontalLayout_5->addWidget(passwordSign);

        showPassword_2 = new QRadioButton(SigninPage);
        showPassword_2->setObjectName("showPassword_2");
        showPassword_2->setMaximumSize(QSize(16, 16777215));

        horizontalLayout_5->addWidget(showPassword_2);


        verticalLayout_6->addLayout(horizontalLayout_5);

        comboBoxSignin = new QComboBox(SigninPage);
        comboBoxSignin->setObjectName("comboBoxSignin");

        verticalLayout_6->addWidget(comboBoxSignin);

        userType = new QComboBox(SigninPage);
        userType->setObjectName("userType");

        verticalLayout_6->addWidget(userType);

        signinButton = new QPushButton(SigninPage);
        signinButton->setObjectName("signinButton");

        verticalLayout_6->addWidget(signinButton);

        backButton_3 = new QPushButton(SigninPage);
        backButton_3->setObjectName("backButton_3");

        verticalLayout_6->addWidget(backButton_3);

        stackedWidget->addWidget(SigninPage);

        verticalLayout_2->addWidget(stackedWidget);

        Pet_store_appClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Pet_store_appClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 662, 22));
        Pet_store_appClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Pet_store_appClass);
        mainToolBar->setObjectName("mainToolBar");
        Pet_store_appClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Pet_store_appClass);
        statusBar->setObjectName("statusBar");
        Pet_store_appClass->setStatusBar(statusBar);

        retranslateUi(Pet_store_appClass);
        QObject::connect(loginButtonPage, SIGNAL(clicked()), Pet_store_appClass, SLOT(log_in_page()));
        QObject::connect(closeApplicationButton, SIGNAL(clicked()), Pet_store_appClass, SLOT(close_application()));
        QObject::connect(loginButton, SIGNAL(clicked()), Pet_store_appClass, SLOT(log_in()));
        QObject::connect(backButton, SIGNAL(clicked()), Pet_store_appClass, SLOT(back()));
        QObject::connect(signinButtonPage, SIGNAL(clicked()), Pet_store_appClass, SLOT(sign_in_page()));
        QObject::connect(signinButton, SIGNAL(clicked()), Pet_store_appClass, SLOT(sign_in()));
        QObject::connect(backButton_3, SIGNAL(clicked()), Pet_store_appClass, SLOT(back()));
        QObject::connect(passwordLog, SIGNAL(textEdited(QString)), Pet_store_appClass, SLOT(to_star()));
        QObject::connect(showPassword, SIGNAL(clicked()), Pet_store_appClass, SLOT(show_password()));
        QObject::connect(showPassword_2, SIGNAL(clicked()), Pet_store_appClass, SLOT(show_password_sign()));
        QObject::connect(passwordSign, SIGNAL(textEdited(QString)), Pet_store_appClass, SLOT(to_star_sign()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Pet_store_appClass);
    } // setupUi

    void retranslateUi(QMainWindow *Pet_store_appClass)
    {
        Pet_store_appClass->setWindowTitle(QCoreApplication::translate("Pet_store_appClass", "Pet_store_app", nullptr));
        label->setText(QCoreApplication::translate("Pet_store_appClass", "Welcome to our Pet Shelter! ", nullptr));
        loginButtonPage->setText(QCoreApplication::translate("Pet_store_appClass", "Log in", nullptr));
        signinButtonPage->setText(QCoreApplication::translate("Pet_store_appClass", "Sign in", nullptr));
        closeApplicationButton->setText(QCoreApplication::translate("Pet_store_appClass", "Close application", nullptr));
        label_3->setText(QCoreApplication::translate("Pet_store_appClass", "Email address:", nullptr));
        label_4->setText(QCoreApplication::translate("Pet_store_appClass", "Password:", nullptr));
        showPassword->setText(QString());
        loginButton->setText(QCoreApplication::translate("Pet_store_appClass", "Log in", nullptr));
        backButton->setText(QCoreApplication::translate("Pet_store_appClass", "Back", nullptr));
        label_5->setText(QCoreApplication::translate("Pet_store_appClass", "Email address:", nullptr));
        label_6->setText(QCoreApplication::translate("Pet_store_appClass", "Accounts' password:", nullptr));
        showPassword_2->setText(QString());
        signinButton->setText(QCoreApplication::translate("Pet_store_appClass", "Sign in", nullptr));
        backButton_3->setText(QCoreApplication::translate("Pet_store_appClass", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pet_store_appClass: public Ui_Pet_store_appClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PET_STORE_APP_H
