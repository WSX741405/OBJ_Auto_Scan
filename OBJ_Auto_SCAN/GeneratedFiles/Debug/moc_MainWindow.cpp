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
    QByteArrayData data[21];
    char stringdata0[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "UpdateViewerSlot"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 28), // "pcl::PointCloud<PointT>::Ptr"
QT_MOC_LITERAL(4, 58, 10), // "pointCloud"
QT_MOC_LITERAL(5, 69, 19), // "TableItemChangeSlot"
QT_MOC_LITERAL(6, 89, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(7, 107, 4), // "item"
QT_MOC_LITERAL(8, 112, 12), // "OpenFileSlot"
QT_MOC_LITERAL(9, 125, 12), // "SaveFileSlot"
QT_MOC_LITERAL(10, 138, 20), // "StartFlexxCameraSlot"
QT_MOC_LITERAL(11, 159, 17), // "StartRSCameraSlot"
QT_MOC_LITERAL(12, 177, 14), // "StopCameraSlot"
QT_MOC_LITERAL(13, 192, 28), // "SetCameraDepthConfidenceSlot"
QT_MOC_LITERAL(14, 221, 20), // "GetNumberOfBytesSlot"
QT_MOC_LITERAL(15, 242, 11), // "GetCharSlot"
QT_MOC_LITERAL(16, 254, 12), // "GetArraySlot"
QT_MOC_LITERAL(17, 267, 16), // "ControlMotorSlot"
QT_MOC_LITERAL(18, 284, 16), // "KeepOneFrameSlot"
QT_MOC_LITERAL(19, 301, 21), // "KeepContinueFrameSlot"
QT_MOC_LITERAL(20, 323, 13) // "KeepFrameSlot"

    },
    "MainWindow\0UpdateViewerSlot\0\0"
    "pcl::PointCloud<PointT>::Ptr\0pointCloud\0"
    "TableItemChangeSlot\0QTableWidgetItem*\0"
    "item\0OpenFileSlot\0SaveFileSlot\0"
    "StartFlexxCameraSlot\0StartRSCameraSlot\0"
    "StopCameraSlot\0SetCameraDepthConfidenceSlot\0"
    "GetNumberOfBytesSlot\0GetCharSlot\0"
    "GetArraySlot\0ControlMotorSlot\0"
    "KeepOneFrameSlot\0KeepContinueFrameSlot\0"
    "KeepFrameSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a /* Public */,
       5,    1,   92,    2, 0x0a /* Public */,
       8,    0,   95,    2, 0x0a /* Public */,
       9,    0,   96,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    0,   99,    2, 0x0a /* Public */,
      13,    0,  100,    2, 0x0a /* Public */,
      14,    0,  101,    2, 0x0a /* Public */,
      15,    0,  102,    2, 0x0a /* Public */,
      16,    0,  103,    2, 0x0a /* Public */,
      17,    0,  104,    2, 0x0a /* Public */,
      18,    0,  105,    2, 0x0a /* Public */,
      19,    0,  106,    2, 0x0a /* Public */,
      20,    1,  107,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateViewerSlot((*reinterpret_cast< pcl::PointCloud<PointT>::Ptr(*)>(_a[1]))); break;
        case 1: _t->TableItemChangeSlot((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->OpenFileSlot(); break;
        case 3: _t->SaveFileSlot(); break;
        case 4: _t->StartFlexxCameraSlot(); break;
        case 5: _t->StartRSCameraSlot(); break;
        case 6: _t->StopCameraSlot(); break;
        case 7: _t->SetCameraDepthConfidenceSlot(); break;
        case 8: _t->GetNumberOfBytesSlot(); break;
        case 9: _t->GetCharSlot(); break;
        case 10: _t->GetArraySlot(); break;
        case 11: _t->ControlMotorSlot(); break;
        case 12: _t->KeepOneFrameSlot(); break;
        case 13: _t->KeepContinueFrameSlot(); break;
        case 14: _t->KeepFrameSlot((*reinterpret_cast< pcl::PointCloud<PointT>::Ptr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pcl::PointCloud<PointT>::Ptr >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pcl::PointCloud<PointT>::Ptr >(); break;
            }
            break;
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
