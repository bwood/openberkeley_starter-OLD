<?php
/**
 * @file
 * openberkeley_starter.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openberkeley_starter_default_page_manager_pages() {

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = 'Home page';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
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
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Welcome to your Open Berkeley site';
  $display->uuid = 'a9cb4da8-0760-4e3a-b383-715fca040e22';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a307833c-dd56-4c22-9190-1f7176c92e02';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'panopoly_widgets_general_content-piece_of_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'field_featured_image' => TRUE,
      'title' => TRUE,
      'created' => TRUE,
      'name' => TRUE,
    ),
    'exposed' => array(
      'title' => 'Welcome',
      'type' => 'All',
    ),
    'view_settings' => 'nodes',
    'header_type' => 'none',
    'view_mode' => 'subpane',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a307833c-dd56-4c22-9190-1f7176c92e02';
  $display->content['new-a307833c-dd56-4c22-9190-1f7176c92e02'] = $pane;
  $display->panels['contentmain'][0] = 'new-a307833c-dd56-4c22-9190-1f7176c92e02';
  $pane = new stdClass();
  $pane->pid = 'new-8799fdcc-a2cb-42d6-8b69-d2bbbdc533e9';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'openberkeley_news_archive-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'teaser',
    'widget_title' => '',
    'items_per_page' => '',
    'more_link' => 1,
    'override_title' => '',
    'override_title_text' => '',
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8799fdcc-a2cb-42d6-8b69-d2bbbdc533e9';
  $display->content['new-8799fdcc-a2cb-42d6-8b69-d2bbbdc533e9'] = $pane;
  $display->panels['sidebar'][0] = 'new-8799fdcc-a2cb-42d6-8b69-d2bbbdc533e9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
