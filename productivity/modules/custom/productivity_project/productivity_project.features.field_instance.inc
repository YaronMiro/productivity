<?php
/**
 * @file
 * productivity_project.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function productivity_project_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'multifield-field_table_rate-field_hours'.
  $field_instances['multifield-field_table_rate-field_hours'] = array(
    'bundle' => 'field_table_rate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_hours',
    'label' => 'Total hours',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'multifield-field_table_rate-field_issue_type'.
  $field_instances['multifield-field_table_rate-field_issue_type'] = array(
    'bundle' => 'field_table_rate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_issue_type',
    'label' => 'Work type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'multifield-field_table_rate-field_issue_type_label'.
  $field_instances['multifield-field_table_rate-field_issue_type_label'] = array(
    'bundle' => 'field_table_rate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Override to default title, in the hour report.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_issue_type_label',
    'label' => 'Work type display',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'multifield-field_table_rate-field_rate'.
  $field_instances['multifield-field_table_rate-field_rate'] = array(
    'bundle' => 'field_table_rate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'money',
        'settings' => array(),
        'type' => 'money_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_rate',
    'label' => 'Rate',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'money',
      'settings' => array(
        'currencies' => array(
          'allowed_currencies' => array(
            'ADF' => 0,
            'ADP' => 0,
            'AED' => 0,
            'AFA' => 0,
            'AFN' => 0,
            'ALK' => 0,
            'ALL' => 0,
            'AMD' => 0,
            'ANG' => 0,
            'AOA' => 0,
            'AOK' => 0,
            'AON' => 0,
            'AOR' => 0,
            'ARA' => 0,
            'ARL' => 0,
            'ARM' => 0,
            'ARP' => 0,
            'ARS' => 0,
            'ATS' => 0,
            'AUD' => 0,
            'AWG' => 0,
            'AZM' => 0,
            'AZN' => 0,
            'BAM' => 0,
            'BBD' => 0,
            'BDT' => 0,
            'BEC' => 0,
            'BEF' => 0,
            'BEL' => 0,
            'BGL' => 0,
            'BGN' => 0,
            'BHD' => 0,
            'BIF' => 0,
            'BMD' => 0,
            'BND' => 0,
            'BOB' => 0,
            'BOP' => 0,
            'BOV' => 0,
            'BRB' => 0,
            'BRC' => 0,
            'BRE' => 0,
            'BRL' => 0,
            'BRN' => 0,
            'BRR' => 0,
            'BRZ' => 0,
            'BSD' => 0,
            'BTN' => 0,
            'BWP' => 0,
            'BYB' => 0,
            'BYR' => 0,
            'BZD' => 0,
            'CAD' => 0,
            'CDF' => 0,
            'CHE' => 0,
            'CHF' => 0,
            'CHW' => 0,
            'CLE' => 0,
            'CLF' => 0,
            'CLP' => 0,
            'CNY' => 0,
            'COP' => 0,
            'COU' => 0,
            'CRC' => 0,
            'CSD' => 0,
            'CSK' => 0,
            'CUC' => 0,
            'CUP' => 0,
            'CVE' => 0,
            'CYP' => 0,
            'CZK' => 0,
            'DDM' => 0,
            'DEM' => 0,
            'DJF' => 0,
            'DKK' => 0,
            'DOP' => 0,
            'DZD' => 0,
            'ECS' => 0,
            'ECV' => 0,
            'EEK' => 0,
            'EGP' => 0,
            'ERN' => 0,
            'ESA' => 0,
            'ESB' => 0,
            'ESP' => 0,
            'ETB' => 0,
            'EUR' => 'EUR',
            'FIM' => 0,
            'FJD' => 0,
            'FKP' => 0,
            'FRF' => 0,
            'GBP' => 0,
            'GEL' => 0,
            'GHC' => 0,
            'GHS' => 0,
            'GIP' => 0,
            'GMD' => 0,
            'GNE' => 0,
            'GNF' => 0,
            'GNS' => 0,
            'GQE' => 0,
            'GRD' => 0,
            'GTQ' => 0,
            'GWP' => 0,
            'GYD' => 0,
            'HKD' => 0,
            'HNL' => 0,
            'HRD' => 0,
            'HRK' => 0,
            'HTG' => 0,
            'HUF' => 0,
            'IDR' => 0,
            'IEP' => 0,
            'ILP' => 0,
            'ILR' => 0,
            'ILS' => 'ILS',
            'INR' => 0,
            'IQD' => 0,
            'IRR' => 0,
            'ISJ' => 0,
            'ISK' => 0,
            'ITL' => 0,
            'JMD' => 0,
            'JOD' => 0,
            'JPY' => 0,
            'KES' => 0,
            'KGS' => 0,
            'KHR' => 0,
            'KMF' => 0,
            'KPW' => 0,
            'KRH' => 0,
            'KRW' => 0,
            'KWD' => 0,
            'KYD' => 0,
            'KZT' => 0,
            'LAK' => 0,
            'LBP' => 0,
            'LKR' => 0,
            'LRD' => 0,
            'LSL' => 0,
            'LTL' => 0,
            'LTT' => 0,
            'LUF' => 0,
            'LVL' => 0,
            'LVR' => 0,
            'LYD' => 0,
            'MAD' => 0,
            'MAF' => 0,
            'MCF' => 0,
            'MDC' => 0,
            'MDL' => 0,
            'MGA' => 0,
            'MGF' => 0,
            'MKD' => 0,
            'MKN' => 0,
            'MLF' => 0,
            'MMK' => 0,
            'MNT' => 0,
            'MOP' => 0,
            'MRO' => 0,
            'MTL' => 0,
            'MTP' => 0,
            'MUR' => 0,
            'MVQ' => 0,
            'MVR' => 0,
            'MWK' => 0,
            'MXN' => 0,
            'MXP' => 0,
            'MXV' => 0,
            'MYR' => 0,
            'MZE' => 0,
            'MZM' => 0,
            'MZN' => 0,
            'NAD' => 0,
            'NFD' => 0,
            'NGN' => 0,
            'NIO' => 0,
            'NLG' => 0,
            'NOK' => 0,
            'NPR' => 0,
            'NZD' => 0,
            'OMR' => 0,
            'PAB' => 0,
            'PEH' => 0,
            'PEI' => 0,
            'PEN' => 0,
            'PGK' => 0,
            'PHP' => 0,
            'PKR' => 0,
            'PLN' => 0,
            'PLZ' => 0,
            'PTE' => 0,
            'PYG' => 0,
            'QAR' => 0,
            'RHD' => 0,
            'ROL' => 0,
            'RON' => 0,
            'RSD' => 0,
            'RUB' => 0,
            'RUR' => 0,
            'RWF' => 0,
            'SAR' => 0,
            'SBD' => 0,
            'SCR' => 0,
            'SDD' => 0,
            'SDG' => 0,
            'SDP' => 0,
            'SEK' => 0,
            'SGD' => 0,
            'SHP' => 0,
            'SIT' => 0,
            'SKK' => 0,
            'SLL' => 0,
            'SML' => 0,
            'SOS' => 0,
            'SRD' => 0,
            'SRG' => 0,
            'SSP' => 0,
            'STD' => 0,
            'SUR' => 0,
            'SVC' => 0,
            'SYP' => 0,
            'SZL' => 0,
            'THB' => 0,
            'TJR' => 0,
            'TJS' => 0,
            'TMM' => 0,
            'TMT' => 0,
            'TND' => 0,
            'TOP' => 0,
            'TPE' => 0,
            'TRL' => 0,
            'TRY' => 0,
            'TTD' => 0,
            'TWD' => 0,
            'TZS' => 0,
            'UAH' => 0,
            'UAK' => 0,
            'UGS' => 0,
            'UGX' => 0,
            'USD' => 'USD',
            'USN' => 0,
            'USS' => 0,
            'UYI' => 0,
            'UYN' => 0,
            'UYU' => 0,
            'UZS' => 0,
            'VAL' => 0,
            'VEB' => 0,
            'VEF' => 0,
            'VND' => 0,
            'VUV' => 0,
            'WST' => 0,
            'XAF' => 0,
            'XAG' => 0,
            'XAU' => 0,
            'XBA' => 0,
            'XBB' => 0,
            'XBC' => 0,
            'XBD' => 0,
            'XCD' => 0,
            'XDR' => 0,
            'XEU' => 0,
            'XFO' => 0,
            'XFU' => 0,
            'XOF' => 0,
            'XPD' => 0,
            'XPF' => 0,
            'XPT' => 0,
            'XTS' => 0,
            'XXX' => 0,
            'YDD' => 0,
            'YER' => 0,
            'YUD' => 0,
            'YUG' => 0,
            'YUM' => 0,
            'YUN' => 0,
            'YUO' => 0,
            'YUR' => 0,
            'ZAL' => 0,
            'ZAR' => 0,
            'ZMK' => 0,
            'ZMW' => 0,
            'ZRN' => 0,
            'ZRZ' => 0,
            'ZWD' => 0,
            'ZWL' => 0,
            'ZWN' => 0,
            'ZWR' => 0,
          ),
        ),
        'currency_display_mode' => 'as',
        'currency_select_mode' => 'name',
        'decimals_display_mode' => 'field',
      ),
      'type' => 'money_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'multifield-field_table_rate-field_rate_type'.
  $field_instances['multifield-field_table_rate-field_rate_type'] = array(
    'bundle' => 'field_table_rate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Refer to the unit of the budget amount. hours - per hour price. days - per day price. month - monthly retainer. global - fix amount.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_rate_type',
    'label' => 'Rate type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'multifield-field_table_rate-field_scope'.
  $field_instances['multifield-field_table_rate-field_scope'] = array(
    'bundle' => 'field_table_rate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'interval',
        'settings' => array(),
        'type' => 'interval_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_scope',
    'label' => 'Scope',
    'required' => 0,
    'settings' => array(
      'allowed_periods' => array(
        'day' => 'day',
        'fortnight' => 0,
        'hour' => 'hour',
        'minute' => 0,
        'month' => 0,
        'quarter' => 0,
        'second' => 0,
        'week' => 0,
        'year' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'interval',
      'settings' => array(),
      'type' => 'interval_default',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-project-field_account'.
  $field_instances['node-project-field_account'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_account',
    'label' => 'Account',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'autofill' => array(
          'fields' => array(
            'field_table_rate' => 'field_table_rate',
          ),
          'overwrite' => 1,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-project-field_allow_session_reference'.
  $field_instances['node-project-field_allow_session_reference'] = array(
    'bundle' => 'project',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'This means it\'s a Madaan project.
Whether this project should be allowed as the project reference of a work session.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_allow_session_reference',
    'label' => 'Allow work session reference',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-project-field_close_tracking'.
  $field_instances['node-project-field_close_tracking'] = array(
    'bundle' => 'project',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'If checked, don\'t allow tracking to the project anymore.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_close_tracking',
    'label' => 'Close for tracking',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-project-field_date'.
  $field_instances['node-project-field_date'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => 'Start and end date of project, in case of retainer or hourly without end date, just add a start date.
Setting an end date, will make project invisible in some forms after the end date.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-project-field_gh_milestone'.
  $field_instances['node-project-field_gh_milestone'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The milestone to filter issues.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gh_milestone',
    'label' => 'GH Milstone',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'autofill' => array(
          'status' => 0,
        ),
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-project-field_github_repository_name'.
  $field_instances['node-project-field_github_repository_name'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'One name type is supported -> Account + Project name  (ie. Gizra/generator-hedley).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_github_repository_name',
    'label' => 'Github repository name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-project-field_hours'.
  $field_instances['node-project-field_hours'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hours',
    'label' => 'Total hours',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-project-field_issue_prefix'.
  $field_instances['node-project-field_issue_prefix'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This prefix will be added automatically to the issue number, to make the issue number unique in case you need separate tracking for the same issue on different project.
For example, if I open 2 project for the same github repo, i will be able to separate same issue tracking for both project.
Only fill this if the project is T&M, since it will change the tracking reports.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_prefix',
    'label' => 'Issue prefix',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-project-field_office'.
  $field_instances['node-project-field_office'] = array(
    'bundle' => 'project',
    'default_value' => array(
      0 => array(
        'target_id' => 329,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_office',
    'label' => 'Office',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'autofill' => array(
          'status' => 0,
        ),
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-project-field_payment_terms'.
  $field_instances['node-project-field_payment_terms'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_payment_terms',
    'label' => 'Payment Terms',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-project-field_percentage_notification'.
  $field_instances['node-project-field_percentage_notification'] = array(
    'bundle' => 'project',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_percentage_notification',
    'label' => 'Percentage notified',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-project-field_stakeholder'.
  $field_instances['node-project-field_stakeholder'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stakeholder',
    'label' => 'Stakeholder',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'autofill' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-project-field_table_rate'.
  $field_instances['node-project-field_table_rate'] = array(
    'bundle' => 'project',
    'default_value' => array(
      0 => array(
        'field_hours' => array(
          'und' => array(
            0 => array(
              'value' => 0,
            ),
          ),
        ),
        'field_issue_type' => array(
          'und' => array(
            0 => array(
              'value' => 'dev',
            ),
          ),
        ),
        'field_rate' => array(
          'und' => array(
            0 => array(
              'amount' => 0,
              'currency' => 'USD',
            ),
          ),
        ),
        'field_rate_type' => array(
          'und' => array(
            0 => array(
              'value' => 'hours',
            ),
          ),
        ),
        'field_scope' => array(
          'und' => array(
            0 => array(
              'interval' => 0,
              'period' => 'hour',
            ),
          ),
        ),
        'id' => NULL,
        'actions' => array(
          'remove_button' => 'Remove',
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'multifield',
        'settings' => array(
          'view_mode' => 'token',
        ),
        'type' => 'multifield_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_table_rate',
    'label' => 'Rates',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multifield',
      'settings' => array(),
      'type' => 'multifield_default',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-project-field_team_leads'.
  $field_instances['node-project-field_team_leads'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_team_leads',
    'label' => 'Team leads',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-project-field_type'.
  $field_instances['node-project-field_type'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_type',
    'label' => 'Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Account');
  t('Allow work session reference');
  t('Close for tracking');
  t('Date');
  t('GH Milstone');
  t('Github repository name');
  t('If checked, don\'t allow tracking to the project anymore.');
  t('Issue prefix');
  t('Office');
  t('One name type is supported -> Account + Project name  (ie. Gizra/generator-hedley).');
  t('Override to default title, in the hour report.');
  t('Payment Terms');
  t('Percentage notified');
  t('Rate');
  t('Rate type');
  t('Rates');
  t('Refer to the unit of the budget amount. hours - per hour price. days - per day price. month - monthly retainer. global - fix amount.');
  t('Scope');
  t('Stakeholder');
  t('Start and end date of project, in case of retainer or hourly without end date, just add a start date.
Setting an end date, will make project invisible in some forms after the end date.');
  t('Team leads');
  t('The milestone to filter issues.');
  t('This means it\'s a Madaan project.
Whether this project should be allowed as the project reference of a work session.');
  t('This prefix will be added automatically to the issue number, to make the issue number unique in case you need separate tracking for the same issue on different project.
For example, if I open 2 project for the same github repo, i will be able to separate same issue tracking for both project.
Only fill this if the project is T&M, since it will change the tracking reports.');
  t('Total hours');
  t('Type');
  t('Work type');
  t('Work type display');

  return $field_instances;
}
