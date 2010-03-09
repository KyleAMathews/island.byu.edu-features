<?php

/**
 * Implementation of hook_content_default_fields().
 */
function eduglu_career_group_content_default_fields() {
  module_load_include('inc', 'eduglu_career_group', 'eduglu_career_group.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_career_group_content_default_fields', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function eduglu_career_group_menu_default_items() {
  module_load_include('inc', 'eduglu_career_group', 'eduglu_career_group.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_career_group_menu_default_items', $args);
}

/**
 * Implementation of hook_node_info().
 */
function eduglu_career_group_node_info() {
  module_load_include('inc', 'eduglu_career_group', 'eduglu_career_group.features.node');
  $args = func_get_args();
  return call_user_func_array('_eduglu_career_group_node_info', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function eduglu_career_group_views_default_views() {
  module_load_include('inc', 'eduglu_career_group', 'eduglu_career_group.features.views');
  $args = func_get_args();
  return call_user_func_array('_eduglu_career_group_views_default_views', $args);
}