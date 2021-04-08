/********************************************************************** 
 Freeciv - Copyright (C) 1996 - A Kjeldberg, L Gregersen, P Unold
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
***********************************************************************/

#ifndef FC__EDIT_IMPR_H
#define FC__EDIT_IMPR_H

#ifdef HAVE_CONFIG_H
#include <fc_config.h>
#endif

// Qt
#include <QDialog>
#include <QSpinBox>

class ruledit_gui;

class edit_impr : public QDialog
{
  Q_OBJECT

  public:
    explicit edit_impr(ruledit_gui *ui_in, struct impr_type *impr_in);
    void refresh();

  private:
    ruledit_gui *ui;
    struct impr_type *impr;
    QSpinBox *bcost;

  protected:
    void closeEvent(QCloseEvent *cevent);

  private slots:
    void set_bcost_value(int value);
};


#endif // FC__EDIT_IMPR_H
