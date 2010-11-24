<div id="node-<?php print $node->nid; ?>" class="container node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block">

  <div class="meta grid-10 clear-block">
    <div class="user-picture grid-2 alpha">
      <?php print $picture ?>
    </div>
    <div class="grid-8 omega meta-info">
      <?php if ($teaser): ?>
        <h2 class="node-title"><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
      <?php endif; ?>
      <?php if ($submitted): ?>
        <div class="node-submitted clear-block"><?php print $submitted ?></div>
      <?php endif; ?>
    </div>
  </div>

  <div class="content grid-12 clear-block">
    <ul class="eduglu-job-info">
      <li><strong>Job status:</strong> <?php print $field_eduglu_job_status[0]['view'] ?></li>
      <li><strong>Application deadline:</strong> <?php print $field_eduglu_job_deadline[0]['view'] ?></li>
      <li><strong>Job type:</strong> <?php print $field_eduglu_job_job_type[0]['view'] ?></li>
      <li><strong>Salary range:</strong> <?php print $field_eduglu_job_salary[0]['view'] ?></li>
      <li><strong>International students:</strong> <?php print $field_eduglu_job_international[0]['view'] ?></li>
      <li><strong>Contact name:</strong> <?php print $field_contact_name[0]['view'] ?></li>
      <li><strong>Company:</strong> <?php print $field_company[0]['view'] ?></li>
      <li><strong>Contact phone number:</strong> <?php print $field_contact_phone_number[0]['view'] ?></li>
      <li><strong>Contact email:</strong> <?php print $field_contact_email[0]['view'] ?></li>
    </ul>
    <?php print $node->content['body']['#value'] ?>
  </div>
  
  <?php print $groups_string; ?>
  <?php
    if ($links || $terms) {
      print '<div class="node-links alpha grid-10">';
      if (!empty($links)) { print $links; }
      if (!empty($terms)) { print $terms; }
      print '</div>';
    }
  ?>
  
</div>
