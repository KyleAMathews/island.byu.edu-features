<?php

/**
 * Implementation of hook_content_default_fields().
 */
function eduglu_job_board_content_default_fields() {
  module_load_include('inc', 'eduglu_job_board', 'eduglu_job_board.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_job_board_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_job_board_context_default_contexts() {
  module_load_include('inc', 'eduglu_job_board', 'eduglu_job_board.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_job_board_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_job_board_ctools_plugin_api() {
  module_load_include('inc', 'eduglu_job_board', 'eduglu_job_board.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_job_board_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function eduglu_job_board_fieldgroup_default_groups() {
  module_load_include('inc', 'eduglu_job_board', 'eduglu_job_board.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_job_board_fieldgroup_default_groups', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function eduglu_job_board_menu_default_items() {
  module_load_include('inc', 'eduglu_job_board', 'eduglu_job_board.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_job_board_menu_default_items', $args);
}

/**
 * Implementation of hook_node_info().
 */
function eduglu_job_board_node_info() {
  module_load_include('inc', 'eduglu_job_board', 'eduglu_job_board.features.node');
  $args = func_get_args();
  return call_user_func_array('_eduglu_job_board_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function eduglu_job_board_strongarm() {
  module_load_include('inc', 'eduglu_job_board', 'eduglu_job_board.defaults');
  $args = func_get_args();
  return call_user_func_array('_eduglu_job_board_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function eduglu_job_board_views_default_views() {
  module_load_include('inc', 'eduglu_job_board', 'eduglu_job_board.features.views');
  $args = func_get_args();
  return call_user_func_array('_eduglu_job_board_views_default_views', $args);
}
