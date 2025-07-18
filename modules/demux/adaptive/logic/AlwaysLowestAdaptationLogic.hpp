/*
 * AlwaysLowestAdaptationLogic.hpp
 *****************************************************************************
 * Copyright (C) 2014 - VideoLAN and VLC authors
  *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/
#ifndef ALWAYSLOWESTADAPTATIONLOGIC_HPP
#define ALWAYSLOWESTADAPTATIONLOGIC_HPP

#include "AbstractAdaptationLogic.h"

namespace adaptive
{
    namespace logic
    {
        class AlwaysLowestAdaptationLogic : public AbstractAdaptationLogic
        {
            public:
                AlwaysLowestAdaptationLogic(vlc_object_t *);
                virtual ~AlwaysLowestAdaptationLogic() = default;

                BaseRepresentation* getNextRepresentation(BaseAdaptationSet *,
                                                          BaseRepresentation *) override;
        };
    }
}

#endif // ALWAYSLOWESTADAPTATIONLOGIC_HPP
