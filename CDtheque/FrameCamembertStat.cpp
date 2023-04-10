#include "FrameCamembertStat.h"
#include <QtCharts>
#include <QMap>

FrameCamembertStat::FrameCamembertStat(CatalogueAlbum* albums, QWidget* widget): albums(albums), widget(widget)
{
  series = new QPieSeries();

  QChart* chart = new QChart();
  chart->addSeries(series);
  chart->setTitle(QString("Repartition des genres de musique"));
  chart->setAnimationOptions(QChart::SeriesAnimations);

  QChartView* chartView = new QChartView(chart);
  chartView->setRenderHint(QPainter::Antialiasing);

  QGridLayout* chartLayout = new QGridLayout;
  chartLayout->addWidget(chartView, 0, 0);
  chartLayout->setContentsMargins(0, 0, 0, 0);

  // update chart
  widget->setLayout(chartLayout);

  updateModel();
}


void FrameCamembertStat::updateModel()
{

	if (albums->valueChanged() == false) {
		return;
	}

  series->clear();
  QMap<QString, int> map;
  QString name;
  int nb;

  for (Album* a : this->albums->getAlbums()) {
	  name = a->getGenre();

	  if (map.contains(name)) {

		  nb = map.value(name) + 1;
		  map.insert(name, nb);
	  }
	  else {
		  map.insert(name, 1);
	  }
  }

  QMapIterator<QString, int> i(map);
  while (i.hasNext()) {
	  i.next();
	  series->append(i.key(), i.value());
  }


  widget->repaint();
}