/****************************************************************************
** Meta object code from reading C++ file 'userWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../userWindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSuserWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSuserWindowENDCLASS = QtMocHelpers::stringData(
    "userWindow",
    "close_w",
    "",
    "std::string",
    "user_mail",
    "back",
    "show_pet_list_page",
    "show_specific_breed_page",
    "show_adoption_list_page",
    "previous_pet",
    "next_pet",
    "next_specific_breed",
    "previous_specific_breed",
    "search_breed",
    "adopt_current",
    "remove_selected_adoption",
    "close_window"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSuserWindowENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[11];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[10];
    char stringdata5[5];
    char stringdata6[19];
    char stringdata7[25];
    char stringdata8[24];
    char stringdata9[13];
    char stringdata10[9];
    char stringdata11[20];
    char stringdata12[24];
    char stringdata13[13];
    char stringdata14[14];
    char stringdata15[25];
    char stringdata16[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSuserWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSuserWindowENDCLASS_t qt_meta_stringdata_CLASSuserWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "userWindow"
        QT_MOC_LITERAL(11, 7),  // "close_w"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 11),  // "std::string"
        QT_MOC_LITERAL(32, 9),  // "user_mail"
        QT_MOC_LITERAL(42, 4),  // "back"
        QT_MOC_LITERAL(47, 18),  // "show_pet_list_page"
        QT_MOC_LITERAL(66, 24),  // "show_specific_breed_page"
        QT_MOC_LITERAL(91, 23),  // "show_adoption_list_page"
        QT_MOC_LITERAL(115, 12),  // "previous_pet"
        QT_MOC_LITERAL(128, 8),  // "next_pet"
        QT_MOC_LITERAL(137, 19),  // "next_specific_breed"
        QT_MOC_LITERAL(157, 23),  // "previous_specific_breed"
        QT_MOC_LITERAL(181, 12),  // "search_breed"
        QT_MOC_LITERAL(194, 13),  // "adopt_current"
        QT_MOC_LITERAL(208, 24),  // "remove_selected_adoption"
        QT_MOC_LITERAL(233, 12)   // "close_window"
    },
    "userWindow",
    "close_w",
    "",
    "std::string",
    "user_mail",
    "back",
    "show_pet_list_page",
    "show_specific_breed_page",
    "show_adoption_list_page",
    "previous_pet",
    "next_pet",
    "next_specific_breed",
    "previous_specific_breed",
    "search_breed",
    "adopt_current",
    "remove_selected_adoption",
    "close_window"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSuserWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   95,    2, 0x0a,    3 /* Public */,
       6,    0,   96,    2, 0x0a,    4 /* Public */,
       7,    0,   97,    2, 0x0a,    5 /* Public */,
       8,    0,   98,    2, 0x0a,    6 /* Public */,
       9,    0,   99,    2, 0x0a,    7 /* Public */,
      10,    0,  100,    2, 0x0a,    8 /* Public */,
      11,    0,  101,    2, 0x0a,    9 /* Public */,
      12,    0,  102,    2, 0x0a,   10 /* Public */,
      13,    0,  103,    2, 0x0a,   11 /* Public */,
      14,    0,  104,    2, 0x0a,   12 /* Public */,
      15,    0,  105,    2, 0x0a,   13 /* Public */,
      16,    0,  106,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
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

       0        // eod
};

Q_CONSTINIT const QMetaObject userWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSuserWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSuserWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSuserWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<userWindow, std::true_type>,
        // method 'close_w'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'back'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_pet_list_page'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_specific_breed_page'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_adoption_list_page'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'previous_pet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'next_pet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'next_specific_breed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'previous_specific_breed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'search_breed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'adopt_current'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'remove_selected_adoption'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_window'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void userWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<userWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->close_w((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        case 1: _t->back(); break;
        case 2: _t->show_pet_list_page(); break;
        case 3: _t->show_specific_breed_page(); break;
        case 4: _t->show_adoption_list_page(); break;
        case 5: _t->previous_pet(); break;
        case 6: _t->next_pet(); break;
        case 7: _t->next_specific_breed(); break;
        case 8: _t->previous_specific_breed(); break;
        case 9: _t->search_breed(); break;
        case 10: _t->adopt_current(); break;
        case 11: _t->remove_selected_adoption(); break;
        case 12: _t->close_window(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (userWindow::*)(std::string );
            if (_t _q_method = &userWindow::close_w; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *userWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *userWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSuserWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Observer"))
        return static_cast< Observer*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int userWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void userWindow::close_w(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
