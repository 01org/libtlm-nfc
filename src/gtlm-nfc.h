/* vi: set et sw=4 ts=4 cino=t0,(0: */
/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This file is part of libtlm-nfc
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

#ifndef __GTLM_NFC_H__
#define __GTLM_NFC_H__

#include <glib-object.h>

#define G_TYPE_TLM_NFC             (gtlm_nfc_get_type ())
#define GTLM_NFC(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_TLM_NFC, GTlmNfc))
#define G_IS_TLM_NFC(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_TLM_NFC))
#define GTLM_NFC_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), G_TYPE_TLM_NFC, GTlmNfcClass))
#define G_IS_TLM_NFC_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), G_TYPE_TLM_NFC))
#define GTLM_NFC_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), G_TYPE_TLM_NFC, GTlmNfcClass))


typedef struct _GTlmNfc        GTlmNfc;
typedef struct _GTlmNfcClass   GTlmNfcClass;

struct _GTlmNfc
{
    GObject parent_instance;
    
};

struct _GTlmNfcClass
{
    GObjectClass parent_class;
};

GType gtlm_nfc_get_type (void);

#endif /* __GTLM_NFC_H__ */