#include <final/final.h>

auto main (int argc, char* argv[]) -> int
{
  finalcut::FApplication app(argc, argv);
  finalcut::FMessageBox dialog(&app);
  const finalcut::FPoint position{15, 5};
  const finalcut::FSize size{10, 10};


  // New line
  const auto nl = finalcut::FString('\n');

  // Border spacing
  const auto spacing = finalcut::FString(5, ' ');

  // Line with unicode character "─" (U+2500/Box drawings horizontal)
  const auto line = finalcut::FString(13, L'\U00002500');

  // Set the message box text
  dialog.setText(nl + spacing + "Join the Discord!" + spacing + nl + line);

  // Center the text in the message box
  dialog.setCenterText();

  dialog.setGeometry (position, size);
  finalcut::FWidget::setMainWidget(&dialog);
  dialog.show();
  return app.exec();
}
