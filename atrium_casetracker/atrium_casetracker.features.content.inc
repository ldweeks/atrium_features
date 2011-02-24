<?php

/**
 * Implementation of hook_content_default_fields().
 */
function atrium_casetracker_content_default_fields() {
  $fields = array();

  // Exported field: field_due_date
  $fields['casetracker_basic_case-field_due_date'] = array(
    'field_name' => 'field_due_date',
    'type_name' => 'casetracker_basic_case',
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
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'm/d/Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-0:+3',
      'label_position' => 'above',
      'label' => 'Due Date',
      'weight' => '-1',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Due Date');

  return $fields;
}
