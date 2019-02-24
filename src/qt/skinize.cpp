#include "skinize.h"
#include <QString>

QString Skinize()
{
    return "QDialog { border-image: url(:/icons/BTS); border: 0; }"
           "QStackedWidget { border-image: url(:/icons/BTS); border: 0 }"
           "QScrollArea { border-image: url(:/icons/BTS); border: 0 }"
            "#scrollAreaWidgetContents { border-image: url(:/icons/BTS); }"
           "#BG1_1 { border-image: url(:/icons/BTS); border-radius: 2px; }"
           "#BG1_2 { border-image: url(:/icons/BTS); border-radius: 2px; }"
           "#BG1_3 { border-image: url(:/icons/BTS); border-radius: 2px; border: 0px solid}"
           "#SendCoinsEntry { background: transparent; border-radius: 2px; border: 0px solid}"
           "#frameFee { background: transparent; border-radius: 2px; }"
           "#frame { background: transparent; border-radius: 2px; }"
           "#frame2 { background: transparent; border-radius: 2px; }"
           "#frameCoinControl { background: transparent; border-radius: 2px; }"
           "#noNavtechLabel { background: transparent; padding: 5px; border-radius: 5px}"
           "#frameReceivingAddress { background: #ffffff; border-radius: 2px; }"
           "QPushButton {  background: rgba(255,255,255,0.23); border: 1px solid #a9adc4; border-radius: 3px; padding: 6px; margin: 3px; text-transform: uppercase; color: #000000; font-size: 11px; font-weight: bold }"
           "QPushButton:hover {  background: rgba(255,255,255,0.5); border: 1px solid #a9adc4; border-radius: 3px; padding: 6px; margin: 3px; text-transform: uppercase; color: #000000; font-size: 11px; font-weight: bold }"
           "QPushButton:pressed {  background: rgba(255,255,255,0.9); border: 1px solid #a9adc4; border-radius: 3px; padding: 6px; margin: 3px; text-transform: uppercase; color: #000000; font-size: 11px; font-weight: bold }"
           "QLineEdit { background: #fff; border-radius: 4px; border: 1px solid #7d7d7d; padding:5px }"
           "#unlockStakingButton { background: url(:/icons/lock_closed); border: 0px; }"
           "QLabel { color: #000000 }"
           "QCheckBox { color: #000000 }";
}
