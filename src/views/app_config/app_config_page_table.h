#ifndef APPCONFIGPAGE_RECORDTABLE_H
#define APPCONFIGPAGE_RECORDTABLE_H


#include <wobjectdefs.h>
#include <QObject>


#include <QWidget>
#include <QCheckBox>
#include <QMap>
#include <QGroupBox>

#include "config_page.h"
class rctl_t;

class AppConfigPageTable : public ConfigPage {
    W_OBJECT(AppConfigPageTable)

    public:
	AppConfigPageTable(rctl_t *_record_controller, QWidget *parent = 0);
	int apply_changes(void);

    signals:
	void record_table_config_change(void) W_SIGNAL(record_table_config_change)	// ;	// Сигнал, испускающийся когда изменились настройки таблицы конечных записей

    private slots:
	void on_field_toggle(bool);

    protected:

	QMap<QString, QCheckBox *> _fields;

	QCheckBox	*_show_horizontal_header;
	QCheckBox	*_show_vertical_header;

	// Объединяющая рамка
	QGroupBox	*_show_fields_box;
	QGroupBox	*_show_headers_box;

	void setupSignals(void);

	rctl_t *_record_controller;
};


#endif	// APPCONFIGPAGE_RECORDTABLE_H