/******************************************************************************
 * Project: libngstore
 * Purpose: NextGIS store and visualization support library
 * Author:  Dmitry Baryshnikov, dmitry.baryshnikov@nextgis.com
 ******************************************************************************
 *   Copyright (c) 2016-2017 NextGIS, <info@nextgis.com>
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU Lesser General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/
#ifndef CATALOGDIALOG_H
#define CATALOGDIALOG_H

#include <QDialog>

namespace Ui {
class CatalogDialog;
}

class CatalogDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CatalogDialog(const QString & title, int filter = 0, QWidget *parent = 0);
    ~CatalogDialog();

private:
    Ui::CatalogDialog *ui;
};

#endif // CATALOGDIALOG_H
