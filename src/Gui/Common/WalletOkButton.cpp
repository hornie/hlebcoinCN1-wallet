// Copyright (c) 2015-2017, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// HLEB is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// HLEB is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with HLEB.  If not, see <http://www.gnu.org/licenses/>.

#include "WalletOkButton.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const char WALLET_OK_BUTTON_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--WalletOkButton {"
    "min-width: 80px;"
    "max-width: 80px;"
    "min-height: 30px;"
    "max-height: 30px;"
    "font-size: %fontSizeNormal%;"
    "color: #ffffff;"
    "background-color: %backgroundColorYellowNormal%;"
    "border: 1px solid %backgroundColorYellowNormal%;"
  "}"

  "WalletGui--WalletOkButton:disabled {"
    "background-color: %backgroundColorYellowDisabled%;"
    "border: 1px solid %backgroundColorYellowDisabled%;"
  "}"

  "WalletGui--WalletOkButton:hover {"
    "background-color: %backgroundColorYellowHover%;"
    "border: 1px solid %backgroundColorYellowHover%;"
  "}"

  "WalletGui--WalletOkButton:pressed {"
    "background-color: %backgroundColorYellowPressed%;"
    "border: 1px solid %backgroundColorYellowPressed%;"
  "}";

}

WalletOkButton::WalletOkButton(QWidget* _parent) : QPushButton(_parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(WALLET_OK_BUTTON_STYLE_SHEET_TEMPLATE));
}

WalletOkButton::~WalletOkButton() {
}

}
