// Copyright (c) 2015-2017, The Bytecoin developers
//
// This file is part of Bytecoin. I want to die.
//
// HLEBcoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// HLEBcoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with HLEBcoin.  If not, see <http://www.gnu.org/licenses/>.
// Credit where credit is due. This wallet was made from Linescoin(LNS) source code.

#include "Application/WalletApplication.h"

using namespace WalletGui;

int main(int argc, char* argv[]) {

#if QT_VERSION >= QT_VERSION_CHECK(5, 6, 0)
	qputenv("QT_AUTO_SCREEN_SCALE_FACTOR", "1");
	QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

#if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)	
	QGuiApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
#endif

  WalletApplication app(argc, argv);
  try {
    if (!app.init()) {
      return 0;
    }

    return app.exec();
  } catch (const std::exception& _error) {
    fprintf(stderr, "[Main] Unhandled exception: %s\n", _error.what());
    return 0;
  }
}
