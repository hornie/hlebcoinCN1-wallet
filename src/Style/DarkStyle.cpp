// Copyright (c) 2015-2017, The Bytecoin developers
//
// This file is part of Bytecoin.
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

#include "DarkStyle.h"

namespace WalletGui {

DarkStyle::DarkStyle() : Style("light", "Light") {

}

QString DarkStyle::statusBarBackgroundColor() const {
  return "#e7e7e7";
}

QString DarkStyle::statusBarFontColor() const {
  return "#000000";
}

QString DarkStyle::headerBackgroundColor() const {
  return "#e7e7e7";
}

QString DarkStyle::headerBorderColor() const {
  return "#dddddd";
}

QString DarkStyle::addressFontColor() const {
  return "#000000";
}

QString DarkStyle::balanceFontColor() const {
  return "#000000";
}

QString DarkStyle::toolButtonBackgroundColorNormal() const {
  return "#edf0f7";
}

QString DarkStyle::toolButtonBackgroundColorHover() const {
  return "#d1deeb";
}

QString DarkStyle::toolButtonBackgroundColorPressed() const {
  return "#ffca4e";
}

QString DarkStyle::toolButtonFontColorNormal() const {
  return "#000000";
}

QString DarkStyle::toolButtonFontColorDisabled() const {
  return "#4d000000";
}

QString DarkStyle::toolBarBorderColor() const {
  return "#dddddd";
}

QString DarkStyle::getWalletSyncGifFile() const {
  return QString(":icons/light/wallet-sync");
}

QPixmap DarkStyle::getLogoPixmap() const {
  return QPixmap(QString(":icons/light/logo"));
}

QPixmap DarkStyle::getBalanceIcon() const {
  return QPixmap(QString(":icons/light/balance"));
}

QPixmap DarkStyle::getConnectedIcon() const {
  return QPixmap(QString(":icons/light/connected"));
}

QPixmap DarkStyle::getDisconnectedIcon() const {
  return QPixmap(QString(":icons/light/disconnected"));
}

QPixmap DarkStyle::getEncryptedIcon() const {
  return QPixmap(QString(":icons/light/encrypted"));
}

QPixmap DarkStyle::getNotEncryptedIcon() const {
  return QPixmap(QString(":icons/light/decrypted"));
}

QPixmap DarkStyle::getSyncedIcon() const {
  return QPixmap(QString(":icons/light/synced"));
}

}
