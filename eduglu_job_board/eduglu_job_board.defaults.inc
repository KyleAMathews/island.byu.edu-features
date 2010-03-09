<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _eduglu_job_board_content_default_fields() {
  $fields = array();

  // Exported field: field_company
  $fields[] = array(
    'field_name' => 'field_company',
    'type_name' => 'job_form',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => '',
      'rows' => '1',
      'label' => 'Company',
      'weight' => '-4',
      'description' => 'Your company name',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contact_email
  $fields[] = array(
    'field_name' => 'field_contact_email',
    'type_name' => 'job_form',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => '',
      'rows' => '1',
      'label' => 'Contact Email',
      'weight' => '-3',
      'description' => 'Your email address',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contact_name
  $fields[] = array(
    'field_name' => 'field_contact_name',
    'type_name' => 'job_form',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => '',
      'rows' => '1',
      'label' => 'Contact Name',
      'weight' => '-4',
      'description' => 'Your name',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contact_phone_number
  $fields[] = array(
    'field_name' => 'field_contact_phone_number',
    'type_name' => 'job_form',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => '',
      'rows' => '1',
      'label' => 'Contact Phone Number',
      'weight' => '-3',
      'description' => 'Your phone number',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('Company'),
    t('Contact Email'),
    t('Contact Name'),
    t('Contact Phone Number'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglu_job_board_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'spaces',
    'attribute' => 'feature',
    'value' => 'job',
    'description' => 'context for space jobs feature',
    'node' => array(
      '0' => 'job_form',
    ),
    'views' => array(
      '0' => 'eduglu_job_board',
    ),
    'menu' => 'job-postings',
    'block' => array(),
  );
  return $items;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _eduglu_job_board_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_fieldgroup_default_groups().
 */
function _eduglu_job_board_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_job_contact_fields
  $groups[] = array(
    'type_name' => 'job_form',
    'group_name' => 'group_job_contact_fields',
    'label' => 'Job Contact Fields',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => NULL,
        'full' => NULL,
        'label' => NULL,
      ),
    ),
    'weight' => '-1',
    'group_type' => 'standard',
    'fields' => array(
      '0' => 'field_company',
      '1' => 'field_contact_name',
      '2' => 'field_contact_email',
      '3' => 'field_contact_phone_number',
    ),
  );

  // Translatables
  array(
    t('Job Contact Fields'),
  );

  return $groups;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _eduglu_job_board_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Jobs',
    'path' => 'job-postings',
    'weight' => '0',
    'description' => 'See posted jobs. Post new jobs',
  );
  // Translatables
  array(
    t('Jobs'),
    t('See posted jobs. Post new jobs'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _eduglu_job_board_strongarm() {
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
    'body_field' => '0',
    'menu' => '2',
    'taxonomy' => '-4',
    'attachments' => '-3',
    'og_nodeapi' => '-2',
  );

  $export['content_extra_weights_job_form'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_job_form';
  $strongarm->value = array(
    '0' => 'status',
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
