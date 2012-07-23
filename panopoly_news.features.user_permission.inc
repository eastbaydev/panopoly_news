<?php
/**
 * @file
 * panopoly_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function panopoly_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: create panopoly_news_article content.
  $permissions['create panopoly_news_article content'] = array(
    'name' => 'create panopoly_news_article content',
    'roles' => array(
      0 => 'panopoly news editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any panopoly_news_article content.
  $permissions['delete any panopoly_news_article content'] = array(
    'name' => 'delete any panopoly_news_article content',
    'roles' => array(
      0 => 'panopoly news editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panopoly_news_article content.
  $permissions['delete own panopoly_news_article content'] = array(
    'name' => 'delete own panopoly_news_article content',
    'roles' => array(
      0 => 'panopoly news editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panopoly_page content.
  $permissions['delete own panopoly_page content'] = array(
    'name' => 'delete own panopoly_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any panopoly_news_article content.
  $permissions['edit any panopoly_news_article content'] = array(
    'name' => 'edit any panopoly_news_article content',
    'roles' => array(
      0 => 'panopoly news editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own panopoly_news_article content.
  $permissions['edit own panopoly_news_article content'] = array(
    'name' => 'edit own panopoly_news_article content',
    'roles' => array(
      0 => 'panopoly news editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
