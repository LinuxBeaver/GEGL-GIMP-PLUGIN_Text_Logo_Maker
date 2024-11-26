/* This file is an image processing operation for GEGL
 *
 * GEGL is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * GEGL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with GEGL; if not, see <https://www.gnu.org/licenses/>.
 *
 * Copyright 2006 Øyvind Kolås <pippin@gimp.org>
 * 2024, beaver, logo

optionally put graph here

]

end of syntax
 */

#include "config.h"
#include <glib/gi18n-lib.h>

#ifdef GEGL_PROPERTIES

/*Properties go here*/

enum_start (outline_deluxe_listlogo)
   enum_value (DEFAULT_OUTLINE,    "outline",    N_("Outline"))
   enum_value (BEVEL_OUTLINE,  "bevel",  N_("Bevel Outline"))
enum_end (outlinedeluxelistlogo)


enum_start (f_bevel_outline_logo1)
  enum_value (GEGL_BLEND_MODE_TYPE_HARDLIGHT1, "hardlight",
              N_("HardLight"))
  enum_value (GEGL_BLEND_MODE_TYPE_MULTIPLY1,      "multiply",
              N_("Multiply"))
  enum_value (GEGL_BLEND_MODE_TYPE_COLORDODGE1,      "colordodge",
              N_("ColorDodge"))
  enum_value (GEGL_BLEND_MODE_TYPE_PLUS1,      "plus",
              N_("Plus"))
  enum_value (GEGL_BLEND_MODE_TYPE_DARKEN1,      "darken",
              N_("Darken"))
  enum_value (GEGL_BLEND_MODE_TYPE_LIGHTEN1,      "lighten",
              N_("Lighten"))
  enum_value (GEGL_BLEND_MODE_TYPE_OVERLAY1,      "overlay",
              N_("Overlay"))
  enum_value (GEGL_BLEND_MODE_TYPE_GRAINMERGE1,      "grainMerge",
              N_("Grain Merge"))
  enum_value (GEGL_BLEND_MODE_TYPE_SOFTLIGHT1,      "softlight",
              N_("Soft Light"))
  enum_value (GEGL_BLEND_MODE_TYPE_ADDITION1,      "addition",
              N_("Addition"))
enum_end (fbeveloutlinelogo1)


enum_start (f_bevel_outline_logo)
  enum_value (GEGL_BLEND_MODE_TYPE_HARDLIGHT2, "hardlight",
              N_("HardLight"))
  enum_value (GEGL_BLEND_MODE_TYPE_MULTIPLY2,      "multiply",
              N_("Multiply"))
  enum_value (GEGL_BLEND_MODE_TYPE_COLORDODGE2,      "colordodge",
              N_("ColorDodge"))
  enum_value (GEGL_BLEND_MODE_TYPE_PLUS2,      "plus",
              N_("Plus"))
  enum_value (GEGL_BLEND_MODE_TYPE_DARKEN2,      "darken",
              N_("Darken"))
  enum_value (GEGL_BLEND_MODE_TYPE_LIGHTEN2,      "lighten",
              N_("Lighten"))
  enum_value (GEGL_BLEND_MODE_TYPE_OVERLAY2,      "overlay",
              N_("Overlay"))
  enum_value (GEGL_BLEND_MODE_TYPE_GRAINMERGE2,      "grainMerge",
              N_("Grain Merge"))
  enum_value (GEGL_BLEND_MODE_TYPE_SOFTLIGHT2,      "softlight",
              N_("Soft Light"))
  enum_value (GEGL_BLEND_MODE_TYPE_ADDITION2,      "addition",
              N_("Addition"))
enum_end (fbeveloutlinelogo)

enum_start (inner_glow_type_logo)
  enum_value (NOINNERGLOW, "none",
              N_("No Inner Glow"))
  enum_value (STANDARD,      "standard",
              N_("Standard Inner Glow"))
  enum_value (GRAINY,      "grainy",
              N_("Grainy Inner Glow"))
enum_end (innerglowtypelogo)

enum_start (gegl_blend_mode_type_effectsigzzlogo)
  enum_value (GEGL_BLEND_MODE_TYPE_NORMALIG,      "normal",
              N_("Normal"))
  enum_value (GEGL_BLEND_MODE_TYPE_GRAINMERGEIG,      "grainmerge",
              N_("Grain Merge"))
  enum_value (GEGL_BLEND_MODE_TYPE_ADDITIONIG,      "addition",
              N_("Addition"))
  enum_value (GEGL_BLEND_MODE_TYPE_SCREENIG,      "screen",
              N_("Screen"))
  enum_value (GEGL_BLEND_MODE_TYPE_MULTIPLYIG,      "multiply",
              N_("Multiply"))
  enum_value (GEGL_BLEND_MODE_TYPE_HSLCOLORIG,      "hslcolor",
              N_("HSL Color"))
  enum_value (GEGL_BLEND_MODE_TYPE_OVERLAYIG,      "overlay",
              N_("Overlay"))
  enum_value (GEGL_BLEND_MODE_TYPE_LINEARLIGHTIG,      "linearlight",
              N_("Linear Light"))
  enum_value (GEGL_BLEND_MODE_TYPE_HARDLIGHTIG,      "hardlight",
              N_("HardLight"))
  enum_value (GEGL_BLEND_MODE_TYPE_LCHCOLORIG,      "lchcolor",
              N_("LCh Color"))
  enum_value (GEGL_BLEND_MODE_TYPE_HUEIG,      "hue",
              N_("HSV Hue"))
enum_end (GeglBlendModeTypeigzzlogo)


enum_start (gegl_blend_mode_typecbevellogo)
  enum_value (GEGL_BLEND_MODE_TYPE_HARDLIGHT, "hardlight",
              N_("HardLight"))
  enum_value (GEGL_BLEND_MODE_TYPE_MULTIPLY,      "multiply",
              N_("Multiply"))
  enum_value (GEGL_BLEND_MODE_TYPE_COLORDODGE,      "colordodge",
              N_("ColorDodge"))
  enum_value (GEGL_BLEND_MODE_TYPE_PLUS,      "plus",
              N_("Plus"))
  enum_value (GEGL_BLEND_MODE_TYPE_DARKEN,      "darken",
              N_("Darken"))
  enum_value (GEGL_BLEND_MODE_TYPE_LIGHTEN,      "lighten",
              N_("Lighten"))
  enum_value (GEGL_BLEND_MODE_TYPE_OVERLAY,      "overlay",
              N_("Overlay"))
  enum_value (GEGL_BLEND_MODE_TYPE_GRAINMERGE,      "grainmerge",
              N_("Grain Merge"))
  enum_value (GEGL_BLEND_MODE_TYPE_SOFTLIGHT,      "softlight",
              N_("Soft Light"))
  enum_value (GEGL_BLEND_MODE_TYPE_ADDITION,      "addition",
              N_("Addition"))
enum_end (GeglBlendModeTypecbevellogo)

enum_start (Gegl_Bevel_Type_Logo)
  enum_value (NOBEVEL, "none",
              N_("No Bevel"))
  enum_value (CBEVEL,      "custombevel",
              N_("Standard Bevel"))
  enum_value (SBEVEL,      "sharpbevel",
              N_("Sharp Bevel"))
  enum_value (RBEVEL,      "ringbevel",
              N_("Ring Bevel"))
enum_end (GeglBevelTypeLogo)

/*
enum_start (gegl_blend_mode_typecbevellogo2)
  enum_value (GEGL_BLEND_MODE_TYPE_HARDLIGHT, "Hardlight",
              N_("HardLight"))
  enum_value (GEGL_BLEND_MODE_TYPE_MULTIPLY,      "Multiply",
              N_("Multiply"))
  enum_value (GEGL_BLEND_MODE_TYPE_COLORDODGE,      "ColorDodge",
              N_("ColorDodge"))
  enum_value (GEGL_BLEND_MODE_TYPE_PLUS,      "Plus",
              N_("Plus"))
  enum_value (GEGL_BLEND_MODE_TYPE_DARKEN,      "Darken",
              N_("Darken"))
  enum_value (GEGL_BLEND_MODE_TYPE_LIGHTEN,      "Lighten",
              N_("Lighten"))
  enum_value (GEGL_BLEND_MODE_TYPE_OVERLAY,      "Overlay",
              N_("Overlay"))
  enum_value (GEGL_BLEND_MODE_TYPE_GRAINMERGE,      "GrainMerge",
              N_("Grain Merge"))
  enum_value (GEGL_BLEND_MODE_TYPE_SOFTLIGHT,      "Softlight",
              N_("Soft Light"))
  enum_value (GEGL_BLEND_MODE_TYPE_ADDITION,      "Addition",
              N_("Addition"))
enum_end (GeglBlendModeTypecbevellogo2)

enum_start (gegl_blend_mode_typecbevellogo3)
  enum_value (GEGL_BLEND_MODE_TYPE_HARDLIGHT, "Hardlight",
              N_("HardLight"))
  enum_value (GEGL_BLEND_MODE_TYPE_MULTIPLY,      "Multiply",
              N_("Multiply"))
  enum_value (GEGL_BLEND_MODE_TYPE_COLORDODGE,      "ColorDodge",
              N_("ColorDodge"))
  enum_value (GEGL_BLEND_MODE_TYPE_PLUS,      "Plus",
              N_("Plus"))
  enum_value (GEGL_BLEND_MODE_TYPE_DARKEN,      "Darken",
              N_("Darken"))
  enum_value (GEGL_BLEND_MODE_TYPE_LIGHTEN,      "Lighten",
              N_("Lighten"))
  enum_value (GEGL_BLEND_MODE_TYPE_OVERLAY,      "Overlay",
              N_("Overlay"))
  enum_value (GEGL_BLEND_MODE_TYPE_GRAINMERGE,      "GrainMerge",
              N_("Grain Merge"))
  enum_value (GEGL_BLEND_MODE_TYPE_SOFTLIGHT,      "Softlight",
              N_("Soft Light"))
  enum_value (GEGL_BLEND_MODE_TYPE_ADDITION,      "Addition",
              N_("Addition"))
enum_end (GeglBlendModeTypecbevellogo3)
*/



enum_start (gegl_gimplayershadow_grow_shapelogo2)
  enum_value (GEGL_DROPSHADOW_GROW_SHAPE_SQUARE2,  "square",  N_("Square"))
  enum_value (GEGL_DROPSHADOW_GROW_SHAPE_CIRCLE2,  "circle",  N_("Circle"))
  enum_value (GEGL_DROPSHADOW_GROW_SHAPE_DIAMOND2, "diamond", N_("Diamond"))
enum_end (GeglgimplayershadowGrowShapelogo2)

enum_start (gegl_stroke_grow_shapeoutlinelogo)
  enum_value (GEGL_stroke_GROW_SHAPE_SQUARE2,  "square",  N_("Square"))
  enum_value (GEGL_stroke_GROW_SHAPE_CIRCLE2,  "circle",  N_("Circle"))
  enum_value (GEGL_stroke_GROW_SHAPE_DIAMOND2, "diamond", N_("Diamond"))
enum_end (GeglstrokeGrowShapeoutlinelogo)

enum_start (gegl_stroke_grow_shapeoutlinelogo2)
  enum_value (GEGL_stroke_GROW_SHAPE_SQUARE,  "square",  N_("Square"))
  enum_value (GEGL_stroke_GROW_SHAPE_CIRCLE,  "circle",  N_("Circle"))
  enum_value (GEGL_stroke_GROW_SHAPE_DIAMOND, "diamond", N_("Diamond"))
enum_end (GeglstrokeGrowShapeoutlinelogo2)

enum_start (gegl_gimplayershadow_grow_shapelogo)
  enum_value (GEGL_DROPSHADOW_GROW_SHAPE_SQUARE,  "square",  N_("Square"))
  enum_value (GEGL_DROPSHADOW_GROW_SHAPE_CIRCLE,  "circle",  N_("Circle"))
  enum_value (GEGL_DROPSHADOW_GROW_SHAPE_DIAMOND, "diamond", N_("Diamond"))
enum_end (GeglgimplayershadowGrowShapelogo)


enum_start (logodisplay)
enum_value   (MAINLOGO, "main", N_("Main"))
enum_value   (BEVELIGLOGO, "bevelinnerglow", N_("Bevel Inner Glow"))
enum_value   (OUTLINEBEVELLOGO, "outlinebevel", N_("Outline Bevel"))
enum_value   (EXTRAOUTLINELOGO, "extraoutline", N_("Extra Outline"))
enum_value   (GLASSLOGO, "glass", N_("Glass Over Text"))
enum_value   (SHADOWLOGO, "shadow", N_("Shadow and Aura"))
  enum_end (endoflistlogo)


property_enum(guichange, _("Part of filter to be displayed"),
    endoflistlogo, logodisplay,
    MAINLOGO)
  description(_("Display a different part of the GUI"))

property_boolean (enablecolor, _("Enable Color fill"), FALSE)
  description    (_("Turn on color fill"))
ui_meta ("visible", "guichange {main}")

property_color (color, _("Color Overlay"), "#ffffff")
ui_meta ("visible", "guichange {main}")

property_boolean (enableoutline1, _("Enable Outline 1"), FALSE)
  description    (_("Turn on Outline 1"))
ui_meta ("visible", "guichange {main}")



property_enum   (outlinegrow_shape, _("Outline Grow shape"),
                 GeglstrokeGrowShapeoutlinelogo, gegl_stroke_grow_shapeoutlinelogo,
                 GEGL_stroke_GROW_SHAPE_CIRCLE2)
  description   (_("The shape to expand or contract the stroke in"))
ui_meta ("visible", "guichange {main}")

property_color (outlinecolor, _("Outline Color"), "#ff0000")
ui_meta ("visible", "guichange {main}")

property_double (outlinestroke, _("Grow radius of Outline"), 9.0)
  value_range   (0, 100.0)
  ui_range      (0, 50.0)
  ui_digits     (0)
  ui_steps      (1, 5)
  ui_gamma      (1.5)
  ui_meta       ("unit", "pixel-distance")
  description (_("The distance to expand the outline."))
ui_meta ("visible", "guichange {main}")

property_int  (outlineradius, _("Make the Outline go inward or outward"), 1)
  value_range (-250, 10)
  ui_range    (-20, 2)
  description (_("Instruct the outline to go inward or outward."))
ui_meta ("visible", "guichange {main}")

property_double (outlineblurstroke, _("Blur radius of Outline"), 0.0)
  value_range   (0, 1000.0)
  ui_range      (0, 10.0)
  ui_digits     (0)
  ui_steps      (1, 5)
  ui_gamma      (1.5)
  ui_meta       ("unit", "pixel-distance")
  description (_("The distance of the shadow glow effect"))
ui_meta ("visible", "guichange {main}")

property_double (outlineopacity, _("Opacity of Outline"), 2)
  value_range   (1.0, 2.0)
  ui_steps      (1.0, 2.0)
ui_meta ("visible", "guichange {main}")


property_enum (beveltype, _("Type of Bevel"),
    GeglBevelTypeLogo, Gegl_Bevel_Type_Logo,
    NOBEVEL)
ui_meta ("visible", "guichange {bevelinnerglow}")


property_enum (bevelblendmode, _("Blend Mode of Internal Emboss"),
    GeglBlendModeTypecbevellogo, gegl_blend_mode_typecbevellogo,
    GEGL_BLEND_MODE_TYPE_HARDLIGHT)
ui_meta ("visible", "guichange {bevelinnerglow}")

property_int  (bevelradius, _("Size Control"), 0)
  value_range (0, 10)
  ui_range    (0, 10)
  ui_meta     ("unit", "pixel-distance")
  description (_("Median Radius for size control of the bevels"))
ui_meta ("visible", "guichange {bevelinnerglow}")
    ui_meta     ("role", "output-extent")



property_double (azimuth, _("Azimuth"), 67.0)
    description (_("Light angle (degrees)"))
    value_range (30, 90)
    ui_meta ("unit", "degree")
    ui_meta ("direction", "ccw")
ui_meta ("visible", "guichange {bevelinnerglow}")

property_double (elevation, _("Elevation"), 25.0)
    description (_("Elevation angle (degrees)"))
    value_range (7, 90)
    ui_meta ("unit", "degree")
ui_meta ("visible", "guichange {bevelinnerglow}")

property_int (depth, _("Depth and or detail"), 24)
    description (_("Brings out depth and or detail of the bevel depending on the blend mode"))
    value_range (1, 100)
ui_meta ("visible", "guichange {bevelinnerglow}")



property_enum (innerglowtype, _("Type of Inner Glow"),
    innerglowtypelogo, inner_glow_type_logo,
    NOINNERGLOW)
ui_meta ("visible", "guichange {bevelinnerglow}")

property_enum (innerglowblendmode, _("Blend Mode of Inner Glow"),
    GeglBlendModeTypeigzzlogo, gegl_blend_mode_type_effectsigzzlogo,
    GEGL_BLEND_MODE_TYPE_NORMALIG)
ui_meta ("visible", "guichange {bevelinnerglow}")

property_color (innerglowcolor, _("Color"), "#ff9e00")
    description (_("The color to paint over the input"))
ui_meta ("visible", "guichange {bevelinnerglow}")


property_double (innerglowx, _("X"), 0.0)
  description   (_("Horizontal shadow offset"))
  ui_range      (-20.0, 20.0)
  value_range   (-20.0, 20.0)
  ui_steps      (1, 2)
  ui_meta       ("axis", "x")
ui_meta ("visible", "guichange {bevelinnerglow}")

property_double (innerglowy, _("Y"), 0.0)
  description   (_("Vertical shadow offset"))
  ui_range      (-20.0, 20.0)
  value_range   (-20.0, 20.0)
  ui_steps      (1, 2)
  ui_meta       ("axis", "y")
ui_meta ("visible", "guichange {bevelinnerglow}")

property_double (innerglowradius, _("Blur radius"), 9)
  value_range   (0.0, 60.0)
  ui_range      (0.0, 40.0)
  ui_steps      (1, 5)
  ui_gamma      (1.5)
  ui_meta       ("unit", "pixel-distance")
ui_meta ("visible", "guichange {bevelinnerglow}")

property_double (innerglowgrowradius, _("Grow radius"), 4.0)
  value_range   (1, 40.0)
  ui_range      (1, 30.0)
  ui_digits     (0)
  ui_steps      (1, 5)
  ui_gamma      (1.5)
  ui_meta       ("unit", "pixel-distance")
  description (_("The distance to expand the shadow before blurring. When using inverted modes this setting needs to be at a reasonable degree for it's effect to be noticable."))
ui_meta ("visible", "guichange {bevelinnerglow}")

property_double (innerglownoise, _("Increase Noise"), 60.0)
    value_range (10.0, 100.0)
ui_meta ("visible", "guichange {bevelinnerglow}")

property_double (innerglownoiserepeat, _("Repetition of noise"), 8.0)
    value_range (5.0, 100.0)
ui_meta ("visible", "guichange {bevelinnerglow}")

property_seed (innerglowseed, _("Noise seed"), rand)
ui_meta ("visible", "guichange {bevelinnerglow}")

property_double (innerglowopacity, _("Opacity"), 1.2)
  value_range   (0.0, 1.5)
ui_meta ("visible", "guichange {bevelinnerglow}")



property_double  (innerglowfixoutline, _("Median to fix non-effected pixels on edges"), 60)
  value_range (50, 100)
  description (_("Due to a bug I can't solve, not all pixels will be effected by inner glow. Median blur solves that problem.'"))
ui_meta ("visible", "guichange {bevelinnerglow}")

property_boolean (innerglowclip, _("Prevent Inner Glow Clip Bug"), TRUE)
  description    (_("Enable or disable the inner glow's clip. When disabled it will create a border bug when blur radius is high. When enabled it will clip Gimp's layers to image size setting and cause inner glow to not work in layer groups."))
ui_meta ("visible", "guichange {bevelinnerglow}")

/*Extra outline starts here*/

property_boolean (enableoutline2, _("Enable Outline 2"), FALSE)
  description    (_("Turn on Outline 2"))
ui_meta ("visible", "guichange {extraoutline}")

property_enum (outlinemode2, _("Mode of Outline"),
               outlinedeluxelistlogo, outline_deluxe_listlogo,
               DEFAULT_OUTLINE)
  description (_("Change the default mode of Outline to an alternative mode "))
ui_meta ("visible", "guichange {extraoutline}")




property_enum   (outlinegrow_shape2, _("Outline Grow shape"),
                 GeglstrokeGrowShapeoutlinelogo2, gegl_stroke_grow_shapeoutlinelogo2,
                 GEGL_stroke_GROW_SHAPE_CIRCLE2)
  description   (_("The shape to expand or contract the stroke in"))
ui_meta ("visible", "guichange {extraoutline}")

property_color (outlinecolor2, _("Outline Color"), "#0069ff")
ui_meta ("visible", "guichange {extraoutline}")

property_double (outlinestroke2, _("Grow radius of Outline"), 5.0)
  value_range   (0, 100.0)
  ui_range      (0, 50.0)
  ui_digits     (0)
  ui_steps      (1, 5)
  ui_gamma      (1.5)
  ui_meta       ("unit", "pixel-distance")
  description (_("The distance to expand the outline."))
ui_meta ("visible", "guichange {extraoutline}")

property_int  (outlineradius2, _("Make the Outline go inward or outward"), 1)
  value_range (-250, 10)
  ui_range    (-20, 2)
  description (_("Instruct the outline to go inward or outward."))
ui_meta ("visible", "guichange {extraoutline}")

property_double (outlineblurstroke2, _("Blur radius of Outline"), 0.0)
  value_range   (0, 1000.0)
  ui_range      (0, 10.0)
  ui_digits     (0)
  ui_steps      (1, 5)
  ui_gamma      (1.5)
  ui_meta       ("unit", "pixel-distance")
  description (_("The distance of the shadow glow effect"))
ui_meta ("visible", "guichange {extraoutline}")

property_double (outlineopacity2, _("Opacity of Outline"), 2)
  value_range   (1.0, 2.0)
  ui_steps      (1.0, 2.0)
ui_meta ("visible", "guichange {extraoutline}")




property_enum (outlinebevelblendmode2, _("Blend Mode of Internal Emboss"),
    fbeveloutlinelogo, f_bevel_outline_logo,
    GEGL_BLEND_MODE_TYPE_HARDLIGHT)
ui_meta ("visible", "guichange {extraoutline}")

property_double (outlinebevelazimuth2, _("Azimuth of Bevel"), 67.0)
    description (_("Light angle (degrees)"))
    value_range (30, 90)
    ui_meta ("unit", "degree")
    ui_meta ("direction", "ccw")
ui_meta ("visible", "guichange {extraoutline}")

property_double (outlinebevelelevation2, _("Elevation of Bevel"), 25.0)
    description (_("Elevation angle (degrees)"))
    value_range (7, 90)
    ui_meta ("unit", "degree")
ui_meta ("visible", "guichange {extraoutline}")

property_int (outlinebeveldepth2, _("Depth of Bevel"), 24)
    description (_("Emboss depth of bevel"))
    value_range (8, 100)
    ui_meta ("unit", "degree")
ui_meta ("visible", "guichange {extraoutline}")


property_double (outlinebevelgaus2, _("Internal Gaussian Blur of for a normal bevel"), 2)
   description (_("Makes a normal bevel by calling an internal gaussian blur."))
   value_range (0.0, 9.0)
ui_meta ("visible", "guichange {extraoutline}")

property_int (outlinebevelbox2, _("Internal Box Blur for a box bevel"), 3)
   description(_("Makes a box bevel which is somewhat different by calling an internal box blur"))
   value_range (0, 10)
   ui_range    (0, 10)
   ui_gamma   (1.5)
ui_meta ("visible", "guichange {extraoutline}")


property_enum (outlinemode1, _("Change Outline to Outline Bevel"),
               outlinedeluxelistlogo, outline_deluxe_listlogo,
               DEFAULT_OUTLINE)
  description (_("Change the default mode of Outline to an alternative mode "))
ui_meta ("visible", "guichange {outlinebevel}")


property_enum (outlinebevelblendmode1, _("Blend Mode of Internal Emboss"),
    fbeveloutlinelogo1, f_bevel_outline_logo1,
    GEGL_BLEND_MODE_TYPE_HARDLIGHT)
ui_meta ("visible", "guichange {outlinebevel}")

property_double (outlinebevelazimuth1, _("Azimuth of Bevel"), 67.0)
    description (_("Light angle (degrees)"))
    value_range (30, 90)
    ui_meta ("unit", "degree")
    ui_meta ("direction", "ccw")
ui_meta ("visible", "guichange {outlinebevel}")

property_double (outlinebevelelevation1, _("Elevation of Bevel"), 25.0)
    description (_("Elevation angle (degrees)"))
    value_range (7, 90)
    ui_meta ("unit", "degree")
ui_meta ("visible", "guichange {outlinebevel}")

property_int (outlinebeveldepth1, _("Depth of Bevel"), 24)
    description (_("Emboss depth of bevel"))
    value_range (8, 100)
    ui_meta ("unit", "degree")
ui_meta ("visible", "guichange {outlinebevel}")

property_double (outlinebevelgaus1, _("Internal Gaussian Blur of for a normal bevel"), 2)
   description (_("Makes a normal bevel by calling an internal gaussian blur."))
   value_range (0.0, 9.0)
ui_meta ("visible", "guichange {outlinebevel}")

property_int (outlinebevelbox1, _("Internal Box Blur for a box bevel"), 3)
   description(_("Makes a box bevel which is somewhat different by calling an internal box blur"))
   value_range (0, 10)
   ui_range    (0, 10)
   ui_gamma   (1.5)
ui_meta ("visible", "guichange {outlinebevel}")


/*extra outline ends here*/


    /* Outline special options in GUI begin here */
property_boolean (enableshadow, _("Enable Shadow 1"), FALSE)
  description    (_("Turn on dropshadow 1"))
ui_meta ("visible", "guichange {main}")

property_double (shadowx, _("X Shadow Horizontal Movability"), 8.0)
  description   (_("Horizontal shadow offset"))
  ui_range      (-40.0, 40.0)
  ui_steps      (1, 10)
  ui_meta       ("unit", "pixel-distance")
  ui_meta       ("axis", "x")
ui_meta ("visible", "guichange {main}")

property_double (shadowy, _("Y Shadow Veritical Movability"), 8.0)
  description   (_("Vertical shadow offset"))
  ui_range      (-40.0, 40.0)
  ui_steps      (1, 10)
  ui_meta       ("unit", "pixel-distance")
  ui_meta       ("axis", "y")
ui_meta ("visible", "guichange {main}")

property_double (shadowradius, _("Shadow Blur Radius"), 9)
   description (_("Blur the shadow. At very low settings the shadow will be solid and have outline properties."))
   value_range (0.0, 1500.0)
   ui_range    (0.24, 100.0)
   ui_gamma    (3.0)
   ui_meta     ("unit", "pixel-distance")
ui_meta ("visible", "guichange {main}")

property_enum   (shadowgrowshape, _("Shadow Grow shape"),
                 GeglgimplayershadowGrowShapelogo, gegl_gimplayershadow_grow_shapelogo,
                 GEGL_DROPSHADOW_GROW_SHAPE_CIRCLE)
  description   (_("The base shape to expand the shadow in"))
ui_meta ("visible", "guichange {main}")

property_double (shadowgrowradius, _("Shadow Grow radius"), 0.0)
  value_range   (0.0, 100.0)
  ui_range      (0.0, 50.0)
  ui_digits     (0)
  ui_steps      (1, 5)
  ui_gamma      (1.5)
  ui_meta       ("unit", "pixel-distance")
  description (_("The distance to expand the shadow."))
ui_meta ("visible", "guichange {main}")

property_color (shadowcolor, _("Color"), "#000000")
    description (_("The color of the shadow."))
ui_meta ("visible", "guichange {main}")


property_double (shadowopacity, _("Shadow Opacity"), 1)
   description (_("HyperOpacity of the shadow"))
   value_range (0.0, 2.0)
   ui_range    (0.0, 2.0)
   ui_gamma    (1.0)
   ui_meta     ("unit", "pixel-distance")
ui_meta ("visible", "guichange {main}")


property_boolean (enableglasstext, _("Enable Glass on Text"), FALSE)
  description    (_("Enable glass over text"))
ui_meta ("visible", "guichange {glass}")


property_double (glassazimuth, _("Azimuth"), 30.0)
    description (_("Light angle (degrees)"))
    value_range (0, 360)
    ui_meta ("unit", "degree")
    ui_meta ("direction", "ccw")
  ui_steps      (0.5, 0.50)
ui_meta ("visible", "guichange {glass}")

property_int (glassdepth, _("Depth"), 20.0)
    description (_("Filter width"))
    value_range (10, 100)
ui_meta ("visible", "guichange {glass}")

property_double (glasselevation, _("Elevation"), 45.0)
    description (_("Elevation angle (degrees)"))
    value_range (40, 46)
    ui_meta ("unit", "degree")
  ui_steps      (0.1, 0.50)
ui_meta ("visible", "guichange {glass}")

property_double (glassstddev, _("Retract Shine"), 3.0)
   description (_("Add a Gaussian Blur"))
   value_range (1, 3)
   ui_range    (1, 3)
   ui_gamma    (3.0)
   ui_meta     ("unit", "pixel-distance")
  ui_steps      (0.1, 0.50)
ui_meta ("visible", "guichange {glass}")

property_double (glassblur, _("Blur Shine"), 0.5)
   description (_("Add a Gaussian Blur"))
   value_range (0.5, 1)
   ui_range    (0.5, 1)
   ui_gamma    (3.0)
  ui_steps      (0.1, 0.50)
   ui_meta     ("unit", "pixel-distance")
ui_meta ("visible", "guichange {glass}")

property_color (glasscolor, _("Color"), "#ffffff")
    description (_("The color to paint over the input"))
ui_meta ("visible", "guichange {glass}")

property_double (glasshyperopacity, _("Hyper Opacity"), 1.0)
    description (_("Opacity Above 100 to make effect more noticable"))
    value_range (0.3, 1.5)
    ui_range    (1.0, 1.5)
  ui_steps      (0.1, 0.50)
ui_meta ("visible", "guichange {glass}")

property_boolean (enableaura, _("Enable Aura"), FALSE)
  description    (_("Turn on Aura"))
ui_meta ("visible", "guichange {shadow}")

property_color (auracolor, _("Aura Color"), "#00ff15")
ui_meta ("visible", "guichange {shadow}")

property_double (auraradius, _("Aura Lens Blur to Glow"), 11.0)
  description (_("Blur radius"))
  value_range (0.0, G_MAXDOUBLE)
  ui_range    (0.0, 50.0)
  ui_gamma    (2.0)
  ui_meta     ("unit", "pixel-distance")
ui_meta ("visible", "guichange {shadow}")


property_double (auraopacity, _("Aura Hyper Opacity"), 1.0)
  value_range   (1.0, 4.0)
  ui_steps      (1.0, 4.0)
ui_meta ("visible", "guichange {shadow}")

property_double (auratile_size, _("Aura Size"), 5.8)
    description (_("Average diameter of each tile (in pixels)"))
    value_range (3.0, 16.0)
    ui_meta     ("unit", "pixel-distance")
ui_meta ("visible", "guichange {shadow}")

property_double (auratile_saturation, _("Aura Gaps"), 5.4)
    description (_("Expand tiles by this amount"))
    value_range (3.0, 8.0)
ui_meta ("visible", "guichange {shadow}")


property_seed (auraseed, _("Aura seed"), rand2)
ui_meta ("visible", "guichange {shadow}")


property_boolean (enableshadow2, _("Enable Shadow 2"), FALSE)
  description    (_("Turn on dropshadow 2"))
ui_meta ("visible", "guichange {shadow}")

property_double (shadowx2, _("X Horizontal Movability 2"), 0.0)
  description   (_("Horizontal shadow offset"))
  ui_range      (-40.0, 40.0)
  ui_steps      (1, 10)
  ui_meta       ("unit", "pixel-distance")
  ui_meta       ("axis", "x")
ui_meta ("visible", "guichange {shadow}")

property_double (shadowy2, _("Y Veritical Movability 2"), 0.0)
  description   (_("Vertical shadow offset"))
  ui_range      (-40.0, 40.0)
  ui_steps      (1, 10)
  ui_meta       ("unit", "pixel-distance")
  ui_meta       ("axis", "y")
ui_meta ("visible", "guichange {shadow}")


property_double (shadowradius2, _("Shadow Blur Radius 2"), 23)
   description (_("Blur the shadow. At very low settings the shadow will be solid and have outline properties."))
   value_range (0.0, 1500.0)
   ui_range    (0.24, 100.0)
   ui_gamma    (3.0)
   ui_meta     ("unit", "pixel-distance")
ui_meta ("visible", "guichange {shadow}")

property_enum   (shadowgrowshape2, _("Grow shape 2"),
                 GeglgimplayershadowGrowShapelogo2, gegl_gimplayershadow_grow_shapelogo2,
                 GEGL_DROPSHADOW_GROW_SHAPE_CIRCLE2)
  description   (_("The base shape to expand the shadow in"))
ui_meta ("visible", "guichange {shadow}")



property_double (shadowgrowradius2, _("Shadow Grow radius 2"), 0.0)
  value_range   (0.0, 100.0)
  ui_range      (0.0, 50.0)
  ui_digits     (0)
  ui_steps      (1, 5)
  ui_gamma      (1.5)
  ui_meta       ("unit", "pixel-distance")
  description (_("The distance to expand the shadow."))
ui_meta ("visible", "guichange {shadow}")

property_color (shadowcolor2, _("Color 2"), "#ffffff")
    description (_("The color of the shadow."))
ui_meta ("visible", "guichange {shadow}")

property_double (shadowopacity2, _("Shadow Opacity 2"), 1)
   description (_("HyperOpacity of the shadow"))
   value_range (0.0, 2.0)
   ui_range    (0.0, 2.0)
   ui_gamma    (1.0)
   ui_meta     ("unit", "pixel-distance")
ui_meta ("visible", "guichange {shadow}")



#else

#define GEGL_OP_META
#define GEGL_OP_NAME     logo
#define GEGL_OP_C_SOURCE logo.c

#include "gegl-op.h"

/*starred nodes go inside typedef struct */

typedef struct
{
 GeglNode *input;
 GeglNode *src;
 GeglNode *coloroverlay;
 GeglNode *screen;
 GeglNode *overlay;
 GeglNode *overlay2;
 GeglNode *overlay3;
 GeglNode *overlay4;
 GeglNode *overlay5;
 GeglNode *hardlight;
 GeglNode *hardlight2;
 GeglNode *hardlight3;
 GeglNode *hardlight4;
 GeglNode *hardlight5;
 GeglNode *grainmerge;
 GeglNode *grainmerge2;
 GeglNode *grainmerge3;
 GeglNode *grainmerge4;
 GeglNode *grainmerge5;
 GeglNode *hslcolor;
 GeglNode *hslcolor2;
 GeglNode *hsvhue;
 GeglNode *hsvhue2;
 GeglNode *lchcolor;
 GeglNode *lchcolor2;
 GeglNode *clear;
 GeglNode *route1;
 GeglNode *route2;
 GeglNode *route3;
 GeglNode *route4;
 GeglNode *route5;
 GeglNode *normal1;
 GeglNode *normal2;
 GeglNode *behind;
 GeglNode *behind2;
 GeglNode *nothingbehind;
 GeglNode *nothingbehind2;
 GeglNode *behind3;
 GeglNode *nothingbehind3;
 GeglNode *nothingnormal1;
 GeglNode *nothingoutline1;
 GeglNode *nothingoutline2;
 GeglNode *nothingnormal2;
 GeglNode *lightness;
 GeglNode *nothingmedianbevel;
 GeglNode *medianbevel;
 GeglNode *cbevel;
 GeglNode *ignop3;
 GeglNode *sbevel;
 GeglNode *rbevel;
 GeglNode *multiply;
 GeglNode *nothinginnerglow;
 GeglNode *addition;
 GeglNode *nothingbevel;
 GeglNode *outline1;
 GeglNode *outline2;
 GeglNode *nothingcolor;
 GeglNode *aura;
 GeglNode *ignop;
 GeglNode *ignop2;
 GeglNode *covernormalinnerglow;
 GeglNode *shadow;
 GeglNode *idrefclear;
 GeglNode *innerglow;
 GeglNode *innerglow2;
 GeglNode *linearlight;
 GeglNode *shadow2;
 GeglNode *nopinput;
 GeglNode *sinus;
 GeglNode *normalinnerglow;
 GeglNode *glassovertext;
 GeglNode *gray;
 GeglNode *nothingaura;
 GeglNode *output;

}State;

static void attach (GeglOperation *operation)
{


  GeglNode *gegl = operation->node;

  GeglProperties *o = GEGL_PROPERTIES (operation);
  GeglColor *sinuscolor1 = gegl_color_new ("#ffffff");
  GeglColor *sinuscolor2 = gegl_color_new ("#000000");
  GeglColor *colorhere = gegl_color_new ("#c013ae");
  GeglColor *colorhereol = gegl_color_new ("#b83209");
  GeglColor *colorhereol2 = gegl_color_new ("#ecb52d");
  GeglColor *white = gegl_color_new ("#ffffff");
  GeglColor *white2 = gegl_color_new ("#ffffff");
  GeglColor *alt = gegl_color_new ("#1f5797");


  State *state = o->user_data = g_malloc0 (sizeof (State));



/*new child node list is here, this is where starred nodes get defined
s
 state->newchildname = gegl_node_new_child (gegl, "operation", "lb:name", NULL);*/
  state->input    = gegl_node_get_input_proxy (gegl, "input");
 state->src = gegl_node_new_child (gegl, "operation", "gegl:src", NULL);
 state->coloroverlay = gegl_node_new_child (gegl, "operation", "gegl:color-overlay", "value", colorhere, NULL);
 state->overlay = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 23, "composite-mode", 0,  NULL);
 state->overlay2 = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 23, "composite-mode", 0,  NULL);
 state->overlay3 = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 23, "composite-mode", 0,  NULL);
 state->overlay4 = gegl_node_new_child (gegl, "operation", "gegl:src-atop", NULL);
 state->overlay5 = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 23, "composite-mode", 0,  NULL);

 state->grainmerge = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 47, "composite-mode", 0, "blend-space", 2,   NULL);
 state->grainmerge2 = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 47, "composite-mode", 0, "blend-space", 2,    NULL);
 state->grainmerge3 = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 47, "composite-mode", 0, "blend-space", 2,   NULL);
 state->grainmerge4 = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 47, "composite-mode", 0, "blend-space", 2,   NULL);
 state->grainmerge5 = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 47, "composite-mode", 0, "blend-space", 2,   NULL);

 state->hardlight = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 44, "composite-mode", 0,  NULL);
 state->hardlight2 = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 44, "composite-mode", 0,  NULL);
 state->hardlight3 = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 44, "composite-mode", 0,  NULL);
 state->hardlight4 = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 44, "composite-mode", 0,  NULL);
 state->hardlight5 = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 44, "composite-mode", 0,  NULL);


 state->screen = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 31, "composite-mode", 0,  NULL);
 state->linearlight = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 50, "composite-mode", 0, "blend-space", 2,  NULL);

 state->hslcolor = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 39, "composite-mode", 0,  NULL);
 state->hslcolor2 = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 39, "composite-mode", 0,  NULL);

 state->multiply = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 30, "composite-mode", 0,  NULL);

 state->nothingnormal1 = gegl_node_new_child (gegl, "operation", "gegl:nop",  NULL);
 state->nothingnormal2 = gegl_node_new_child (gegl, "operation", "gegl:nop",  NULL);

 state->clear = gegl_node_new_child (gegl, "operation", "gegl:clear",  NULL);
 state->idrefclear = gegl_node_new_child (gegl, "operation", "gegl:nop",  NULL);

 state->hsvhue = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 37, "composite-mode", 0,  NULL);
 state->hsvhue2 = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 37, "composite-mode", 0,  NULL);

 state->addition = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 33, "composite-mode", 0,  NULL);

 state->lchcolor = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 26, "composite-mode", 0,  NULL);
 state->lchcolor2 = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 26, "composite-mode", 0,  NULL);

 state->clear = gegl_node_new_child (gegl, "operation", "gegl:clear",  NULL);
 state->src = gegl_node_new_child (gegl, "operation", "gimp:layer-mode", "layer-mode", 62, "composite-mode", 0,  NULL);

 state->route2 = gegl_node_new_child (gegl, "operation", "gegl:nop", NULL);
 state->route3 = gegl_node_new_child (gegl, "operation", "gegl:nop", NULL);
 state->route4 = gegl_node_new_child (gegl, "operation", "gegl:nop", NULL);
 state->route5 = gegl_node_new_child (gegl, "operation", "gegl:nop", NULL);
 state->ignop = gegl_node_new_child (gegl, "operation", "gegl:dst", NULL);
 state->ignop3 = gegl_node_new_child (gegl, "operation", "gegl:nop", NULL);
 state->nothingcolor = gegl_node_new_child (gegl, "operation", "gegl:nop", NULL);
 state->nopinput = gegl_node_new_child (gegl, "operation", "gegl:nop", NULL);
 state->normal1 = gegl_node_new_child (gegl, "operation", "gegl:over", NULL);
 state->nothingoutline1 = gegl_node_new_child (gegl, "operation", "gegl:nop", NULL);
 state->nothingoutline2 = gegl_node_new_child (gegl, "operation", "gegl:nop", NULL);
 state->normal2 = gegl_node_new_child (gegl, "operation", "gegl:over", NULL);
 state->nothingnormal1 = gegl_node_new_child (gegl, "operation", "gegl:dst", NULL);
 state->nothingnormal2 = gegl_node_new_child (gegl, "operation", "gegl:dst", NULL);

 state->behind = gegl_node_new_child (gegl, "operation", "gegl:dst-over", NULL);
 state->behind2 = gegl_node_new_child (gegl, "operation", "gegl:dst-over", NULL);
 state->behind3 = gegl_node_new_child (gegl, "operation", "gegl:dst-over", NULL);
 state->nothingbehind = gegl_node_new_child (gegl, "operation", "gegl:dst", NULL);
 state->nothingbehind2 = gegl_node_new_child (gegl, "operation", "gegl:dst", NULL);
 state->nothingbehind3 = gegl_node_new_child (gegl, "operation", "gegl:dst", NULL);

 state->normalinnerglow = gegl_node_new_child (gegl, "operation", "gegl:over", NULL);

 state->lightness = gegl_node_new_child (gegl, "operation", "gegl:hue-chroma", NULL);

  state->medianbevel    = gegl_node_new_child (gegl,
                                  "operation", "gegl:median-blur",  "abyss-policy",     GEGL_ABYSS_NONE, "alpha-percentile", 100.0,
                                  NULL);
 state->cbevel = gegl_node_new_child (gegl, "operation", "lb:custom-bevel", "gaus", 4.5,  NULL);
 state->sbevel = gegl_node_new_child (gegl, "operation", "lb:sharpbevel",  NULL);
 state->rbevel = gegl_node_new_child (gegl, "operation", "lb:ringbevel",  NULL);
 state->nothingmedianbevel = gegl_node_new_child (gegl, "operation", "gegl:nop",  NULL);
 state->nothingbevel = gegl_node_new_child (gegl, "operation", "gegl:nop",  NULL);
 state->nothinginnerglow = gegl_node_new_child (gegl, "operation", "gegl:nop", NULL);
 state->innerglow = gegl_node_new_child (gegl, "operation", "lb:innerglow", NULL);
 state->innerglow2 = gegl_node_new_child (gegl, "operation", "lb:innerglow", "mode", 5,  NULL);
 state->outline1 = gegl_node_new_child (gegl, "operation", "lb:outlinebevel", "x", 0.0, "y", 0.0, "blurstroke", 3.0, "stroke", 4.0, "opacity", 2.0, "color", colorhereol, NULL);
 state->outline2 = gegl_node_new_child (gegl, "operation", "lb:outlinebevel", "x", 0.0, "y", 0.0, "blurstroke", 0.0, "bevelgaus", 5.0, "bevelelevation", 23.0, "bevelblendmode", 7, "stroke", 4.0, "opacity", 2.0, "color", colorhereol2, NULL);
 state->shadow = gegl_node_new_child (gegl, "operation", "lb:shadow", "x", 0.0, "y", 0.0, "growradius", 2.0, "radius", 4.0, "opacity", 1.0, "color", white, NULL);
 state->shadow2 = gegl_node_new_child (gegl, "operation", "lb:shadow", "x", 4.0, "y", 8.0, "growradius", 3.0, "radius", 5.0, "opacity", 1.0, "color", alt, NULL);
 state->aura = gegl_node_new_child (gegl, "operation", "lb:aura", "tile-size", 8.0, "color", white2, "opacity", 1.5, NULL);
 state->sinus = gegl_node_new_child (gegl, "operation", "gegl:sinus", "color1", sinuscolor1, "color2", sinuscolor2, "complexity", 1.0, "blend-mode", 0, NULL);
 state->gray = gegl_node_new_child (gegl, "operation", "gegl:gray", NULL);
 state->glassovertext = gegl_node_new_child (gegl, "operation", "lb:glassovertext", "glassover", 1,  NULL);
 state->nothingaura = gegl_node_new_child (gegl, "operation", "gegl:nop", NULL);
 state->ignop2 = gegl_node_new_child (gegl, "operation", "gegl:nop", NULL);
 state->covernormalinnerglow = gegl_node_new_child (gegl, "operation", "gegl:src", NULL);


  state->output   = gegl_node_get_output_proxy (gegl, "output");


/*meta redirect property to new child orders go here
 gegl_operation_meta_redirect (operation, "propertyname", state->newchildname,  "originalpropertyname");
*/
  gegl_operation_meta_redirect (operation, "shadowcolor", state->shadow, "color");
  gegl_operation_meta_redirect (operation, "shadowradius", state->shadow, "radius");
  gegl_operation_meta_redirect (operation, "shadowgrowradius", state->shadow, "growradius");
  gegl_operation_meta_redirect (operation, "shadowgrowshape", state->shadow, "growshape");
  gegl_operation_meta_redirect (operation, "shadowx", state->shadow, "x");
  gegl_operation_meta_redirect (operation, "shadowy", state->shadow, "y");
  gegl_operation_meta_redirect (operation, "shadowopacity", state->shadow, "opacity");
  gegl_operation_meta_redirect (operation, "shadowcolor2", state->shadow2, "color");
  gegl_operation_meta_redirect (operation, "shadowradius2", state->shadow2, "radius");
  gegl_operation_meta_redirect (operation, "shadowgrowradius2", state->shadow2, "growradius");
  gegl_operation_meta_redirect (operation, "shadowgrowshape2", state->shadow2, "growshape");
  gegl_operation_meta_redirect (operation, "shadowx2", state->shadow2, "x");
  gegl_operation_meta_redirect (operation, "shadowy2", state->shadow2, "y");
  gegl_operation_meta_redirect (operation, "shadowopacity2", state->shadow2, "opacity");

  gegl_operation_meta_redirect (operation, "auracolor", state->aura, "color");
  gegl_operation_meta_redirect (operation, "auraradius", state->aura, "radius");
  gegl_operation_meta_redirect (operation, "auraopacity", state->aura, "opacity");
  gegl_operation_meta_redirect (operation, "auratile_size", state->aura, "tile_size");
  gegl_operation_meta_redirect (operation, "auratile_saturation", state->aura, "tile_saturation");
  gegl_operation_meta_redirect (operation, "auraseed", state->aura, "seed");

  gegl_operation_meta_redirect (operation, "outlinecolor",  state->outline1, "color");
  gegl_operation_meta_redirect (operation, "outlineopacity",  state->outline1, "opacity");
  gegl_operation_meta_redirect (operation, "outlineblurstroke",  state->outline1, "blurstroke");
  gegl_operation_meta_redirect (operation, "outlinestroke",  state->outline1, "stroke");
  /*gegl_operation_meta_redirect (operation, "outlinex",  state->outline1, "x");
  gegl_operation_meta_redirect (operation, "outliney",  state->outline1, "y"); */
  gegl_operation_meta_redirect (operation, "outlinegrow_shape",  state->outline1, "grow_shape");
  gegl_operation_meta_redirect (operation, "outlineradius",  state->outline1, "radius");

  gegl_operation_meta_redirect (operation, "outlinemode1",  state->outline1, "mode");
  gegl_operation_meta_redirect (operation, "outlinebevelbox1",  state->outline1, "bevelbox");
  gegl_operation_meta_redirect (operation, "outlinebevelgaus1",  state->outline1, "bevelgaus");
  gegl_operation_meta_redirect (operation, "outlinebevelelevation1",  state->outline1, "bevelelevation");
  gegl_operation_meta_redirect (operation, "outlinebevelazimuth1",  state->outline1, "bevelazimuth");
  gegl_operation_meta_redirect (operation, "outlinebeveldepth1",  state->outline1, "beveldepth");
  gegl_operation_meta_redirect (operation, "outlinebevelblendmode1",  state->outline1, "bevelblendmode");

  gegl_operation_meta_redirect (operation, "outlinecolor2",  state->outline2, "color");
  gegl_operation_meta_redirect (operation, "outlineopacity2",  state->outline2, "opacity");
  gegl_operation_meta_redirect (operation, "outlineblurstroke2",  state->outline2, "blurstroke");
  gegl_operation_meta_redirect (operation, "outlinestroke2",  state->outline2, "stroke");
/*
  gegl_operation_meta_redirect (operation, "outlinex2",  state->outline2, "x");
  gegl_operation_meta_redirect (operation, "outliney2",  state->outline2, "y");
*/
  gegl_operation_meta_redirect (operation, "outlinegrow_shape2",  state->outline2, "grow_shape");
  gegl_operation_meta_redirect (operation, "outlineradius2",  state->outline2, "radius");

  gegl_operation_meta_redirect (operation, "outlinemode2",  state->outline2, "mode");
  gegl_operation_meta_redirect (operation, "outlinebevelbox2",  state->outline2, "bevelbox");
  gegl_operation_meta_redirect (operation, "outlinebevelgaus2",  state->outline2, "bevelgaus");
  gegl_operation_meta_redirect (operation, "outlinebevelelevation2",  state->outline2, "bevelelevation");
  gegl_operation_meta_redirect (operation, "outlinebevelazimuth2",  state->outline2, "bevelazimuth");
  gegl_operation_meta_redirect (operation, "outlinebeveldepth2",  state->outline2, "beveldepth");
  gegl_operation_meta_redirect (operation, "outlinebevelblendmode2",  state->outline2, "bevelblendmode");




  gegl_operation_meta_redirect (operation, "bevelradius",  state->medianbevel, "radius");
  gegl_operation_meta_redirect (operation, "elevation",  state->cbevel, "elevation");
  gegl_operation_meta_redirect (operation, "elevation",  state->rbevel, "elevation");
  gegl_operation_meta_redirect (operation, "elevation",  state->sbevel, "elevation");
  gegl_operation_meta_redirect (operation, "depth",  state->cbevel, "depth");
  gegl_operation_meta_redirect (operation, "depth",  state->rbevel, "depth");
  gegl_operation_meta_redirect (operation, "depth",  state->sbevel, "depth");
  gegl_operation_meta_redirect (operation, "azimuth",  state->cbevel, "azimuth");
  gegl_operation_meta_redirect (operation, "azimuth",  state->rbevel, "azimuth");
  gegl_operation_meta_redirect (operation, "azimuth",  state->sbevel, "azimuth");
  gegl_operation_meta_redirect (operation, "bevelblendmode",  state->cbevel, "blendmode");
  gegl_operation_meta_redirect (operation, "bevelblendmode",  state->rbevel, "blendbevel");
  gegl_operation_meta_redirect (operation, "bevelblendmode",  state->sbevel, "blendmode");

  gegl_operation_meta_redirect (operation, "color",  state->coloroverlay, "value");



gegl_operation_meta_redirect (operation, "innerglowcolor",  state->innerglow, "value2");
gegl_operation_meta_redirect (operation, "innerglowfixoutline",  state->innerglow, "fixoutline");
gegl_operation_meta_redirect (operation, "innerglownoise", state->innerglow2, "noise");
gegl_operation_meta_redirect (operation, "innerglownoiserepeat", state->innerglow2, "noiserepeat");
gegl_operation_meta_redirect (operation, "innerglowseed", state->innerglow2, "seed");
gegl_operation_meta_redirect (operation, "innerglowx",  state->innerglow, "x");
gegl_operation_meta_redirect (operation, "innerglowy",  state->innerglow, "y");
gegl_operation_meta_redirect (operation, "innerglowradius", state->innerglow, "radius");
gegl_operation_meta_redirect (operation, "innerglowopacity",  state->innerglow, "opacity");
gegl_operation_meta_redirect (operation, "innerglowgrowradius",  state->innerglow, "grow_radius");
gegl_operation_meta_redirect (operation, "innerglowclip",  state->innerglow, "clippolicy");

gegl_operation_meta_redirect (operation, "innerglowcolor",  state->innerglow2, "value2");
gegl_operation_meta_redirect (operation, "innerglowfixoutline",  state->innerglow2, "fixoutline");
gegl_operation_meta_redirect (operation, "innerglowx",  state->innerglow2, "x");
gegl_operation_meta_redirect (operation, "innerglowy",  state->innerglow2, "y");
gegl_operation_meta_redirect (operation, "innerglowradius", state->innerglow2, "radius");
gegl_operation_meta_redirect (operation, "innerglowopacity",  state->innerglow2, "opacity");
gegl_operation_meta_redirect (operation, "innerglowgrowradius",  state->innerglow2, "grow_radius");
gegl_operation_meta_redirect (operation, "innerglowclip",  state->innerglow2, "clippolicy");

  gegl_operation_meta_redirect (operation, "glassstddev", state->glassovertext, "std-dev");
  gegl_operation_meta_redirect (operation, "glassblur", state->glassovertext, "blur");
  gegl_operation_meta_redirect (operation, "glassazimuth", state->glassovertext, "azimuth");
  gegl_operation_meta_redirect (operation, "glasselevation", state->glassovertext, "elevation");
  gegl_operation_meta_redirect (operation, "glassdepth", state->glassovertext, "depth");
  gegl_operation_meta_redirect (operation, "glasscolor", state->glassovertext, "color");
  gegl_operation_meta_redirect (operation, "glasshyperopacity", state->glassovertext, "hyperopacity");
  gegl_operation_meta_redirect (operation, "enableglasstext", state->glassovertext, "enableglasstext");



}

/*
GValue v = G_TYPE_BOOLEAN;

  g_value_set_boolean(&v, G_TYPE_BOOLEAN);
g_value_set_boolean(&v,(o->enableaura == TRUE) ? 4 : 4);
gegl_node_set_property(state->innerglow, "mode", &v);
*/



static void
update_graph (GeglOperation *operation)
{
  GeglProperties *o = GEGL_PROPERTIES (operation);
  State *state = o->user_data;
  if (!state) return;
  GeglNode*coloroverlay = state->coloroverlay;
  GeglNode*aura = state->aura;

  GeglNode*behind = state->behind;
  GeglNode*behind2 = state->behind2;
  GeglNode*behind3 = state->behind3;
  GeglNode*normal1 = state->normal1;
  GeglNode*normal2 = state->normal2;
  GeglNode*outline1 = state->outline1;
  GeglNode*outline2 = state->outline2;
  GeglNode*bevel = state->cbevel;
  GeglNode*medianbevel = state->medianbevel;
  GeglNode*innerglow = state->innerglow;
  GeglNode*covernormalinnerglow = state->covernormalinnerglow;
  GeglNode*normalinnerglow = state->normalinnerglow;



  if (!o->enableshadow) gegl_node_disconnect(behind, "aux");
  if (o->enableshadow)  gegl_node_connect(state->shadow, "output", behind, "aux");
  if (o->enableshadow) behind = state->behind;
  else behind = state->nothingbehind;

  if (!o->enableshadow2) gegl_node_disconnect(behind2, "aux");
  if (o->enableshadow2)  gegl_node_connect(state->shadow2, "output", behind2, "aux");
  if (o->enableshadow2) behind2 = state->behind2;
  else behind2 = state->nothingbehind2;




  if (o->enableaura) aura = state->aura;
  else aura = state->nothingaura;
  if (!o->enableaura) gegl_node_disconnect(behind3, "aux");
  if (o->enableaura)  gegl_node_connect (aura, "output", behind3, "aux");
  if (o->enableaura) behind3 = state->behind3;
  else behind3 = state->nothingbehind3;

  if (!o->enableoutline1) gegl_node_disconnect(normal1, "aux");
  if (o->enableoutline1)   gegl_node_connect (state->outline1, "output", normal1, "aux");
  if (o->enableoutline1) outline1 = state->outline1;
  if (!o->enableoutline1) outline1 = state->nothingoutline1;
  if (o->enableoutline1) normal1 = state->normal1;
  if (!o->enableoutline1) normal1 = state->nothingnormal1;

  if (!o->enableoutline2) gegl_node_disconnect(normal2, "aux");
  if (o->enableoutline2)   gegl_node_connect (state->outline2, "output", normal2, "aux");
  if (o->enableoutline2) outline2 = state->outline2;
  if (!o->enableoutline2) outline2 = state->nothingoutline2;
  if (o->enableoutline2) normal2 = state->normal2;
  if (!o->enableoutline2) normal2 = state->nothingnormal2;

  if (o->enablecolor) coloroverlay = state->coloroverlay;
  if (!o->enablecolor) coloroverlay = state->nothingcolor;

  normalinnerglow = state->normalinnerglow; /* the default */
  switch (o->innerglowblendmode) {
    case GEGL_BLEND_MODE_TYPE_NORMALIG: normalinnerglow = state->normalinnerglow; break;
    case GEGL_BLEND_MODE_TYPE_GRAINMERGEIG: normalinnerglow = state->grainmerge; break;
    case GEGL_BLEND_MODE_TYPE_ADDITIONIG: normalinnerglow = state->addition; break;
    case GEGL_BLEND_MODE_TYPE_SCREENIG: normalinnerglow = state->screen; break;
    case GEGL_BLEND_MODE_TYPE_MULTIPLYIG: normalinnerglow = state->multiply; break;
    case GEGL_BLEND_MODE_TYPE_HSLCOLORIG: normalinnerglow = state->hslcolor; break;
    case GEGL_BLEND_MODE_TYPE_OVERLAYIG: normalinnerglow = state->overlay; break;
    case GEGL_BLEND_MODE_TYPE_LINEARLIGHTIG: normalinnerglow = state->linearlight; break;
    case GEGL_BLEND_MODE_TYPE_HARDLIGHTIG: normalinnerglow = state->hardlight; break;
    case GEGL_BLEND_MODE_TYPE_LCHCOLORIG: normalinnerglow = state->lchcolor; break;
    case GEGL_BLEND_MODE_TYPE_HUEIG: normalinnerglow = state->hsvhue; break;
default: normalinnerglow = state->normalinnerglow;
}

if (o->beveltype > 0)
medianbevel = state->medianbevel;
else medianbevel = state->nothingmedianbevel;


if (o->innerglowtype == 0)
covernormalinnerglow = state->ignop;
if (o->innerglowtype == 1)
covernormalinnerglow = state->covernormalinnerglow;
if (o->innerglowtype == 2)
covernormalinnerglow = state->covernormalinnerglow;



  switch (o->beveltype) {
    case NOBEVEL: bevel = state->nothingbevel; break;
    case CBEVEL: bevel = state->cbevel; break;
    case SBEVEL: bevel = state->sbevel; break;
    case RBEVEL: bevel = state->rbevel; break;
default: bevel = state->cbevel;
}


  switch (o->innerglowtype) {
    case NOINNERGLOW: innerglow = state->nothinginnerglow; break;
    case STANDARD: innerglow = state->innerglow; break;
    case GRAINY: innerglow = state->innerglow2; break;
default: innerglow = state->innerglow;
}

enum_start (inner_glow_type_logo)
  enum_value (NOINNERGLOW, "No Inner Glow",
              N_("No Inner Glow"))
  enum_value (STANDARD,      "Standard",
              N_("Standard Inner Glow"))
  enum_value (GRAINY,      "Grainy",
              N_("Grainy Inner Glow"))
enum_end (innerglowtypelogo)


  gegl_node_link_many (state->input, state->nopinput, coloroverlay,  medianbevel,   bevel, state->ignop2, state->route2,  state->overlay2,   covernormalinnerglow,  state->glassovertext, normal1, normal2, state->lightness, state->route5,  state->overlay5,   behind3,  state->route3,  behind, /*state->route4,*/ behind2,  state->output,  NULL);



   gegl_node_connect (covernormalinnerglow, "aux", normalinnerglow, "output");
  gegl_node_link_many (state->ignop2, state->ignop3,  normalinnerglow,  NULL);
   gegl_node_connect (normalinnerglow, "aux", innerglow, "output");
  gegl_node_link_many (state->ignop3, innerglow,  NULL);

  gegl_node_link_many (state->input, outline1,  NULL);

  gegl_node_link_many (state->nopinput, outline2,  NULL);
  gegl_node_connect (normal2, "aux", outline2, "output");
  gegl_node_link_many (state->route2, aura,  NULL);

  gegl_node_link_many (state->route5, state->shadow,  NULL);

  gegl_node_link_many (state->route3, state->shadow2,  NULL);





/*optional connect from and too is here
  gegl_node_connect (state->blendmode, "aux", state->lastnodeinlist, "output"); */

}

static void
gegl_op_class_init (GeglOpClass *klass)
{
  GeglOperationClass *operation_class;
GeglOperationMetaClass *operation_meta_class = GEGL_OPERATION_META_CLASS (klass);
  operation_class = GEGL_OPERATION_CLASS (klass);

  operation_class->attach = attach;
  operation_meta_class->update = update_graph;

  gegl_operation_class_set_keys (operation_class,
    "name",        "lb:logo",
    "title",       _("Text Logo Maker"),
    "reference-hash", "ageofwaraddiction",
    "description", _("Make highly customizable logos with many options"),
/*<Image>/Colors <Image>/Filters are top level menus in GIMP*/
    "gimp:menu-path", "<Image>/Filters/Text Styling",
    "gimp:menu-label", _("Alpha logo..."),
    NULL);
}

#endif
