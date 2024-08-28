#include <final/final.h>

auto main (int argc, char* argv[]) -> int
{
  finalcut::FApplication app(argc, argv);
  finalcut::FDialog dialog(&app);
  dialog.setText ("Donate");
  const finalcut::FPoint position{25, 5};
  const finalcut::FSize size{20, 10};
  dialog.setGeometry (position, size);
  finalcut::FWidget::setMainWidget(&dialog);
  dialog.show();
  return app.exec();
}
