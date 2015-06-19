#ifndef CITY_MERCENARIES_H
#define CITY_MERCENARIES_H

#include <QWidget>
#include "ui_city_mercenaries.h"
#include "RoleDefine.h"

class city_Mercenaries : public QWidget
{
	Q_OBJECT
public:

public:
	city_Mercenaries(QWidget *parent, RoleInfo *roleInfo);
	~city_Mercenaries();

protected:
	void mouseMoveEvent(QMouseEvent * ev);

private slots:
	void on_btn_close_clicked(void);

private:
	Ui::city_Mercenaries ui;
	QWidget *m_parrent;

	RoleInfo *myRole;
};

#endif // CITY_MERCENARIES_H