<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_job_board_context_default_contexts() {
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
        0 => 'job_form',
      ),
      'options' => array(),
    ),
    'views' => array(
      'values' => array(
        0 => 'eduglu_job_board',
      ),
      'options' => array(),
    ),
  );
  $context->reactions = array(
    'menu' => 'job-postings',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('context for space jobs feature');

  $export['spaces-feature-job'] = $context;
  return $export;
}
