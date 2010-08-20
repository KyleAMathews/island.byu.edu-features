<?php

/**
 * Implementation of hook_content_default_fields().
 */
function eduglu_job_board_content_default_fields() {
  $fields = array();

  // Exported field: field_attachment
  $fields['job_form-field_attachment'] = array(
    'field_name' => 'field_attachment',
    'type_name' => 'job_form',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps odt ods odp py rb zip java swf pages key numbers gz tar bz2',
      'file_path' => '[uid]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'File attachment',
      'weight' => '-2',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_company
  $fields['job_form-field_company'] = array(
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
      'weight' => '49',
      'description' => 'Your company name',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contact_email
  $fields['job_form-field_contact_email'] = array(
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
      'weight' => '51',
      'description' => 'Your email address',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contact_name
  $fields['job_form-field_contact_name'] = array(
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
      'weight' => '48',
      'description' => 'Your name',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contact_phone_number
  $fields['job_form-field_contact_phone_number'] = array(
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
      'weight' => '50',
      'description' => 'Your phone number',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_eduglu_job_deadline
  $fields['job_form-field_eduglu_job_deadline'] = array(
    'field_name' => 'field_eduglu_job_deadline',
    'type_name' => 'job_form',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
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
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'strtotime',
      'default_value_code' => '+1month',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'j F Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Application Deadline',
      'weight' => '44',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_eduglu_job_international
  $fields['job_form-field_eduglu_job_international'] = array(
    'field_name' => 'field_eduglu_job_international',
    'type_name' => 'job_form',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
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
    'allowed_values' => 'yes|Yes
no|No',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'International students',
      'weight' => '47',
      'description' => 'Can International Students apply to this job?',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_eduglu_job_job_type
  $fields['job_form-field_eduglu_job_job_type'] = array(
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
      'weight' => '45',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_eduglu_job_salary
  $fields['job_form-field_eduglu_job_salary'] = array(
    'field_name' => 'field_eduglu_job_salary',
    'type_name' => 'job_form',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
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
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_eduglu_job_salary][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Salary Range',
      'weight' => '46',
      'description' => 'Please enter the expected Salary range or Hourly wage range. It is acceptable also to list "DOE" or "Other" if an explanation is provided in the description.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_eduglu_job_status
  $fields['job_form-field_eduglu_job_status'] = array(
    'field_name' => 'field_eduglu_job_status',
    'type_name' => 'job_form',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
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
    'allowed_values' => 'open|Open
closed|Closed',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Job status',
      'weight' => '43',
      'description' => 'If you fill your job, edit this posting and change the job status to closed.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Application Deadline');
  t('Company');
  t('Contact Email');
  t('Contact Name');
  t('Contact Phone Number');
  t('File attachment');
  t('International students');
  t('Job Type');
  t('Job status');
  t('Salary Range');

  return $fields;
}
