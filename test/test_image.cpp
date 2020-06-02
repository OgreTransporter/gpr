#include <gtest/gtest.h>
#include <gpr.h>
#include <gpr_buffer.h>
#include <string>

#if defined(_WIN32) || defined(_WIN64)
#define PATH_SEPERATOR "\\"
#else
#define PATH_SEPERATOR "/"
#endif

static std::string s_path;

std::string get_file_path(std::string camera, std::string name)
{
	std::string retVal = s_path;
	if (retVal.length() > 0)
	{
		if (retVal[retVal.length() - 1] != PATH_SEPERATOR[0]) retVal.append(PATH_SEPERATOR);
	}
	retVal.append(camera);
	retVal.append(PATH_SEPERATOR);
	retVal.append(name);
	return retVal;
}

#ifdef TEST_HERO6
TEST(GprImageTests, test_Hero6)
{
	std::string input_file_path = get_file_path("Hero6", TEST_HERO6);

	gpr_allocator allocator;
	allocator.Alloc = malloc;
	allocator.Free = free;
	gpr_buffer input_buffer = { NULL, 0 };
	gpr_parameters params;
	gpr_parameters_set_defaults(&params);

	int read = read_from_file(&input_buffer, input_file_path.c_str(), allocator.Alloc, allocator.Free);
	ASSERT_EQ(0, read);

	bool success = gpr_parse_metadata(&allocator, &input_buffer, &params);
	ASSERT_TRUE(success);

	EXPECT_EQ(4000, params.input_width);
	EXPECT_EQ(3000, params.input_height);
	EXPECT_EQ(8000, params.input_pitch);
	EXPECT_TRUE(strcmp(params.exif_info.camera_make, "GoPro") == 0);
	EXPECT_TRUE(strcmp(params.exif_info.camera_model, "HERO6 Black") == 0);
	EXPECT_EQ(3, params.profile_info.illuminant1);
	EXPECT_EQ(23, params.profile_info.illuminant2);
	EXPECT_EQ(ORIENTATION_MIRROR, params.tuning_info.orientation);
	EXPECT_EQ(16383, params.tuning_info.dgain_saturation_level.level_red);

	allocator.Free(input_buffer.buffer);
	gpr_parameters_destroy(&params, allocator.Free);
}
#endif

#ifdef TEST_HERO7
TEST(GprImageTests, test_Hero7)
{
	std::string input_file_path = get_file_path("HERO7", TEST_HERO7);

	gpr_allocator allocator;
	allocator.Alloc = malloc;
	allocator.Free = free;
	gpr_buffer input_buffer = { NULL, 0 };
	gpr_parameters params;
	gpr_parameters_set_defaults(&params);

	int read = read_from_file(&input_buffer, input_file_path.c_str(), allocator.Alloc, allocator.Free);
	ASSERT_EQ(read, 0);

	bool success = gpr_parse_metadata(&allocator, &input_buffer, &params);
	ASSERT_TRUE(success);

	EXPECT_EQ(4000, params.input_width);
	EXPECT_EQ(3000, params.input_height);
	EXPECT_EQ(8000, params.input_pitch);
	EXPECT_TRUE(strcmp(params.exif_info.camera_make, "GoPro") == 0);
	EXPECT_TRUE(strcmp(params.exif_info.camera_model, "HERO7 Black") == 0);
	EXPECT_EQ(3, params.profile_info.illuminant1);
	EXPECT_EQ(23, params.profile_info.illuminant2);
	EXPECT_EQ(ORIENTATION_MIRROR, params.tuning_info.orientation);
	EXPECT_EQ(16383, params.tuning_info.dgain_saturation_level.level_red);

	allocator.Free(input_buffer.buffer);
	gpr_parameters_destroy(&params, allocator.Free);
}
#endif

#ifdef TEST_HERO8
TEST(GprImageTests, test_Hero8)
{
	std::string input_file_path = get_file_path("HERO8", TEST_HERO8);

	gpr_allocator allocator;
	allocator.Alloc = malloc;
	allocator.Free = free;
	gpr_buffer input_buffer = { NULL, 0 };
	gpr_parameters params;
	gpr_parameters_set_defaults(&params);

	int read = read_from_file(&input_buffer, input_file_path.c_str(), allocator.Alloc, allocator.Free);
	ASSERT_EQ(read, 0);

	bool success = gpr_parse_metadata(&allocator, &input_buffer, &params);
	ASSERT_TRUE(success);

	EXPECT_EQ(4000, params.input_width);
	EXPECT_EQ(3000, params.input_height);
	EXPECT_EQ(8000, params.input_pitch);
	EXPECT_TRUE(strcmp(params.exif_info.camera_make, "GoPro") == 0);
	EXPECT_TRUE(strcmp(params.exif_info.camera_model, "HERO8 Black") == 0);
	EXPECT_EQ(3, params.profile_info.illuminant1);
	EXPECT_EQ(23, params.profile_info.illuminant2);
	EXPECT_EQ(ORIENTATION_MIRROR, params.tuning_info.orientation);
	EXPECT_EQ(16383, params.tuning_info.dgain_saturation_level.level_red);

	allocator.Free(input_buffer.buffer);
	gpr_parameters_destroy(&params, allocator.Free);
}
#endif

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	if (argc > 1) s_path = argv[1];
	return (RUN_ALL_TESTS());
}
