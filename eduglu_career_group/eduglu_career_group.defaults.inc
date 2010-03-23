<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _eduglu_career_group_content_default_fields() {
  $fields = array();

  // Exported field: field_alumni_bachelor_year
  $fields[] = array(
    'field_name' => 'field_alumni_bachelor_year',
    'type_name' => 'alumni_profile',
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
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_bachelor_year][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Year graduated with bachelors degree?',
      'weight' => '13',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_classes_helpful
  $fields[] = array(
    'field_name' => 'field_alumni_classes_helpful',
    'type_name' => 'alumni_profile',
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
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_classes_helpful][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Classes that really helped me prepare for my career?',
      'weight' => '14',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_classes_wish_taken
  $fields[] = array(
    'field_name' => 'field_alumni_classes_wish_taken',
    'type_name' => 'alumni_profile',
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
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_classes_wish_taken][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Classes I wish I\'d taken?',
      'weight' => '15',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_company
  $fields[] = array(
    'field_name' => 'field_alumni_company',
    'type_name' => 'alumni_profile',
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
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_company][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Company',
      'weight' => '4',
      'description' => 'Enter the name of your current employer',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_experiences
  $fields[] = array(
    'field_name' => 'field_alumni_experiences',
    'type_name' => 'alumni_profile',
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
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_experiences][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'What experiences prepared me most for my career?',
      'weight' => '10',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_graduate_degree
  $fields[] = array(
    'field_name' => 'field_alumni_graduate_degree',
    'type_name' => 'alumni_profile',
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
          '_error_element' => 'default_value_widget][field_alumni_graduate_degree][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Graduate studies',
      'weight' => '16',
      'description' => 'If applicable, enter the name of your terminal degree (masters of doctorate).',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_graduate_year
  $fields[] = array(
    'field_name' => 'field_alumni_graduate_year',
    'type_name' => 'alumni_profile',
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
          '_error_element' => 'default_value_widget][field_alumni_graduate_year][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Year graduated with terminal graduate degree?',
      'weight' => '17',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_influence
  $fields[] = array(
    'field_name' => 'field_alumni_influence',
    'type_name' => 'alumni_profile',
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
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_influence][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'What influenced my career choices/path?',
      'weight' => '9',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_job_skills
  $fields[] = array(
    'field_name' => 'field_alumni_job_skills',
    'type_name' => 'alumni_profile',
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
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_job_skills][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Skills needed in my profession?',
      'weight' => '7',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_job_title
  $fields[] = array(
    'field_name' => 'field_alumni_job_title',
    'type_name' => 'alumni_profile',
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
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_job_title][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Job Title',
      'weight' => '3',
      'description' => 'Current job title',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_location
  $fields[] = array(
    'field_name' => 'field_alumni_location',
    'type_name' => 'alumni_profile',
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
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_location][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => '25',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_name
  $fields[] = array(
    'field_name' => 'field_alumni_name',
    'type_name' => 'alumni_profile',
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
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Name (first and last)',
      'weight' => '24',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_old_jobs
  $fields[] = array(
    'field_name' => 'field_alumni_old_jobs',
    'type_name' => 'alumni_profile',
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
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_old_jobs][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Jobs I had before this one?',
      'weight' => '11',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_personal_interests
  $fields[] = array(
    'field_name' => 'field_alumni_personal_interests',
    'type_name' => 'alumni_profile',
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
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_personal_interests][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Personal Interests',
      'weight' => '27',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_picture
  $fields[] = array(
    'field_name' => 'field_alumni_picture',
    'type_name' => 'alumni_profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '200x200',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'collapsible' => '2',
      'resolution' => '243x150',
      'enforce_ratio' => 1,
      'croparea' => '500x500',
      'label' => 'Picture',
      'weight' => '-4',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_alumni_qualities
  $fields[] = array(
    'field_name' => 'field_alumni_qualities',
    'type_name' => 'alumni_profile',
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
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_qualities][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Personal qualities needed in my profession?',
      'weight' => '8',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_salary
  $fields[] = array(
    'field_name' => 'field_alumni_salary',
    'type_name' => 'alumni_profile',
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
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_salary][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Typical salary ranges:  starting? midcareer?',
      'weight' => '8',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_undergraduate_degre
  $fields[] = array(
    'field_name' => 'field_alumni_undergraduate_degre',
    'type_name' => 'alumni_profile',
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
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_undergraduate_degre][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Undergraduate major',
      'weight' => '12',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_website
  $fields[] = array(
    'field_name' => 'field_alumni_website',
    'type_name' => 'alumni_profile',
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
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Website',
      'weight' => '26',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_alumni_what_i_do
  $fields[] = array(
    'field_name' => 'field_alumni_what_i_do',
    'type_name' => 'alumni_profile',
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
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_what_i_do][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'What I do',
      'weight' => '5',
      'description' => 'Describe briefly what you do in your job.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_what_i_like
  $fields[] = array(
    'field_name' => 'field_alumni_what_i_like',
    'type_name' => 'alumni_profile',
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
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_what_i_like][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'What I like about my profession?',
      'weight' => '6',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('Classes I wish I\'d taken?'),
    t('Classes that really helped me prepare for my career?'),
    t('Company'),
    t('Graduate studies'),
    t('Job Title'),
    t('Jobs I had before this one?'),
    t('Location'),
    t('Name (first and last)'),
    t('Personal Interests'),
    t('Personal qualities needed in my profession?'),
    t('Picture'),
    t('Skills needed in my profession?'),
    t('Typical salary ranges:  starting? midcareer?'),
    t('Undergraduate major'),
    t('Website'),
    t('What I do'),
    t('What I like about my profession?'),
    t('What experiences prepared me most for my career?'),
    t('What influenced my career choices/path?'),
    t('Year graduated with bachelors degree?'),
    t('Year graduated with terminal graduate degree?'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _eduglu_career_group_ctools_plugin_api() {
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
function _eduglu_career_group_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_alumni_about_me
  $groups[] = array(
    'type_name' => 'alumni_profile',
    'group_name' => 'group_alumni_about_me',
    'label' => 'About Me',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
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
      ),
    ),
    'weight' => '-3',
    'group_type' => 'standard',
    'fields' => array(
      '0' => 'field_alumni_name',
      '1' => 'field_alumni_location',
      '2' => 'field_alumni_website',
      '3' => 'field_alumni_personal_interests',
    ),
  );

  // Exported group: group_alumni_about_my_job
  $groups[] = array(
    'type_name' => 'alumni_profile',
    'group_name' => 'group_alumni_about_my_job',
    'label' => 'About My Job',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
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
      ),
    ),
    'weight' => '-2',
    'group_type' => 'standard',
    'fields' => array(
      '0' => 'field_alumni_job_title',
      '1' => 'field_alumni_company',
      '2' => 'field_alumni_what_i_do',
      '3' => 'field_alumni_what_i_like',
      '4' => 'field_alumni_job_skills',
      '5' => 'field_alumni_salary',
    ),
  );

  // Exported group: group_alumni_preparations
  $groups[] = array(
    'type_name' => 'alumni_profile',
    'group_name' => 'group_alumni_preparations',
    'label' => 'Preparations',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
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
      ),
    ),
    'weight' => '-1',
    'group_type' => 'standard',
    'fields' => array(
      '0' => 'field_alumni_qualities',
      '1' => 'field_alumni_influence',
      '2' => 'field_alumni_experiences',
      '3' => 'field_alumni_old_jobs',
      '4' => 'field_alumni_undergraduate_degre',
      '5' => 'field_alumni_bachelor_year',
      '6' => 'field_alumni_classes_helpful',
      '7' => 'field_alumni_classes_wish_taken',
      '8' => 'field_alumni_graduate_degree',
      '9' => 'field_alumni_graduate_year',
    ),
  );

  // Translatables
  array(
    t('About Me'),
    t('About My Job'),
    t('Preparations'),
  );

  return $groups;
}

/**
 * Helper to implementation of hook_imagecache_default_presets().
 */
function _eduglu_career_group_imagecache_default_presets() {
  $items = array(
    'alumni_profile_picture' => array(
      'presetname' => 'alumni_profile_picture',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '124',
            'height' => '200',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _eduglu_career_group_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Alumni',
    'path' => 'alumni',
    'weight' => '-48',
    'description' => 'Searchable list of alumni profiles.',
  );
  // Translatables
  array(
    t('Alumni'),
    t('Searchable list of alumni profiles.'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _eduglu_career_group_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_about_me
  $permissions[] = array(
    'name' => 'edit field_about_me',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_alumni_bachelor_year
  $permissions[] = array(
    'name' => 'edit field_alumni_bachelor_year',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_classes_helpful
  $permissions[] = array(
    'name' => 'edit field_alumni_classes_helpful',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_classes_wish_taken
  $permissions[] = array(
    'name' => 'edit field_alumni_classes_wish_taken',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_company
  $permissions[] = array(
    'name' => 'edit field_alumni_company',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_experiences
  $permissions[] = array(
    'name' => 'edit field_alumni_experiences',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_graduate_degree
  $permissions[] = array(
    'name' => 'edit field_alumni_graduate_degree',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_graduate_year
  $permissions[] = array(
    'name' => 'edit field_alumni_graduate_year',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_influence
  $permissions[] = array(
    'name' => 'edit field_alumni_influence',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_job_skills
  $permissions[] = array(
    'name' => 'edit field_alumni_job_skills',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_job_title
  $permissions[] = array(
    'name' => 'edit field_alumni_job_title',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_location
  $permissions[] = array(
    'name' => 'edit field_alumni_location',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_name
  $permissions[] = array(
    'name' => 'edit field_alumni_name',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_old_jobs
  $permissions[] = array(
    'name' => 'edit field_alumni_old_jobs',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_personal_interests
  $permissions[] = array(
    'name' => 'edit field_alumni_personal_interests',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_picture
  $permissions[] = array(
    'name' => 'edit field_alumni_picture',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_qualities
  $permissions[] = array(
    'name' => 'edit field_alumni_qualities',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_salary
  $permissions[] = array(
    'name' => 'edit field_alumni_salary',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_undergraduate_degre
  $permissions[] = array(
    'name' => 'edit field_alumni_undergraduate_degre',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_website
  $permissions[] = array(
    'name' => 'edit field_alumni_website',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_what_i_do
  $permissions[] = array(
    'name' => 'edit field_alumni_what_i_do',
    'roles' => array(),
  );

  // Exported permission: edit field_alumni_what_i_like
  $permissions[] = array(
    'name' => 'edit field_alumni_what_i_like',
    'roles' => array(),
  );

  // Exported permission: view field_about_me
  $permissions[] = array(
    'name' => 'view field_about_me',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_bachelor_year
  $permissions[] = array(
    'name' => 'view field_alumni_bachelor_year',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_classes_helpful
  $permissions[] = array(
    'name' => 'view field_alumni_classes_helpful',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_classes_wish_taken
  $permissions[] = array(
    'name' => 'view field_alumni_classes_wish_taken',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_company
  $permissions[] = array(
    'name' => 'view field_alumni_company',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_experiences
  $permissions[] = array(
    'name' => 'view field_alumni_experiences',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_graduate_degree
  $permissions[] = array(
    'name' => 'view field_alumni_graduate_degree',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_graduate_year
  $permissions[] = array(
    'name' => 'view field_alumni_graduate_year',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_influence
  $permissions[] = array(
    'name' => 'view field_alumni_influence',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_job_skills
  $permissions[] = array(
    'name' => 'view field_alumni_job_skills',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_job_title
  $permissions[] = array(
    'name' => 'view field_alumni_job_title',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_location
  $permissions[] = array(
    'name' => 'view field_alumni_location',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_name
  $permissions[] = array(
    'name' => 'view field_alumni_name',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_old_jobs
  $permissions[] = array(
    'name' => 'view field_alumni_old_jobs',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_personal_interests
  $permissions[] = array(
    'name' => 'view field_alumni_personal_interests',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_picture
  $permissions[] = array(
    'name' => 'view field_alumni_picture',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_qualities
  $permissions[] = array(
    'name' => 'view field_alumni_qualities',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_undergraduate_degre
  $permissions[] = array(
    'name' => 'view field_alumni_undergraduate_degre',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_website
  $permissions[] = array(
    'name' => 'view field_alumni_website',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_what_i_do
  $permissions[] = array(
    'name' => 'view field_alumni_what_i_do',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_what_i_like
  $permissions[] = array(
    'name' => 'view field_alumni_what_i_like',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _eduglu_career_group_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_alumni_profile';
  $strongarm->value = '0';

  $export['comment_alumni_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_alumni_profile';
  $strongarm->value = 0;

  $export['comment_anonymous_alumni_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_alumni_profile';
  $strongarm->value = '3';

  $export['comment_controls_alumni_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_alumni_profile';
  $strongarm->value = '4';

  $export['comment_default_mode_alumni_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_alumni_profile';
  $strongarm->value = '1';

  $export['comment_default_order_alumni_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_alumni_profile';
  $strongarm->value = '50';

  $export['comment_default_per_page_alumni_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_alumni_profile';
  $strongarm->value = '0';

  $export['comment_form_location_alumni_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_alumni_profile';
  $strongarm->value = '1';

  $export['comment_preview_alumni_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_alumni_profile';
  $strongarm->value = '1';

  $export['comment_subject_field_alumni_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_alumni_profile';
  $strongarm->value = 'none';

  $export['comment_upload_images_alumni_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_alumni_profile';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '3',
    'comment_settings' => '6',
    'menu' => '0',
    'book' => '2',
    'path' => '4',
    'attachments' => '5',
    'og_nodeapi' => '1',
  );

  $export['content_extra_weights_alumni_profile'] = $strongarm;
  return $export;
}
