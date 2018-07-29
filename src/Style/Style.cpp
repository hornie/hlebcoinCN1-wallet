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

#include <QIcon>

#include "Style.h"

namespace WalletGui {

Style::Style(const QString& _styleId, const QString& _styleName) : m_styleId(_styleId), m_styleName(_styleName) {
}

Style::~Style() {
}

QString Style::getStyleId() const {
  return m_styleId;
}

QString Style::getStyleName() const {
  return m_styleName;
}

QString Style::fontFamily() const {
  return "Open Sans";
}

int Style::viewItemHeight() const {
  return 46;
}

QString Style::fontColorGray() const {
  return "#888888";
}

QString Style::fontColorGreen() const {
  return "#04be71";
}

QString Style::fontColorRed() const {
  return "#ef3131";
}

QString Style::fontColorYellowNormal() const {
  return "#0580e8";
}

QString Style::fontColorYellowHover() const {
  return "#005faf";
}

QString Style::fontColorYellowPressed() const {
  return "#0580e8";
}

QString Style::backgroundColorGray() const {
  return "#f4f4f4";
}

QString Style::backgroundButtonColorGrayHover() const {
  return "#fbfbfb";
}

QString Style::backgroundColorYellowNormal() const {
  return "#ffc53b";
}

QString Style::backgroundColorYellowHover() const {
  return "#ffcf5f";
}

QString Style::backgroundColorYellowPressed() const {
  return "#ffc53b";
}

QString Style::backgroundColorYellowDisabled() const {
  return "#7fffc53b";
}

QString Style::backgroundColorGrayNormal() const {
  return "#9e9e9e";
}

QString Style::backgroundColorGrayHover() const {
  return "#a8a8a8";
}

QString Style::backgroundColorGrayPressed() const {
  return "#bfbebe";
}

QString Style::backgroundColorGreen() const {
  return fontColorGreen();
}

QString Style::backgroundColorGreenHover() const {
  return "#56dd9c";
}

QString Style::backgroundColorAlternate() const {
  return "#f3f4f6";
}

QString Style::borderColor() const {
  return "#dddddd";
}

QString Style::borderColorDark() const {
  return "#bbbbbb";
}

QString Style::selectionColor() const {
  return "#ffca4e";
}

QString Style::glassColor() const {
  return "#eaffffff";
}

QIcon Style::getSystemTrayIcon() const {
#ifdef Q_OS_MAC
  return QIcon(":images/hleb_mac");
#elif defined(Q_OS_LINUX)
  return QIcon(":images/hleb_lin");
#elif defined(Q_OS_WIN)
  return QIcon(":images/hleb_win");
#endif
}

QString Style::makeStyleSheet(const QString& _styleSheetTemplate) const {
  QString styleSheet(_styleSheetTemplate);
  return styleSheet.
    replace("%fontFamily%", fontFamily()).
    replace("%currentTheme%", getStyleId()).
    replace("%viewItemHeight%", QString("%1px").arg(viewItemHeight())).
    replace("%fontSizeTiny%", QString("%1px").arg(static_cast<quint8>(FontSize::FONT_SMALL))).
    replace("%fontSizeSmall%", QString("%1px").arg(static_cast<quint8>(FontSize::FONT_SMALL))).
    replace("%fontSizeNormal%", QString("%1px").arg(static_cast<quint8>(FontSize::FONT_NORMAL))).
    replace("%fontSizeExtraNormal%", QString("%1px").arg(static_cast<quint8>(FontSize::FONT_EXTRA_NORMAL))).
    replace("%fontSizeLarge%", QString("%1px").arg(static_cast<quint8>(FontSize::FONT_LARGE))).
    replace("%fontSizeExtraLarge%", QString("%1px").arg(static_cast<quint8>(FontSize::FONT_EXTRA_LARGE))).
    replace("%fontSizeHuge%", QString("%1px").arg(static_cast<quint8>(FontSize::FONT_HUGE))).
    replace("%fontColorGray%", fontColorGray()).
    replace("%fontColorGreen%", fontColorGreen()).
    replace("%fontColorRed%", fontColorRed()).
    replace("%fontColorYellowNormal%", fontColorYellowNormal()).
    replace("%fontColorYellowHover%", fontColorYellowHover()).
    replace("%fontColorYellowPressed%", fontColorYellowPressed()).
    replace("%backgroundColorGray%", backgroundColorGray()).
    replace("%backgroundButtonColorGrayHover%", backgroundButtonColorGrayHover()).
    replace("%backgroundColorYellowNormal%", backgroundColorYellowNormal()).
    replace("%backgroundColorYellowHover%", backgroundColorYellowHover()).
    replace("%backgroundColorYellowPressed%", backgroundColorYellowPressed()).
    replace("%backgroundColorYellowDisabled%", backgroundColorYellowDisabled()).
    replace("%backgroundColorGrayNormal%", backgroundColorGrayNormal()).
    replace("%backgroundColorGrayHover%", backgroundColorGrayHover()).
    replace("%backgroundColorGrayPressed%", backgroundColorGrayPressed()).
    replace("%backgroundColorGreen%", backgroundColorGreen()).
    replace("%backgroundColorGreenHover%", backgroundColorGreenHover()).
    replace("%backgroundColorAlternate%", backgroundColorAlternate()).
    replace("%borderColor%", borderColor()).
    replace("%borderColorDark%", borderColorDark()).
    replace("%selectionColor%", selectionColor()).
    replace("%statusBarBackgroundColor%", statusBarBackgroundColor()).
    replace("%statusBarFontColor%", statusBarFontColor()).
    replace("%headerBackgroundColor%", headerBackgroundColor()).
    replace("%headerBorderColor%", headerBorderColor()).
    replace("%addressFontColor%", addressFontColor()).
    replace("%balanceFontColor%", balanceFontColor()).
    replace("%toolButtonBackgroundColorNormal%", toolButtonBackgroundColorNormal()).
    replace("%toolButtonBackgroundColorHover%", toolButtonBackgroundColorHover()).
    replace("%toolButtonBackgroundColorPressed%", toolButtonBackgroundColorPressed()).
    replace("%toolButtonFontColorNormal%", toolButtonFontColorNormal()).
    replace("%toolButtonFontColorDisabled%", toolButtonFontColorDisabled()).
    replace("%toolBarBorderColor%", toolBarBorderColor()).
    replace("%glassColor%", glassColor());
}

}
