<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function eduglu_job_board_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_job_contact_fields
  $groups['job_form-group_job_contact_fields'] = array(
    'type_name' => 'job_form',
    'group_name' => 'group_job_contact_fields',
    'label' => 'Job Fields',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
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
        'label' => 'hidden',
      ),
    ),
    'weight' => '0',
    'group_type' => 'standard',
    'fields' => array(
      '0' => 'field_eduglu_job_status',
      '1' => 'field_eduglu_job_deadline',
      '2' => 'field_eduglu_job_job_type',
      '3' => 'field_eduglu_job_salary',
      '4' => 'field_eduglu_job_international',
      '5' => 'field_contact_name',
      '6' => 'field_company',
      '7' => 'field_contact_phone_number',
      '8' => 'field_contact_email',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Job Fields');

  return $groups;
}
