/****************************************************************************
** Meta object code from reading C++ file 'maincalc.h'
**
** Created: Sat 6. Nov 11:58:34 2021
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../maincalc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maincalc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainCalc[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      34,    9,    9,    9, 0x08,
      60,    9,    9,    9, 0x08,
      86,    9,    9,    9, 0x08,
     112,    9,    9,    9, 0x08,
     138,    9,    9,    9, 0x08,
     164,    9,    9,    9, 0x08,
     190,    9,    9,    9, 0x08,
     216,    9,    9,    9, 0x08,
     242,    9,    9,    9, 0x08,
     271,    9,    9,    9, 0x08,
     301,    9,    9,    9, 0x08,
     327,    9,    9,    9, 0x08,
     357,    9,    9,    9, 0x08,
     390,    9,    9,    9, 0x08,
     421,    9,    9,    9, 0x08,
     451,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainCalc[] = {
    "MainCalc\0\0on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_6_clicked()\0"
    "on_pushButton_7_clicked()\0"
    "on_pushButton_8_clicked()\0"
    "on_pushButton_9_clicked()\0"
    "on_pushButton_Plus_clicked()\0"
    "on_pushButton_Equal_clicked()\0"
    "on_pushButton_0_clicked()\0"
    "on_pushButton_Minus_clicked()\0"
    "on_pushButton_Multiply_clicked()\0"
    "on_pushButton_Divide_clicked()\0"
    "on_pushButton_Clear_clicked()\0"
    "on_pushButton_BackSpace_clicked()\0"
};

const QMetaObject MainCalc::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainCalc,
      qt_meta_data_MainCalc, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainCalc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainCalc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainCalc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainCalc))
        return static_cast<void*>(const_cast< MainCalc*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainCalc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: on_pushButton_2_clicked(); break;
        case 2: on_pushButton_3_clicked(); break;
        case 3: on_pushButton_4_clicked(); break;
        case 4: on_pushButton_5_clicked(); break;
        case 5: on_pushButton_6_clicked(); break;
        case 6: on_pushButton_7_clicked(); break;
        case 7: on_pushButton_8_clicked(); break;
        case 8: on_pushButton_9_clicked(); break;
        case 9: on_pushButton_Plus_clicked(); break;
        case 10: on_pushButton_Equal_clicked(); break;
        case 11: on_pushButton_0_clicked(); break;
        case 12: on_pushButton_Minus_clicked(); break;
        case 13: on_pushButton_Multiply_clicked(); break;
        case 14: on_pushButton_Divide_clicked(); break;
        case 15: on_pushButton_Clear_clicked(); break;
        case 16: on_pushButton_BackSpace_clicked(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
