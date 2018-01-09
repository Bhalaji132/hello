#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        cityField(new QLineEdit())
{

    addRow("<font style='color:violet'>First Name</font>", firstNameField);
    addRow("<font style='color:pink'>Last Name</font>", lastNameField);
    addRow("<font style='color:black'>Address</font>", addressField);
    addRow("<font style='color:blue'>Phone Number</font>", phoneNumberField);
    addRow("font style='color:green'>Email</font>", emailField);
    addRow("<font style='color:purple'>City</font>",cityField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    cityField->setText("");
}
