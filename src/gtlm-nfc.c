/* vi: set et sw=4 ts=4 cino=t0,(0: */
/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This file is part of gtlm-nfc
 *
 * Copyright (C) 2013 Intel Corporation.
 *
 * Contact: Alexander Kanavin <alex.kanavin@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */

#include "gtlm-nfc.h"

/**
 * SECTION:gtlm-nfc
 * @short_description: a helper object that provides NFC functionality to user management code
 * @include: gtlm-nfc.h
 *
 * #GTlmNfc is used in ... //FIXME
 */
/**
 * GTlmNfc:
 *
 * Opaque #GTlmNfc data structure.
 */
/**
 * GTlmNfcClass:
 * @parent_class: the parent class structure
 *
 * Opaque #GTlmNfcClass data structure.
 */

G_DEFINE_TYPE_WITH_CODE (GTlmNfc, gtlm_nfc, 
                         G_TYPE_OBJECT,
                         );

static void
gtlm_nfc_init (GTlmNfc *self)
{
    
    
}

enum
{
    PROP_0
    
};

static void
gtlm_nfc_set_property (GObject      *object,
                                       guint         property_id,
                                       const GValue *value,
                                       GParamSpec   *pspec)
{
    switch (property_id)
    {
        default:
            G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
            break;
    }
}

static void
gtlm_nfc_get_property (GObject    *object,
                                       guint       prop_id,
                                       GValue     *value,
                                       GParamSpec *pspec)
{
    GTlmNfc *tlm_nfc = GTLM_NFC (object);
    (void) tlm_nfc;
    switch (prop_id)
    {
            
        default:
            G_OBJECT_WARN_INVALID_PROPERTY_ID (object, prop_id, pspec);
            break;
    }
}

static void
gtlm_nfc_class_init (GTlmNfcClass *klass)
{
    GObjectClass *gobject_class = G_OBJECT_CLASS (klass);
    
    gobject_class->set_property = gtlm_nfc_set_property;
    gobject_class->get_property = gtlm_nfc_get_property;
    
}
