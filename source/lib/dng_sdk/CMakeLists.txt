# base directory
set(LIB_DNG_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)

# source files
set(LIB_DNG_SRC_FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_1d_function.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_1d_table.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_abort_sniffer.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_area_task.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_bad_pixels.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_big_table.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_bottlenecks.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_camera_profile.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_color_space.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_color_spec.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_date_time.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_exceptions.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_exif.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_file_stream.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_filter_task.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_fingerprint.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_gain_map.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_globals.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_host.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_hue_sat_map.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_ifd.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_image.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_image_writer.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_info.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_iptc.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_jpeg_image.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_lens_correction.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_linearization_info.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_local_string.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_lossless_jpeg.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_matrix.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_memory.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_memory_stream.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_misc_opcodes.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_mosaic_info.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_mutex.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_negative.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_opcodes.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_opcode_list.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_orientation.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_parse_utils.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_pixel_buffer.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_point.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_preview.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_pthread.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_rational.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_read_image.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_rect.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_reference.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_ref_counted_block.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_render.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_resample.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_safe_arithmetic.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_shared.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_simple_image.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_spline.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_stream.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_string.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_string_list.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_tag_types.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_temperature.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_tile_iterator.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_tone_curve.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_utils.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_validate.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_xmp.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_xmp_sdk.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_xy_coord.cpp
  PARENT_SCOPE)

# include files
set(LIB_DNG_INC_FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_1d_function.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_1d_table.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_abort_sniffer.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_area_task.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_assertions.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_auto_ptr.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_bad_pixels.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_big_table.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_bottlenecks.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_camera_profile.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_classes.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_color_space.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_color_spec.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_date_time.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_errors.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_exceptions.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_exif.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_fast_module.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_file_stream.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_filter_task.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_fingerprint.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_flags.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_gain_map.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_globals.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_host.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_hue_sat_map.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_ifd.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_image.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_image_writer.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_info.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_iptc.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_jpeg_image.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_lens_correction.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_linearization_info.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_local_string.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_lossless_jpeg.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_matrix.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_memory.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_memory_stream.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_misc_opcodes.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_mosaic_info.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_mutex.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_negative.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_opcodes.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_opcode_list.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_orientation.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_parse_utils.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_pixel_buffer.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_point.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_preview.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_pthread.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_rational.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_read_image.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_rect.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_reference.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_ref_counted_block.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_render.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_resample.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_safe_arithmetic.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_sdk_limits.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_shared.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_simd_type.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_simple_image.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_spline.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_stream.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_string.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_string_list.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_tag_codes.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_tag_types.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_tag_values.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_temperature.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_tile_iterator.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_tone_curve.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_types.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_uncopyable.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_utils.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_xmp.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_xmp_sdk.h
  ${CMAKE_CURRENT_SOURCE_DIR}/dng_xy_coord.h
 )

# include directories
set(LIB_DNG_INCLUDE_DIRS
  ${CMAKE_CURRENT_SOURCE_DIR}
  PARENT_SCOPE)

# link
set(LIB_DNG_LIBRARIES PARENT_SCOPE)

# define
set(LIB_DNG_DEFINE PARENT_SCOPE)

install(FILES ${LIB_DNG_INC_FILES} DESTINATION include/dng)
set(LIB_DNG_INC_FILES ${LIB_DNG_INC_FILES} PARENT_SCOPE)
