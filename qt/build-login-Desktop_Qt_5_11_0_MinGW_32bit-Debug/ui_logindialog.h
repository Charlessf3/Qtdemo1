/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QPushButton *loginBtn;
    QPushButton *exitBtn;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *usrLineEdit;
    QLineEdit *pwdLineEdit;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(376, 320);
        loginBtn = new QPushButton(LoginDialog);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(60, 230, 75, 23));
        exitBtn = new QPushButton(LoginDialog);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(190, 230, 75, 23));
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 120, 54, 12));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 170, 54, 12));
        usrLineEdit = new QLineEdit(LoginDialog);
        usrLineEdit->setObjectName(QStringLiteral("usrLineEdit"));
        usrLineEdit->setGeometry(QRect(170, 120, 113, 20));
        pwdLineEdit = new QLineEdit(LoginDialog);
        pwdLineEdit->setObjectName(QStringLiteral("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(170, 160, 113, 20));
        pwdLineEdit->setEchoMode(QLineEdit::Password);

        retranslateUi(LoginDialog);
        QObject::connect(exitBtn, SIGNAL(clicked()), LoginDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", nullptr));
        loginBtn->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        exitBtn->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201", nullptr));
        usrLineEdit->setPlaceholderText(QApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        pwdLineEdit->setPlaceholderText(QApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
