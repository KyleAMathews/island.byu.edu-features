<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function eduglu_job_board_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_company
  $permissions['edit field_company'] = array(
    'name' => 'edit field_company',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_contact_email
  $permissions['edit field_contact_email'] = array(
    'name' => 'edit field_contact_email',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_contact_name
  $permissions['edit field_contact_name'] = array(
    'name' => 'edit field_contact_name',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_contact_phone_number
  $permissions['edit field_contact_phone_number'] = array(
    'name' => 'edit field_contact_phone_number',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_eduglu_job_deadline
  $permissions['edit field_eduglu_job_deadline'] = array(
    'name' => 'edit field_eduglu_job_deadline',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_eduglu_job_international
  $permissions['edit field_eduglu_job_international'] = array(
    'name' => 'edit field_eduglu_job_international',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_eduglu_job_job_type
  $permissions['edit field_eduglu_job_job_type'] = array(
    'name' => 'edit field_eduglu_job_job_type',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_company
  $permissions['view field_company'] = array(
    'name' => 'view field_company',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_contact_email
  $permissions['view field_contact_email'] = array(
    'name' => 'view field_contact_email',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_contact_name
  $permissions['view field_contact_name'] = array(
    'name' => 'view field_contact_name',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_contact_phone_number
  $permissions['view field_contact_phone_number'] = array(
    'name' => 'view field_contact_phone_number',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_eduglu_job_deadline
  $permissions['view field_eduglu_job_deadline'] = array(
    'name' => 'view field_eduglu_job_deadline',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_eduglu_job_international
  $permissions['view field_eduglu_job_international'] = array(
    'name' => 'view field_eduglu_job_international',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_eduglu_job_job_type
  $permissions['view field_eduglu_job_job_type'] = array(
    'name' => 'view field_eduglu_job_job_type',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  return $permissions;
}
