<?php
/**
 * @file
 * panopoly_news.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function panopoly_news_user_default_roles() {
  $roles = array();

  // Exported role: panopoly news author.
  $roles['panopoly news author'] = array(
    'name' => 'panopoly news author',
    'weight' => '4',
  );

  // Exported role: panopoly news editor.
  $roles['panopoly news editor'] = array(
    'name' => 'panopoly news editor',
    'weight' => '3',
  );

  return $roles;
}
