<?php

/**
 * Implementation of hook_strongarm().
 */
function eduglu_job_board_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_job_form';
  $strongarm->value = '2';

  $export['comment_anonymous_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_job_form';
  $strongarm->value = '3';

  $export['comment_controls_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_job_form';
  $strongarm->value = '2';

  $export['comment_default_mode_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_job_form';
  $strongarm->value = '2';

  $export['comment_default_order_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_job_form';
  $strongarm->value = '50';

  $export['comment_default_per_page_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_job_form';
  $strongarm->value = '1';

  $export['comment_form_location_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_job_form';
  $strongarm->value = '2';

  $export['comment_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_job_form';
  $strongarm->value = '0';

  $export['comment_preview_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_job_form';
  $strongarm->value = '0';

  $export['comment_subject_field_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_job_form';
  $strongarm->value = 'none';

  $export['comment_upload_images_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_job_form';
  $strongarm->value = '1';

  $export['comment_upload_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_job_form';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '1',
    'revision_information' => '4',
    'author' => '5',
    'options' => '6',
    'comment_settings' => '8',
    'menu' => '2',
    'taxonomy' => '-4',
    'book' => '3',
    'path' => '7',
    'attachments' => '-3',
    'og_nodeapi' => '-1',
  );

  $export['content_extra_weights_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_job_form';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_job_form';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_job_form';
  $strongarm->value = 0;

  $export['show_diff_inline_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_job_form';
  $strongarm->value = 1;

  $export['show_preview_changes_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_job_form';
  $strongarm->value = '1';

  $export['upload_job_form'] = $strongarm;
  return $export;
}
