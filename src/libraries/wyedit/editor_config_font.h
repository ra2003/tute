#ifndef _EDITORCONFIGFONT_H_
#define	_EDITORCONFIGFONT_H_

#include <wobjectdefs.h>
#include <QObject>

#include <QWidget>
#include <QLineEdit>
#include <QFontComboBox>
#include <QSpinBox>
#include <QCheckBox>
#include <QLabel>
#include <QPushButton>


class FlatToolButton;

#include "views/app_config/config_page.h"


class EditorConfig;


class EditorConfigFont : public ConfigPage {
    W_OBJECT(EditorConfigFont)

public:
    EditorConfigFont(QWidget *parent = 0);

    void setup_ui(void);
    void setup_signals(void);
    void assembly(void);
    int apply_changes(void);

private slots:
    void on_monospace_applysize_state_changed(int i);

    void on_code_applysize_state_changed(int i);
    void on_code_applyindent_state_changed(int i);

    void on_code_select_color_button_click();

private:
    QLabel        *defaultFontselectLabel;
    QFontComboBox *defaultFontselect;
    QSpinBox      *defaultFontsize;

    QLabel        *monospaceFontselectLabel;
    QFontComboBox *monospaceFontselect;
    QCheckBox     *monospaceFontsizeapply;
    QSpinBox      *monospaceFontsize;

    QLabel        *codeFontselectLabel;
    QFontComboBox *codeFontselect;
    QCheckBox     *codeFontsizeapply;
    QSpinBox      *codeFontsize;
    QCheckBox     *codeIndentsizeapply;
    QSpinBox      *codeIndentsize;
    QLabel        *codeSelectColorLabel;
    FlatToolButton   *codeSelectColorButton;
    QColor        *codeColor;

    EditorConfig *conf;

};


#endif	// _EDITORCONFIGFONT_H_
