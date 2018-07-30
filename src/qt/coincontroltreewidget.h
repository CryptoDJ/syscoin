// Copyright (c) 2011-2014 The Bitcoin Core developers
// Copyright (c) 2014-2016 The Syscoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SYSCOIN_QT_COINCONTROLTREEWIDGET_H
#define SYSCOIN_QT_COINCONTROLTREEWIDGET_H

#include <QKeyEvent>
#include <QTreeWidget>

class CoinControlTreeWidget : public QTreeWidget
{
    Q_OBJECT

public:
    explicit CoinControlTreeWidget(QWidget *parent = 0);

protected:
    virtual void keyPressEvent(QKeyEvent *event) override;
};

#endif // SYSCOIN_QT_COINCONTROLTREEWIDGET_H
