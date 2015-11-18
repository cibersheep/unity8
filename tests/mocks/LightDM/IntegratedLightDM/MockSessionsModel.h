/*
 * Copyright (C) 2015 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef MOCK_UNITY_SESSIONSMODEL_H
#define MOCK_UNITY_SESSIONSMODEL_H

#include <SessionsModel.h>

class MockSessionsModel : public SessionsModel
{
    Q_OBJECT

    Q_PROPERTY(QString testScenario READ testScenario WRITE setTestScenario)

public:
    QString testScenario() const;
    void setTestScenario(QString testScenario);

private:
    QString m_testScenario;
};

#endif // MOCK_UNITY_SESSIONSMODEL_H
