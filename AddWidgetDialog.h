#pragma once

#include <QDialog>
#include <QGridLayout>

#include <QLineEdit>
#include <QTimeEdit>
#include <QRadioButton>
#include <QSpinBox>

#include <QJsonObject>

#include <vector>


class AddWidgetDialog : public QDialog
{
Q_OBJECT

public:

	AddWidgetDialog(QWidget * parent);

	QJsonObject getJsonOutput() const { return m_JsonOutput; }

private:
	QGridLayout * m_RadioGridLayout;

	QLineEdit * m_NameInput;
	QLineEdit * m_DiceCodeInput;
	QTimeEdit * m_DurationInput;
	QSpinBox * m_CountDownInput;
	QLineEdit * m_SequenceInput;
	QLineEdit * m_SortitionInput;

	QJsonObject m_JsonOutput;
	QJsonObject m_RadioJson;

	QRadioButton * addRadio(QString name, QJsonObject result, QString description = "", QWidget * form = nullptr);
	void addSeparator();


public slots:
	void accept();


};


