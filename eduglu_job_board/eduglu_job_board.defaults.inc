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
      'weight' => '33',
      'parent' => 'group_job_contact_fields',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
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
      'default_value_php' => NULL,
      'rows' => '1',
      'size' => 60,
      'label' => 'Company',
      'weight' => '33',
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
      'weight' => '35',
      'parent' => 'group_job_contact_fields',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
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
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_contact_email][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'rows' => '1',
      'size' => '60',
      'label' => 'Contact Email',
      'weight' => '35',
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
      'weight' => '32',
      'parent' => 'group_job_contact_fields',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
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
      'default_value_php' => NULL,
      'rows' => '1',
      'size' => 60,
      'label' => 'Contact Name',
      'weight' => '32',
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
      'weight' => '34',
      'parent' => 'group_job_contact_fields',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
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
      'default_value_php' => NULL,
      'rows' => '1',
      'size' => 60,
      'label' => 'Contact Phone Number',
      'weight' => '34',
      'description' => 'Your phone number',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_eduglu_job_job_type
  $fields[] = array(
    'field_name' => 'field_eduglu_job_job_type',
    'type_name' => 'job_form',
    'display_settings' => array(
      'weight' => '31',
      'parent' => 'group_job_contact_fields',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
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
    'allowed_values' => 'FT-Alum|Full-time (Experienced Alumni)
FT-New|Full-time (New Graduate)
Internship
PT-School|Part-time In-School
temp_consulting|Temporary Consulting
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Job Type',
      'weight' => '31',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  array(
    t('Company'),
    t('Contact Email'),
    t('Contact Name'),
    t('Contact Phone Number'),
    t('Job Type'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _eduglu_job_board_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces-feature-job';
  $context->description = 'context for space jobs feature';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        '0' => 'job_form',
      ),
      'options' => array(),
    ),
    'views' => array(
      'values' => array(
        '0' => 'eduglu_job_board',
      ),
      'options' => array(),
    ),
  );
  $context->reactions = array(
    'menu' => 'job-postings',
  );
  $context->condition_mode = 0;

  $translatables['spaces-feature-job'] = array(
    t('context for space jobs feature'),
  );

  $export['spaces-feature-job'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _eduglu_job_board_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
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
        'weight' => '-1',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-1',
    'group_type' => 'standard',
    'fields' => array(
      '0' => 'field_eduglu_job_job_type',
      '1' => 'field_contact_name',
      '2' => 'field_company',
      '3' => 'field_contact_phone_number',
      '4' => 'field_contact_email',
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
    'revision_information' => '20',
    'comment_settings' => '30',
    'menu' => '2',
    'taxonomy' => '-4',
    'book' => '10',
    'path' => '30',
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
