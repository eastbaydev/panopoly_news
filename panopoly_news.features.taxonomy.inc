<?php
/**
 * @file
 * panopoly_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function panopoly_news_taxonomy_default_vocabularies() {
  return array(
    'panopoly_news_topics' => array(
      'name' => 'Topics',
      'machine_name' => 'panopoly_news_topics',
      'description' => 'Topics, associated with News Articles by default.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
