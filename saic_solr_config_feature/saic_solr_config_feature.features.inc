<?php
/**
 * @file
 * saic_solr_config_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function saic_solr_config_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function saic_solr_config_feature_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'mods_identifier_accession_mt',
    'field_type' => 'search_fields',
    'weight' => -31,
    'solr_field_settings' => array(
      'label' => 'Accession Number',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  1 => array(
    'solr_field' => 'saic_mods_titleInfo_title_all_types_mt',
    'field_type' => 'search_fields',
    'weight' => -30,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  2 => array(
    'solr_field' => 'mods_titleInfo_alternative_title_mt',
    'field_type' => 'search_fields',
    'weight' => -29,
    'solr_field_settings' => array(
      'label' => 'Alternative Title',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'mods_name_conference_namePart_mt',
    'field_type' => 'search_fields',
    'weight' => -28,
    'solr_field_settings' => array(
      'label' => 'Event',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  4 => array(
    'solr_field' => 'mods_name_personal_author_namePart_mt',
    'field_type' => 'search_fields',
    'weight' => -27,
    'solr_field_settings' => array(
      'label' => 'Author',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  5 => array(
    'solr_field' => 'mods_name_corporate_creator_namePart_mt',
    'field_type' => 'search_fields',
    'weight' => -26,
    'solr_field_settings' => array(
      'label' => 'Authoring Agent',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  6 => array(
    'solr_field' => 'mods_name_personal_creator_namePart_mt',
    'field_type' => 'search_fields',
    'weight' => -25,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  7 => array(
    'solr_field' => 'mods_name_personal_addressee_namePart_mt',
    'field_type' => 'search_fields',
    'weight' => -24,
    'solr_field_settings' => array(
      'label' => 'Addressee',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  8 => array(
    'solr_field' => 'mods_name_personal_contributor_namePart_mt',
    'field_type' => 'search_fields',
    'weight' => -23,
    'solr_field_settings' => array(
      'label' => 'Contributors',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  9 => array(
    'solr_field' => 'saic_mods_subject_name_namePart_all_types_mt',
    'field_type' => 'search_fields',
    'weight' => -22,
    'solr_field_settings' => array(
      'label' => 'Name',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  10 => array(
    'solr_field' => 'mods_originInfo_dateIssued_dt',
    'field_type' => 'search_fields',
    'weight' => -21,
    'solr_field_settings' => array(
      'label' => 'Date',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  11 => array(
    'solr_field' => 'mods_originInfo_type_postmarked_dateOther_mt',
    'field_type' => 'search_fields',
    'weight' => -20,
    'solr_field_settings' => array(
      'label' => 'Date of Postmark',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  12 => array(
    'solr_field' => 'mods_name_personal_affiliation_mt',
    'field_type' => 'search_fields',
    'weight' => -19,
    'solr_field_settings' => array(
      'label' => 'SAIC Affiliation',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  13 => array(
    'solr_field' => 'mods_abstract_mt',
    'field_type' => 'search_fields',
    'weight' => -18,
    'solr_field_settings' => array(
      'label' => 'Description',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  14 => array(
    'solr_field' => 'mods_language_languageTerm_text_mt',
    'field_type' => 'search_fields',
    'weight' => -17,
    'solr_field_settings' => array(
      'label' => 'Language',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  15 => array(
    'solr_field' => 'mods_originInfo_publisher_mt',
    'field_type' => 'search_fields',
    'weight' => -16,
    'solr_field_settings' => array(
      'label' => 'Publisher',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  16 => array(
    'solr_field' => 'mods_originInfo_eventType_publication_place_placeTerm_text_mt',
    'field_type' => 'search_fields',
    'weight' => -15,
    'solr_field_settings' => array(
      'label' => 'Place of Publication',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  17 => array(
    'solr_field' => 'mods_subject_authority_lcsh_topic_mt',
    'field_type' => 'search_fields',
    'weight' => -14,
    'solr_field_settings' => array(
      'label' => 'LCSH Subject Headings',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  18 => array(
    'solr_field' => 'mods_physicalDescription_form_binding_mt',
    'field_type' => 'search_fields',
    'weight' => -13,
    'solr_field_settings' => array(
      'label' => 'Binding',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  19 => array(
    'solr_field' => 'mods_physicalDescription_form_printing_production_method_mt',
    'field_type' => 'search_fields',
    'weight' => -12,
    'solr_field_settings' => array(
      'label' => 'Printing Production Method',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  20 => array(
    'solr_field' => 'mods_physicalDescription_form_publication_format_mt',
    'field_type' => 'search_fields',
    'weight' => -11,
    'solr_field_settings' => array(
      'label' => 'Publication Format',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  21 => array(
    'solr_field' => 'score',
    'field_type' => 'sort_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Relevance',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  22 => array(
    'solr_field' => 'mods_titleInfo_title_ms',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Title',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  23 => array(
    'solr_field' => 'mods_identifier_accession_ms',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Accession Number',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  24 => array(
    'solr_field' => 'mods_originInfo_dateIssued_ms',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Date',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  25 => array(
    'solr_field' => 'mods_name_conference_namePart_ms',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Event',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  26 => array(
    'solr_field' => 'mods_name_personal_author_namePart_ms',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Author',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  27 => array(
    'solr_field' => 'mods_name_personal_creator_namePart_ms',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  28 => array(
    'solr_field' => 'mods_name_corporate_creator_namePart_ms',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Authoring Agent',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  29 => array(
    'solr_field' => 'mods_name_personal_contributor_namePart_ms',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Contributors',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  30 => array(
    'solr_field' => 'mods_physicalDescription_note_visual_analysis_mt',
    'field_type' => 'search_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Visual Analysis',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  31 => array(
    'solr_field' => 'mods_location_holdingSimple_copyInformation_shelfLocator_ms',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Location',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  32 => array(
    'solr_field' => 'mods_genre_movement_mt',
    'field_type' => 'search_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Movement/Genre',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  33 => array(
    'solr_field' => 'mods_originInfo_encoding_w3cdtf_keyDate_yes_dateIssued_dt',
    'field_type' => 'sort_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Publication Date',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  34 => array(
    'solr_field' => 'mods_titleInfo_title_ss',
    'field_type' => 'sort_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  35 => array(
    'solr_field' => 'mods_genre_literary-format_mt',
    'field_type' => 'search_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Literary Format',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  36 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'sort_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Date Added',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  37 => array(
    'solr_field' => 'mods_physicalDescription_form_production_format_mt',
    'field_type' => 'search_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Production Format',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  38 => array(
    'solr_field' => 'mods_physicalDescription_form_materials_mt',
    'field_type' => 'search_fields',
    'weight' => -6,
    'solr_field_settings' => array(
      'label' => 'Materials',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  39 => array(
    'solr_field' => 'mods_genre_object-category_mt',
    'field_type' => 'search_fields',
    'weight' => -5,
    'solr_field_settings' => array(
      'label' => 'Object Category',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  40 => array(
    'solr_field' => 'mods_originInfo_place_placeTerm_text_mt',
    'field_type' => 'search_fields',
    'weight' => -4,
    'solr_field_settings' => array(
      'label' => 'Country of Origin',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  41 => array(
    'solr_field' => 'mods_originInfo_eventType_manufacture_place_placeTerm_text_mt',
    'field_type' => 'search_fields',
    'weight' => -3,
    'solr_field_settings' => array(
      'label' => 'Place of Manufacture',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  42 => array(
    'solr_field' => 'saic_mods_genre_no_type_mt',
    'field_type' => 'search_fields',
    'weight' => -2,
    'solr_field_settings' => array(
      'label' => 'Object Type',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  43 => array(
    'solr_field' => 'mods_name_personal_donor_namePart_mt',
    'field_type' => 'search_fields',
    'weight' => -1,
    'solr_field_settings' => array(
      'label' => 'Donor',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  44 => array(
    'solr_field' => 'RELS_EXT_isMemberOfCollection_uri_ms',
    'field_type' => 'facet_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Collection',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  45 => array(
    'solr_field' => 'mods_originInfo_encoding_w3cdtf_keyDate_yes_dateIssued_ms',
    'field_type' => 'facet_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Publication Date',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  46 => array(
    'solr_field' => 'mods_originInfo_eventType_publication_place_placeTerm_text_ms',
    'field_type' => 'facet_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Place of Publication',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  47 => array(
    'solr_field' => 'mods_originInfo_place_placeTerm_text_ms',
    'field_type' => 'facet_fields',
    'weight' => 3,
    'solr_field_settings' => array(
      'label' => 'Country of Origin',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  48 => array(
    'solr_field' => 'mods_name_conference_namePart_ms',
    'field_type' => 'facet_fields',
    'weight' => 4,
    'solr_field_settings' => array(
      'label' => 'Event',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  49 => array(
    'solr_field' => 'mods_physicalDescription_form_production_format_ms',
    'field_type' => 'facet_fields',
    'weight' => 5,
    'solr_field_settings' => array(
      'label' => 'Production Format',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  50 => array(
    'solr_field' => 'mods_genre_ms',
    'field_type' => 'facet_fields',
    'weight' => 6,
    'solr_field_settings' => array(
      'label' => 'Object Type',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  51 => array(
    'solr_field' => 'mods_titleInfo_uniform_title_ms',
    'field_type' => 'facet_fields',
    'weight' => 7,
    'solr_field_settings' => array(
      'label' => 'Uniform Title',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  52 => array(
    'solr_field' => 'mods_name_personal_affiliation_ms',
    'field_type' => 'facet_fields',
    'weight' => 8,
    'solr_field_settings' => array(
      'label' => 'Affiliation',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
);
}
