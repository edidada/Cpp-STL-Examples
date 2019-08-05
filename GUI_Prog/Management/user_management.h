#ifndef USER_MANAGEMENT_H
#define USER_MANAGEMENT_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>
#include <QProcess>

namespace Ui {
class User_management;
}

class User_management : public QDialog
{
    Q_OBJECT

public:
    explicit User_management(QWidget *parent = nullptr);
    ~User_management();

    QString getUsername() const;

    // Validate the entered username string
    bool validate_username();

    QString getCurrentUsername();

private slots:
    void on_user_exit_pushButton_clicked();

    void on_user_proceed_pushButton_clicked();

private:
    Ui::User_management *ui;
    // This is a global string variable for the entered username in the username lineEdit
    QString username;
};

#endif // USER_MANAGEMENT_H