/**
 * @file screen_main_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_main_gen.h"
#include "../ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_main_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_scale_indicator;
    static lv_style_t style_scale_items;
    static lv_style_t style_arc_knob;
    static lv_style_t style_arc_indicator;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_scale_indicator);
        lv_style_set_line_color(&style_scale_indicator, lv_color_hex3(0xf00));
        lv_style_set_line_width(&style_scale_indicator, 3);

        lv_style_init(&style_scale_items);
        lv_style_set_line_color(&style_scale_items, lv_color_hex3(0xfff));

        lv_style_init(&style_arc_knob);
        lv_style_set_bg_opa(&style_arc_knob, 0);

        lv_style_init(&style_arc_indicator);
        lv_style_set_arc_rounded(&style_arc_indicator, false);
        lv_style_set_arc_width(&style_arc_indicator, 34);
        lv_style_set_arc_color(&style_arc_indicator, lv_color_hex3(0x0af));
        lv_style_set_opa(&style_arc_indicator, 80);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_main_#");
    lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex3(0x000), 0);

    lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
    lv_obj_set_align(lv_arc_0, LV_ALIGN_BOTTOM_MID);
    lv_arc_set_rotation(lv_arc_0, 180);
    lv_arc_set_bg_start_angle(lv_arc_0, 0);
    lv_arc_set_bg_end_angle(lv_arc_0, 180);
    lv_arc_set_start_angle(lv_arc_0, 0);
    lv_arc_set_end_angle(lv_arc_0, 180);
    lv_obj_set_width(lv_arc_0, 320);
    lv_obj_set_height(lv_arc_0, 320);
    lv_obj_set_y(lv_arc_0, 150);
    lv_arc_set_min_value(lv_arc_0, 0);
    lv_arc_set_max_value(lv_arc_0, 120);
    lv_arc_set_value(lv_arc_0, 60);
    lv_obj_set_style_arc_width(lv_arc_0, 0, 0);
    lv_obj_set_style_arc_rounded(lv_arc_0, false, 0);
    lv_obj_add_style(lv_arc_0, &style_arc_knob, LV_PART_KNOB);
    lv_obj_add_style(lv_arc_0, &style_arc_indicator, LV_PART_INDICATOR);
    lv_obj_t * ui_scale_speed = lv_scale_create(lv_arc_0);
    lv_obj_set_width(ui_scale_speed, 320);
    lv_obj_set_height(ui_scale_speed, 320);
    lv_scale_set_total_tick_count(ui_scale_speed, 61);
    lv_scale_set_major_tick_every(ui_scale_speed, 5);
    lv_obj_set_style_text_color(ui_scale_speed, lv_color_hex3(0xfff), 0);
    lv_obj_set_style_arc_color(ui_scale_speed, lv_color_hex3(0xf00), 0);
    lv_obj_set_name(ui_scale_speed, "ui_scale_speed");
    lv_scale_set_mode(ui_scale_speed, LV_SCALE_MODE_ROUND_INNER);
    lv_scale_set_min_value(ui_scale_speed, 0);
    lv_scale_set_max_value(ui_scale_speed, 120);
    lv_scale_set_angle_range(ui_scale_speed, 180);
    lv_scale_set_rotation(ui_scale_speed, 180);
    lv_obj_add_style(ui_scale_speed, &style_scale_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(ui_scale_speed, &style_scale_items, LV_PART_ITEMS);
    
    lv_obj_t * lv_label_0 = lv_label_create(lv_arc_0);
    lv_label_set_text(lv_label_0, "000");
    lv_obj_set_style_text_color(lv_label_0, lv_color_hex3(0xfff), 0);
    lv_obj_set_align(lv_label_0, LV_ALIGN_TOP_MID);
    lv_obj_set_y(lv_label_0, 50);
    lv_obj_set_style_text_font(lv_label_0, play_bold_48_c, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_arc_0);
    lv_label_set_text(lv_label_1, "km/h");
    lv_obj_set_style_text_color(lv_label_1, lv_color_hex3(0xfff), 0);
    lv_obj_set_align(lv_label_1, LV_ALIGN_TOP_MID);
    lv_obj_set_x(lv_label_1, 65);
    lv_obj_set_y(lv_label_1, 80);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_arc_0);
    lv_label_set_text(lv_label_2, "000");
    lv_obj_set_style_text_color(lv_label_2, lv_color_hex3(0xfff), 0);
    lv_obj_set_align(lv_label_2, LV_ALIGN_TOP_MID);
    lv_obj_set_y(lv_label_2, 106);
    lv_obj_set_style_text_font(lv_label_2, play_bold_32_c, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(lv_arc_0);
    lv_label_set_text(lv_label_3, "deg");
    lv_obj_set_style_text_color(lv_label_3, lv_color_hex3(0xfff), 0);
    lv_obj_set_align(lv_label_3, LV_ALIGN_TOP_MID);
    lv_obj_set_x(lv_label_3, 48);
    lv_obj_set_y(lv_label_3, 120);
    
    lv_obj_t * lv_label_4 = lv_label_create(lv_arc_0);
    lv_label_set_text(lv_label_4, "Lon: 160.12345 Lat: -87.65478");
    lv_obj_set_style_text_color(lv_label_4, lv_color_hex3(0xfff), 0);
    lv_obj_set_align(lv_label_4, LV_ALIGN_TOP_MID);
    lv_obj_set_y(lv_label_4, 146);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

