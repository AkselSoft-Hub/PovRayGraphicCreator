/****************************************************************************
** Meta object code from reading C++ file 'fMainGUI.h'
**
** Created: Mon 20. Aug 10:06:34 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fMainGUI.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fMainGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fMainGUI[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      38,   24,    9,    9, 0x0a,
      75,    9,    9,    9, 0x0a,
      87,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_fMainGUI[] = {
    "fMainGUI\0\0closeMyForm()\0aItem,aColumn\0"
    "showPopupMenue(QTreeWidgetItem*,int)\0"
    "addPrElem()\0delPrElem()\0"
};

const QMetaObject fMainGUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_fMainGUI,
      qt_meta_data_fMainGUI, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fMainGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fMainGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fMainGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fMainGUI))
        return static_cast<void*>(const_cast< fMainGUI*>(this));
    return QDialog::qt_metacast(_clname);
}

int fMainGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: closeMyForm(); break;
        case 1: showPopupMenue((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: addPrElem(); break;
        case 3: delPrElem(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
