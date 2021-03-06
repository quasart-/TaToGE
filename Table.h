#pragma once

#include <QFrame>

#include "AddEquipmentDialog.h"


class Table : public QFrame
{
Q_OBJECT

public:
	Table(QWidget * parent = nullptr);

private:
	QGridLayout & m_Layout;
	QPushButton & m_AddButton;
	AddEquipmentDialog m_AddDialog;
	int m_RowCount;
	float m_FontSize;

public:

	void addRow(QWidget * w);
	void deleteRow(int row);

	void showAddDialog();
	void clearTable();

	bool loadJsonFile(QString filename);
	bool loadJson(QJsonDocument json_doc);

	QJsonDocument toJson() const;

	void updateFontSize();

protected:
	void wheelEvent(QWheelEvent *event) override;
	void resizeEvent(QResizeEvent* event) override;
	QSize sizeHint() const override;

};
