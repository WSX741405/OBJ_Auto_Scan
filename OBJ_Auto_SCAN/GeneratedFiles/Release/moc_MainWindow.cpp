/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/ui/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "OutputDialog"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "const char*"
QT_MOC_LITERAL(4, 37, 5), // "title"
QT_MOC_LITERAL(5, 43, 7), // "context"
QT_MOC_LITERAL(6, 51, 20), // "StartFlexxCameraSlot"
QT_MOC_LITERAL(7, 72, 17), // "StartRSCameraSlot"
QT_MOC_LITERAL(8, 90, 14), // "StopCameraSlot"
QT_MOC_LITERAL(9, 105, 28), // "SetCameraDepthConfidenceSlot"
QT_MOC_LITERAL(10, 134, 16), // "UpdateViewerSlot"
QT_MOC_LITERAL(11, 151, 43), // "boost::shared_ptr<pcl::PointC..."
QT_MOC_LITERAL(12, 195, 10), // "pointCloud"
QT_MOC_LITERAL(13, 206, 20), // "GetNumberOfBytesSlot"
QT_MOC_LITERAL(14, 227, 11), // "GetCharSlot"
QT_MOC_LITERAL(15, 239, 12), // "GetArraySlot"
QT_MOC_LITERAL(16, 252, 16), // "ControlMotorSlot"
QT_MOC_LITERAL(17, 269, 18), // "KeepPointCloudSlot"
QT_MOC_LITERAL(18, 288, 7), // "ICPSlot"
QT_MOC_LITERAL(19, 296, 19), // "TableItemChangeSlot"
QT_MOC_LITERAL(20, 316, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(21, 334, 4) // "item"

    },
    "MainWindow\0OutputDialog\0\0const char*\0"
    "title\0context\0StartFlexxCameraSlot\0"
    "StartRSCameraSlot\0StopCameraSlot\0"
    "SetCameraDepthConfidenceSlot\0"
    "UpdateViewerSlot\0"
    "boost::shared_ptr<pcl::PointCloud<PointT> >\0"
    "pointCloud\0GetNumberOfBytesSlot\0"
    "GetCharSlot\0GetArraySlot\0ControlMotorSlot\0"
    "KeepPointCloudSlot\0ICPSlot\0"
    "TableItemChangeSlot\0QTableWidgetItem*\0"
    "item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   84,    2, 0x0a /* Public */,
       7,    0,   85,    2, 0x0a /* Public */,
       8,    0,   86,    2, 0x0a /* Public */,
       9,    0,   87,    2, 0x0a /* Public */,
      10,    1,   88,    2, 0x0a /* Public */,
      13,    0,   91,    2, 0x0a /* Public */,
      14,    0,   92,    2, 0x0a /* Public */,
      15,    0,   93,    2, 0x0a /* Public */,
      16,    0,   94,    2, 0x0a /* Public */,
      17,    0,   95,    2, 0x0a /* Public */,
      18,    0,   96,    2, 0x0a /* Public */,
      19,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OutputDialog((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 1: _t->StartFlexxCameraSlot(); break;
        case 2: _t->StartRSCameraSlot(); break;
        case 3: _t->StopCameraSlot(); break;
        case 4: _t->SetCameraDepthConfidenceSlot(); break;
        case 5: _t->UpdateViewerSlot((*reinterpret_cast< boost::shared_ptr<pcl::PointCloud<PointT> >(*)>(_a[1]))); break;
        case 6: _t->GetNumberOfBytesSlot(); break;
        case 7: _t->GetCharSlot(); break;
        case 8: _t->GetArraySlot(); break;
        case 9: _t->ControlMotorSlot(); break;
        case 10: _t->KeepPointCloudSlot(); break;
        case 11: _t->ICPSlot(); break;
        case 12: _t->TableItemChangeSlot((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(const char * , const char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::OutputDialog)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::OutputDialog(const char * _t1, const char * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE