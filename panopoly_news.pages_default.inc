<?php
/**
 * @file
 * panopoly_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panopoly_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panopoly_news_articles_author';
  $page->task = 'page';
  $page->admin_title = 'More News Articles By This Author';
  $page->admin_description = 'Page presents basic information about the author and the articles they have written.';
  $page->path = 'news/%name';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'User: name',
      'name' => 'user_name',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panopoly_news_articles_author_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'panopoly_news_articles_author';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'moscone_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_articles_by_author-panopoly_news_author_main_content_grid';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => NULL,
      'widget_title' => 'Articles By This Author',
      'items_per_page' => '0',
      'context' => array(
        0 => 'argument_user_name_1',
      ),
      'use_pager' => 0,
      'pager_id' => '',
      'fields_override' => array(
        'field_panopoly_news_image' => 1,
        'title' => 1,
        'created' => 1,
        'body' => 1,
        'view_node' => 1,
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['contentmain'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'panopoly_news_featured_articles-main_content_grid';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '10',
      'fields_override' => array(
        'created' => 0,
        'field_panopoly_news_image' => 1,
        'title' => 1,
        'name' => 1,
        'body' => 0,
        'field_panopoly_news_tags' => 0,
      ),
      'view_mode' => NULL,
      'widget_title' => 'Recent Featured Articles',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['footer'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_articles_by_author-panopoly_news_author_about';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '1',
      'fields_override' => array(
        'name' => 1,
        'picture' => 1,
      ),
      'view_mode' => NULL,
      'widget_title' => 'About the Author',
      'context' => array(
        0 => 'argument_user_name_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['sidebar'][0] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panopoly_news_articles_author'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panopoly_news_home_page';
  $page->task = 'page';
  $page->admin_title = 'News Home Page';
  $page->admin_description = 'The primary disambiguation page for all things news-related. Think of as the primary page of a blog or news section of your site.';
  $page->path = 'news';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panopoly_news_home_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'panopoly_news_home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'webb_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'panopoly_news_article_by_topic-main_content_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '',
      'items_per_page' => '3',
      'fields_override' => array(
        'created' => 0,
        'field_panopoly_news_image' => 1,
        'title' => 1,
        'name' => 1,
        'body' => 1,
        'field_panopoly_news_tags' => 0,
      ),
      'view_mode' => NULL,
      'widget_title' => '',
      'arguments' => array(
        'field_panopoly_news_tags_tid' => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'panopoly_news_featured_articles-side_content_area';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '3',
      'fields_override' => array(
        'created' => 0,
        'field_panopoly_news_image' => 1,
        'title' => 1,
        'name' => 1,
        'body' => 1,
        'field_panopoly_news_tags' => 0,
      ),
      'view_mode' => NULL,
      'widget_title' => 'Recent Features',
      'offset' => '1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'contentheader';
    $pane->type = 'views_panes';
    $pane->subtype = 'panopoly_news_featured_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => NULL,
      'widget_title' => 'Top Story',
      'items_per_page' => NULL,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['contentheader'][0] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'panopoly_news_article_archive-side_list_expanded';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '10',
      'fields_override' => array(
        'created' => 0,
        'created_1' => 0,
        'field_panopoly_news_image' => 0,
        'title' => 1,
        'name' => 0,
        'body' => 0,
        'view_node' => 0,
        'field_panopoly_news_tags' => 0,
      ),
      'view_mode' => NULL,
      'widget_title' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['sidebar'][0] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'panopoly_news_article_by_topic-side_list_compressed';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '10',
      'view_mode' => 'teaser',
      'widget_title' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['sidebar'][1] = 'new-8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panopoly_news_home_page'] = $page;

  return $pages;

}
