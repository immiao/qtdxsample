#ifndef QTDXSAMPLE_H
#define QTDXSAMPLE_H

#include <QtGui/QMainWindow>
#include <QtCore/QTimer>
#include <QtGui/QHBoxLayout>
#include <QtGui/QTreeWidget>

#include "ui_qtdxsample.h"
#include "../GUI/attrfactory.h"
#include "../GUI/ctkCollapsibleGroupBox.h"
#include "../GUI/ctkColorPickerButton.h"

__declspec(align(16)) class QtDXSample : public QMainWindow
{
	Q_OBJECT

public:
	QtDXSample(QWidget *parent = 0, Qt::WFlags flags = 0);
	~QtDXSample();

	void	setVisible(bool);

private slots:
	void	idle();
	void	toggleAnimation( bool pressed );

private:

	//! Elapsed Time
	float	m_fTime;

	//! Timer
	QTimer	m_timer;

	Ui::QtDXSampleClass ui;
};

#endif // QTDXSAMPLE_H
