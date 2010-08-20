<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function eduglu_job_board_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:job-postings
  $menu_links['features:job-postings'] = array(
    'menu_name' => 'features',
    'link_path' => 'job-postings',
    'router_path' => 'job-postings',
    'link_title' => 'Jobs',
    'options' => array(
      'attributes' => array(
        'title' => 'See posted jobs. Post new jobs',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Jobs');


  return $menu_links;
}
