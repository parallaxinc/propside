/*
 * This file is part of the Parallax Propeller SimpleIDE development environment.
 *
 * Copyright (C) 2014 Parallax Incorporated
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef RESCUEDIALOG_H
#define RESCUEDIALOG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QPlainTextEdit>
#include <QString>

class RescueDialog : public QDialog
{
    Q_OBJECT
public:
    explicit RescueDialog(QWidget *parent = 0);
    void setEditText(QString text);

signals:

public slots:
    void copyText();

private:
    QVBoxLayout *layout;
    QHBoxLayout *hlayout;
    QPushButton *copyBtn;
    QLabel *label;
    QPlainTextEdit *edit;
};

#endif // RESCUEDIALOG_H
