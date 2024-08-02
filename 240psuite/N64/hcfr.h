/* 
 * 240p Test Suite for Wii
 * by Artemio Urbina
 * Copyright (C)2014-2022 Artemio Urbina (Wii GX)
 *
 * This file is part of the 240p Test Suite
 *
 * The 240p Test Suite is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * The 240p Test Suite is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with 240p Test Suite; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _HCFR_H_
#define _HCFR_H_

#define HCFR_LEN	82

typedef struct hcfr_data {
	char	*name;
	int		r, g, b;
} HCFR_DATA;

typedef struct hcfr_types {
	char			*name;
	const HCFR_DATA	*data;
} HCFR_TYPE;

const HCFR_DATA hcfr_rec601_d65[] = {
	{ "gray000", 0, 0, 0 },
	{ "gray010", 26, 26, 26 },
	{ "gray020", 51, 51, 51 },
	{ "gray030", 77, 77, 77 },
	{ "gray040", 102, 102, 102 },
	{ "gray050", 128, 128, 128 },
	{ "gray060", 153, 153, 153 },
	{ "gray070", 178, 178, 178 },
	{ "gray080", 204, 204, 204 },
	{ "gray090", 229, 229, 229 },
	{ "gray100", 255, 255, 255 },
	{ "redprimary", 255, 0, 0 },
	{ "greenprimary", 0, 255, 0 },
	{ "blueprimary", 0, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "yellowsecondary", 255, 255, 0 },
	{ "cyansecondary", 0, 255, 255 },
	{ "magentasecondary", 255, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "gray000", 0, 0, 0 },
	{ "gray001", 2, 2, 2 },
	{ "gray002", 5, 5, 5 },
	{ "gray003", 8, 8, 8 },
	{ "gray004", 10, 10, 10 },
	{ "gray096", 245, 245, 245 },
	{ "gray097", 247, 247, 247 },
	{ "gray098", 250, 250, 250 },
	{ "gray099", 253, 253, 253 },
	{ "gray100", 255, 255, 255 },
	{ "red000", 127, 127, 127 },
	{ "red025", 171, 111, 111 },
	{ "red050", 205, 92, 92 },
	{ "red075", 232, 68, 68 },
	{ "red100", 255, 0, 0 },
	{ "green000", 218, 218, 218 },
	{ "green025", 176, 233, 176 },
	{ "green050", 136, 242, 136 },
	{ "green075", 94, 249, 94 },
	{ "green100", 0, 255, 0 },
	{ "blue000", 85, 85, 85 },
	{ "blue025", 83, 83, 107 },
	{ "blue050", 78, 78, 136 },
	{ "blue075", 68, 68, 177 },
	{ "blue100", 0, 0, 255 },
	{ "yellow000", 245, 245, 245 },
	{ "yellow025", 248, 248, 203 },
	{ "yellow050", 252, 252, 161 },
	{ "yellow075", 253, 253, 113 },
	{ "yellow100", 255, 255, 0 },
	{ "cyan000", 229, 229, 229 },
	{ "cyan025", 201, 235, 235 },
	{ "cyan050", 168, 242, 242 },
	{ "cyan075", 123, 249, 249 },
	{ "cyan100", 0, 255, 255 },
	{ "magenta000", 148, 148, 148 },
	{ "magenta025", 168, 139, 168 },
	{ "magenta050", 191, 123, 191 },
	{ "magenta075", 219, 99, 219 },
	{ "magenta100", 255, 0, 255 },
	{ "black", 0, 0, 0 },
	{ "gray35", 158, 158, 158 },
	{ "gray50", 186, 186, 186 },
	{ "gray65", 210, 210, 210 },
	{ "gray80", 229, 229, 229 },
	{ "white", 255, 255, 255 },
	{ "darkskin", 115, 82, 66 },
	{ "lightskin", 193, 150, 130 },
	{ "bluesky", 94, 122, 156 },
	{ "foliage", 90, 107, 66 },
	{ "blueflower", 130, 128, 176 },
	{ "bluishgreen", 99, 189, 169 },
	{ "orange", 217, 120, 41 },
	{ "purplishblue", 75, 92, 163 },
	{ "moderatered", 193, 84, 97 },
	{ "purple", 92, 62, 107 },
	{ "yellowgreen", 158, 186, 64 },
	{ "orangeyellow", 229, 161, 45 },
	{ "blue", 51, 62, 150 },
	{ "green", 71, 148, 71 },
	{ "red", 176, 49, 58 },
	{ "yellow", 238, 199, 33 },
	{ "magenta", 186, 84, 146 },
	{ "cyan", 0, 133, 163 }
};

const HCFR_DATA hcfr_rec601_d93[] = {
	{ "gray000", 0, 0, 0 },
	{ "gray010", 26, 26, 26 },
	{ "gray020", 51, 51, 51 },
	{ "gray030", 77, 77, 77 },
	{ "gray040", 102, 102, 102 },
	{ "gray050", 128, 128, 128 },
	{ "gray060", 153, 153, 153 },
	{ "gray070", 178, 178, 178 },
	{ "gray080", 204, 204, 204 },
	{ "gray090", 229, 229, 229 },
	{ "gray100", 255, 255, 255 },
	{ "redprimary", 255, 0, 0 },
	{ "greenprimary", 0, 255, 0 },
	{ "blueprimary", 0, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "yellowsecondary", 255, 255, 0 },
	{ "cyansecondary", 0, 255, 255 },
	{ "magentasecondary", 255, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "gray000", 0, 0, 0 },
	{ "gray001", 2, 2, 2 },
	{ "gray002", 5, 5, 5 },
	{ "gray003", 8, 8, 8 },
	{ "gray004", 10, 10, 10 },
	{ "gray096", 245, 245, 245 },
	{ "gray097", 247, 247, 247 },
	{ "gray098", 250, 250, 250 },
	{ "gray099", 253, 253, 253 },
	{ "gray100", 255, 255, 255 },
	{ "red000", 120, 120, 120 },
	{ "red025", 171, 104, 104 },
	{ "red050", 206, 85, 85 },
	{ "red075", 233, 61, 61 },
	{ "red100", 255, 0, 0 },
	{ "green000", 217, 217, 217 },
	{ "green025", 171, 233, 171 },
	{ "green050", 132, 243, 132 },
	{ "green075", 90, 250, 90 },
	{ "green100", 0, 255, 0 },
	{ "blue000", 98, 98, 98 },
	{ "blue025", 94, 94, 119 },
	{ "blue050", 88, 88, 146 },
	{ "blue075", 77, 77, 184 },
	{ "blue100", 0, 0, 255 },
	{ "yellow000", 241, 241, 241 },
	{ "yellow025", 246, 246, 196 },
	{ "yellow050", 250, 250, 153 },
	{ "yellow075", 253, 253, 106 },
	{ "yellow100", 255, 255, 0 },
	{ "cyan000", 232, 232, 232 },
	{ "cyan025", 205, 238, 238 },
	{ "cyan050", 171, 243, 243 },
	{ "cyan075", 126, 249, 249 },
	{ "cyan100", 0, 255, 255 },
	{ "magenta000", 149, 149, 149 },
	{ "magenta025", 169, 140, 169 },
	{ "magenta050", 191, 126, 191 },
	{ "magenta075", 219, 101, 219 },
	{ "magenta100", 255, 0, 255 },
	{ "black", 0, 0, 0 },
	{ "gray35", 158, 158, 158 },
	{ "gray50", 186, 186, 186 },
	{ "gray65", 210, 210, 210 },
	{ "gray80", 229, 229, 229 },
	{ "white", 255, 255, 255 },
	{ "darkskin", 115, 82, 66 },
	{ "lightskin", 193, 150, 130 },
	{ "bluesky", 94, 122, 156 },
	{ "foliage", 90, 107, 66 },
	{ "blueflower", 130, 128, 176 },
	{ "bluishgreen", 99, 189, 169 },
	{ "orange", 217, 120, 41 },
	{ "purplishblue", 75, 92, 163 },
	{ "moderatered", 193, 84, 97 },
	{ "purple", 92, 62, 107 },
	{ "yellowgreen", 158, 186, 64 },
	{ "orangeyellow", 229, 161, 45 },
	{ "blue", 51, 62, 150 },
	{ "green", 71, 148, 71 },
	{ "red", 176, 49, 58 },
	{ "yellow", 238, 199, 33 },
	{ "magenta", 186, 84, 146 },
	{ "cyan", 0, 133, 163 }
};

const HCFR_DATA hcfr_palsecam_d65[] = {
	{ "gray000", 0, 0, 0 },
	{ "gray010", 26, 26, 26 },
	{ "gray020", 51, 51, 51 },
	{ "gray030", 77, 77, 77 },
	{ "gray040", 102, 102, 102 },
	{ "gray050", 128, 128, 128 },
	{ "gray060", 153, 153, 153 },
	{ "gray070", 178, 178, 178 },
	{ "gray080", 204, 204, 204 },
	{ "gray090", 229, 229, 229 },
	{ "gray100", 255, 255, 255 },
	{ "redprimary", 255, 0, 0 },
	{ "greenprimary", 0, 255, 0 },
	{ "blueprimary", 0, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "yellowsecondary", 255, 255, 0 },
	{ "cyansecondary", 0, 255, 255 },
	{ "magentasecondary", 255, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "gray000", 0, 0, 0 },
	{ "gray001", 2, 2, 2 },
	{ "gray002", 5, 5, 5 },
	{ "gray003", 8, 8, 8 },
	{ "gray004", 10, 10, 10 },
	{ "gray096", 245, 245, 245 },
	{ "gray097", 247, 247, 247 },
	{ "gray098", 250, 250, 250 },
	{ "gray099", 253, 253, 253 },
	{ "gray100", 255, 255, 255 },
	{ "red000", 129, 129, 129 },
	{ "red025", 172, 114, 114 },
	{ "red050", 204, 94, 94 },
	{ "red075", 232, 69, 69 },
	{ "red100", 255, 0, 0 },
	{ "green000", 218, 218, 218 },
	{ "green025", 176, 233, 176 },
	{ "green050", 136, 242, 136 },
	{ "green075", 94, 249, 94 },
	{ "green100", 0, 255, 0 },
	{ "blue000", 78, 78, 78 },
	{ "blue025", 76, 76, 100 },
	{ "blue050", 72, 72, 127 },
	{ "blue075", 64, 64, 169 },
	{ "blue100", 0, 0, 255 },
	{ "yellow000", 247, 247, 247 },
	{ "yellow025", 249, 249, 205 },
	{ "yellow050", 252, 252, 163 },
	{ "yellow075", 254, 254, 114 },
	{ "yellow100", 255, 255, 0 },
	{ "cyan000", 228, 228, 228 },
	{ "cyan025", 200, 235, 235 },
	{ "cyan050", 167, 242, 242 },
	{ "cyan075", 122, 248, 248 },
	{ "cyan100", 0, 255, 255 },
	{ "magenta000", 147, 147, 147 },
	{ "magenta025", 167, 137, 167 },
	{ "magenta050", 190, 123, 190 },
	{ "magenta075", 219, 98, 219 },
	{ "magenta100", 255, 0, 255 },
	{ "black", 0, 0, 0 },
	{ "gray35", 158, 158, 158 },
	{ "gray50", 186, 186, 186 },
	{ "gray65", 210, 210, 210 },
	{ "gray80", 229, 229, 229 },
	{ "white", 255, 255, 255 },
	{ "darkskin", 115, 82, 66 },
	{ "lightskin", 193, 150, 130 },
	{ "bluesky", 94, 122, 156 },
	{ "foliage", 90, 107, 66 },
	{ "blueflower", 130, 128, 176 },
	{ "bluishgreen", 99, 189, 169 },
	{ "orange", 217, 120, 41 },
	{ "purplishblue", 75, 92, 163 },
	{ "moderatered", 193, 84, 97 },
	{ "purple", 92, 62, 107 },
	{ "yellowgreen", 158, 186, 64 },
	{ "orangeyellow", 229, 161, 45 },
	{ "blue", 51, 62, 150 },
	{ "green", 71, 148, 71 },
	{ "red", 176, 49, 58 },
	{ "yellow", 238, 199, 33 },
	{ "magenta", 186, 84, 146 },
	{ "cyan", 0, 133, 163 }
};

const HCFR_DATA hcfr_palsecam_d93[] = {
	{ "gray000", 0, 0, 0 },
	{ "gray010", 26, 26, 26 },
	{ "gray020", 51, 51, 51 },
	{ "gray030", 77, 77, 77 },
	{ "gray040", 102, 102, 102 },
	{ "gray050", 128, 128, 128 },
	{ "gray060", 153, 153, 153 },
	{ "gray070", 178, 178, 178 },
	{ "gray080", 204, 204, 204 },
	{ "gray090", 229, 229, 229 },
	{ "gray100", 255, 255, 255 },
	{ "redprimary", 255, 0, 0 },
	{ "greenprimary", 0, 255, 0 },
	{ "blueprimary", 0, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "yellowsecondary", 255, 255, 0 },
	{ "cyansecondary", 0, 255, 255 },
	{ "magentasecondary", 255, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "gray000", 0, 0, 0 },
	{ "gray001", 2, 2, 2 },
	{ "gray002", 5, 5, 5 },
	{ "gray003", 8, 8, 8 },
	{ "gray004", 10, 10, 10 },
	{ "gray096", 245, 245, 245 },
	{ "gray097", 247, 247, 247 },
	{ "gray098", 250, 250, 250 },
	{ "gray099", 253, 253, 253 },
	{ "gray100", 255, 255, 255 },
	{ "red000", 123, 123, 123 },
	{ "red025", 172, 107, 107 },
	{ "red050", 206, 87, 87 },
	{ "red075", 233, 63, 63 },
	{ "red100", 255, 0, 0 },
	{ "green000", 218, 218, 218 },
	{ "green025", 172, 243, 172 },
	{ "green050", 132, 243, 132 },
	{ "green075", 90, 250, 90 },
	{ "green100", 0, 255, 0 },
	{ "blue000", 90, 90, 90 },
	{ "blue025", 87, 87, 111 },
	{ "blue050", 83, 83, 137 },
	{ "blue075", 72, 72, 176 },
	{ "blue100", 0, 0, 255 },
	{ "yellow000", 243, 243, 243 },
	{ "yellow025", 248, 248, 198 },
	{ "yellow050", 250, 250, 155 },
	{ "yellow075", 253, 253, 107 },
	{ "yellow100", 255, 255, 0 },
	{ "cyan000", 231, 231, 231 },
	{ "cyan025", 204, 236, 236 },
	{ "cyan050", 170, 243, 243 },
	{ "cyan075", 125, 249, 249 },
	{ "cyan100", 0, 255, 255 },
	{ "magenta000", 148, 148, 148 },
	{ "magenta025", 167, 139, 167 },
	{ "magenta050", 190, 125, 190 },
	{ "magenta075", 218, 100, 218 },
	{ "magenta100", 255, 0, 255 },
	{ "black", 0, 0, 0 },
	{ "gray35", 158, 158, 158 },
	{ "gray50", 186, 186, 186 },
	{ "gray65", 210, 210, 210 },
	{ "gray80", 229, 229, 229 },
	{ "white", 255, 255, 255 },
	{ "darkskin", 115, 82, 66 },
	{ "lightskin", 193, 150, 130 },
	{ "bluesky", 94, 122, 156 },
	{ "foliage", 90, 107, 66 },
	{ "blueflower", 130, 128, 176 },
	{ "bluishgreen", 99, 189, 169 },
	{ "orange", 217, 120, 41 },
	{ "purplishblue", 75, 92, 163 },
	{ "moderatered", 193, 84, 97 },
	{ "purple", 92, 62, 107 },
	{ "yellowgreen", 158, 186, 64 },
	{ "orangeyellow", 229, 161, 45 },
	{ "blue", 51, 62, 150 },
	{ "green", 71, 148, 71 },
	{ "red", 176, 49, 58 },
	{ "yellow", 238, 199, 33 },
	{ "magenta", 186, 84, 146 },
	{ "cyan", 0, 133, 163 }
};

const HCFR_DATA hcfr_rec709_d65[] = {
	{ "gray000", 0, 0, 0 },
	{ "gray010", 26, 26, 26 },
	{ "gray020", 51, 51, 51 },
	{ "gray030", 77, 77, 77 },
	{ "gray040", 102, 102, 102 },
	{ "gray050", 128, 128, 128 },
	{ "gray060", 153, 153, 153 },
	{ "gray070", 178, 178, 178 },
	{ "gray080", 204, 204, 204 },
	{ "gray090", 229, 229, 229 },
	{ "gray100", 255, 255, 255 },
	{ "redprimary", 255, 0, 0 },
	{ "greenprimary", 0, 255, 0 },
	{ "blueprimary", 0, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "yellowsecondary", 255, 255, 0 },
	{ "cyansecondary", 0, 255, 255 },
	{ "magentasecondary", 255, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "gray000", 0, 0, 0 },
	{ "gray001", 2, 2, 2 },
	{ "gray002", 5, 5, 5 },
	{ "gray003", 8, 8, 8 },
	{ "gray004", 10, 10, 10 },
	{ "gray096", 245, 245, 245 },
	{ "gray097", 247, 247, 247 },
	{ "gray098", 250, 250, 250 },
	{ "gray099", 253, 253, 253 },
	{ "gray100", 255, 255, 255 },
	{ "red000", 127, 127, 127 },
	{ "red025", 171, 112, 112 },
	{ "red050", 204, 93, 93 },
	{ "red075", 231, 68, 68 },
	{ "red100", 255, 0, 0 },
	{ "green000", 219, 219, 219 },
	{ "green025", 177, 234, 177 },
	{ "green050", 137, 243, 137 },
	{ "green075", 94, 250, 94 },
	{ "green100", 0, 255, 0 },
	{ "blue000", 78, 78, 78 },
	{ "blue025", 76, 76, 100 },
	{ "blue050", 72, 72, 128 },
	{ "blue075", 64, 64, 169 },
	{ "blue100", 0, 0, 255 },
	{ "yellow000", 247, 247, 247 },
	{ "yellow025", 249, 249, 205 },
	{ "yellow050", 252, 252, 162 },
	{ "yellow075", 254, 254, 113 },
	{ "yellow100", 255, 255, 0 },
	{ "cyan000", 229, 229, 229 },
	{ "cyan025", 201, 236, 236 },
	{ "cyan050", 168, 242, 242 },
	{ "cyan075", 122, 249, 249 },
	{ "cyan100", 0, 255, 255 },
	{ "magenta000", 144, 144, 144 },
	{ "magenta025", 165, 136, 165 },
	{ "magenta050", 189, 122, 189 },
	{ "magenta075", 218, 98, 218 },
	{ "magenta100", 255, 0, 255 },
	{ "black", 0, 0, 0 },
	{ "gray35", 158, 158, 158 },
	{ "gray50", 186, 186, 186 },
	{ "gray65", 210, 210, 210 },
	{ "gray80", 229, 229, 229 },
	{ "white", 255, 255, 255 },
	{ "darkskin", 115, 82, 66 },
	{ "lightskin", 193, 150, 130 },
	{ "bluesky", 94, 122, 156 },
	{ "foliage", 90, 107, 66 },
	{ "blueflower", 130, 128, 176 },
	{ "bluishgreen", 99, 189, 169 },
	{ "orange", 217, 120, 41 },
	{ "purplishblue", 75, 92, 163 },
	{ "moderatered", 193, 84, 97 },
	{ "purple", 92, 62, 107 },
	{ "yellowgreen", 158, 186, 64 },
	{ "orangeyellow", 229, 161, 45 },
	{ "blue", 51, 62, 150 },
	{ "green", 71, 148, 71 },
	{ "red", 176, 49, 58 },
	{ "yellow", 238, 199, 33 },
	{ "magenta", 186, 84, 146 },
	{ "cyan", 0, 133, 163 }
};

const HCFR_DATA hcfr_rec709_d93[] = {
	{ "gray000", 0, 0, 0 },
	{ "gray010", 26, 26, 26 },
	{ "gray020", 51, 51, 51 },
	{ "gray030", 77, 77, 77 },
	{ "gray040", 102, 102, 102 },
	{ "gray050", 128, 128, 128 },
	{ "gray060", 153, 153, 153 },
	{ "gray070", 178, 178, 178 },
	{ "gray080", 204, 204, 204 },
	{ "gray090", 229, 229, 229 },
	{ "gray100", 255, 255, 255 },
	{ "redprimary", 255, 0, 0 },
	{ "greenprimary", 0, 255, 0 },
	{ "blueprimary", 0, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "yellowsecondary", 255, 255, 0 },
	{ "cyansecondary", 0, 255, 255 },
	{ "magentasecondary", 255, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "gray000", 0, 0, 0 },
	{ "gray001", 2, 2, 2 },
	{ "gray002", 5, 5, 5 },
	{ "gray003", 8, 8, 8 },
	{ "gray004", 10, 10, 10 },
	{ "gray096", 245, 245, 245 },
	{ "gray097", 247, 247, 247 },
	{ "gray098", 250, 250, 250 },
	{ "gray099", 253, 253, 253 },
	{ "gray100", 255, 255, 255 },
	{ "red000", 121, 121, 121 },
	{ "red025", 171, 105, 105 },
	{ "red050", 205, 86, 86 },
	{ "red075", 233, 62, 62 },
	{ "red100", 255, 0, 0 },
	{ "green000", 219, 219, 219 },
	{ "green025", 173, 234, 173 },
	{ "green050", 133, 243, 133 },
	{ "green075", 90, 250, 90 },
	{ "green100", 0, 255, 0 },
	{ "blue000", 90, 90, 90 },
	{ "blue025", 87, 87, 111 },
	{ "blue050", 83, 83, 137 },
	{ "blue075", 72, 72, 177 },
	{ "blue100", 0, 0, 255 },
	{ "yellow000", 243, 243, 243 },
	{ "yellow025", 248, 248, 198 },
	{ "yellow050", 250, 250, 155 },
	{ "yellow075", 253, 253, 107 },
	{ "yellow100", 255, 255, 0 },
	{ "cyan000", 232, 232, 232 },
	{ "cyan025", 204, 238, 238 },
	{ "cyan050", 171, 243, 243 },
	{ "cyan075", 126, 249, 249 },
	{ "cyan100", 0, 255, 255 },
	{ "magenta000", 146, 146, 146 },
	{ "magenta025", 165, 137, 165 },
	{ "magenta050", 187, 123, 187 },
	{ "magenta075", 217, 100, 217 },
	{ "magenta100", 255, 0, 255 },
	{ "black", 0, 0, 0 },
	{ "gray35", 158, 158, 158 },
	{ "gray50", 186, 186, 186 },
	{ "gray65", 210, 210, 210 },
	{ "gray80", 229, 229, 229 },
	{ "white", 255, 255, 255 },
	{ "darkskin", 115, 82, 66 },
	{ "lightskin", 193, 150, 130 },
	{ "bluesky", 94, 122, 156 },
	{ "foliage", 90, 107, 66 },
	{ "blueflower", 130, 128, 176 },
	{ "bluishgreen", 99, 189, 169 },
	{ "orange", 217, 120, 41 },
	{ "purplishblue", 75, 92, 163 },
	{ "moderatered", 193, 84, 97 },
	{ "purple", 92, 62, 107 },
	{ "yellowgreen", 158, 186, 64 },
	{ "orangeyellow", 229, 161, 45 },
	{ "blue", 51, 62, 150 },
	{ "green", 71, 148, 71 },
	{ "red", 176, 49, 58 },
	{ "yellow", 238, 199, 33 },
	{ "magenta", 186, 84, 146 },
	{ "cyan", 0, 133, 163 }
};

const HCFR_DATA hcfr_srgb_d65[] = {
	{ "gray000", 0, 0, 0 },
	{ "gray010", 29, 29, 29 },
	{ "gray020", 54, 54, 54 },
	{ "gray030", 79, 79, 79 },
	{ "gray040", 105, 105, 105 },
	{ "gray050", 130, 130, 130 },
	{ "gray060", 154, 154, 154 },
	{ "gray070", 179, 179, 179 },
	{ "gray080", 204, 204, 204 },
	{ "gray090", 230, 230, 230 },
	{ "gray100", 255, 255, 255 },
	{ "redprimary", 255, 0, 0 },
	{ "greenprimary", 0, 255, 0 },
	{ "blueprimary", 0, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "yellowsecondary", 255, 255, 0 },
	{ "cyansecondary", 0, 255, 255 },
	{ "magentasecondary", 255, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "gray000", 0, 0, 0 },
	{ "gray001", 3, 3, 3 },
	{ "gray002", 7, 7, 7 },
	{ "gray003", 11, 11, 11 },
	{ "gray004", 14, 14, 14 },
	{ "gray096", 245, 245, 245 },
	{ "gray097", 247, 247, 247 },
	{ "gray098", 250, 250, 250 },
	{ "gray099", 253, 253, 253 },
	{ "gray100", 255, 255, 255 },
	{ "red000", 129, 129, 129 },
	{ "red025", 172, 114, 114 },
	{ "red050", 204, 95, 95 },
	{ "red075", 231, 70, 70 },
	{ "red100", 255, 0, 0 },
	{ "green000", 219, 219, 219 },
	{ "green025", 178, 234, 178 },
	{ "green050", 139, 244, 139 },
	{ "green075", 97, 250, 97 },
	{ "green100", 0, 255, 0 },
	{ "blue000", 80, 80, 80 },
	{ "blue025", 78, 78, 102 },
	{ "blue050", 75, 75, 130 },
	{ "blue075", 67, 67, 170 },
	{ "blue100", 0, 0, 255 },
	{ "yellow000", 247, 247, 247 },
	{ "yellow025", 249, 249, 206 },
	{ "yellow050", 252, 252, 163 },
	{ "yellow075", 254, 254, 115 },
	{ "yellow100", 255, 255, 0 },
	{ "cyan000", 230, 230, 230 },
	{ "cyan025", 202, 237, 237 },
	{ "cyan050", 169, 242, 242 },
	{ "cyan075", 124, 249, 249 },
	{ "cyan100", 0, 255, 255 },
	{ "magenta000", 146, 146, 146 },
	{ "magenta025", 167, 138, 167 },
	{ "magenta050", 190, 124, 190 },
	{ "magenta075", 218, 100, 218 },
	{ "magenta100", 255, 0, 255 },
	{ "black", 0, 0, 0 },
	{ "gray35", 160, 160, 160 },
	{ "gray50", 188, 188, 188 },
	{ "gray65", 211, 211, 211 },
	{ "gray80", 230, 230, 230 },
	{ "white", 255, 255, 255 },
	{ "darkskin", 117, 82, 66 },
	{ "lightskin", 195, 153, 132 },
	{ "bluesky", 95, 124, 158 },
	{ "foliage", 91, 109, 66 },
	{ "blueflower", 132, 130, 178 },
	{ "bluishgreen", 100, 190, 171 },
	{ "orange", 218, 122, 38 },
	{ "purplishblue", 75, 93, 165 },
	{ "moderatered", 195, 84, 98 },
	{ "purple", 93, 61, 109 },
	{ "yellowgreen", 160, 188, 64 },
	{ "orangeyellow", 230, 163, 43 },
	{ "blue", 50, 61, 152 },
	{ "green", 71, 150, 71 },
	{ "red", 178, 47, 57 },
	{ "yellow", 238, 201, 29 },
	{ "magenta", 188, 84, 148 },
	{ "cyan", 0, 135, 165 }
};
const HCFR_DATA hcfr_srgb_d93[] = {
	{ "gray000", 0, 0, 0 },
	{ "gray010", 29, 29, 29 },
	{ "gray020", 54, 54, 54 },
	{ "gray030", 79, 79, 79 },
	{ "gray040", 105, 105, 105 },
	{ "gray050", 130, 130, 130 },
	{ "gray060", 154, 154, 154 },
	{ "gray070", 179, 179, 179 },
	{ "gray080", 204, 204, 204 },
	{ "gray090", 230, 230, 230 },
	{ "gray100", 255, 255, 255 },
	{ "redprimary", 255, 0, 0 },
	{ "greenprimary", 0, 255, 0 },
	{ "blueprimary", 0, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "yellowsecondary", 255, 255, 0 },
	{ "cyansecondary", 0, 255, 255 },
	{ "magentasecondary", 255, 0, 255 },
	{ "white", 255, 255, 255 },
	{ "gray000", 0, 0, 0 },
	{ "gray001", 3, 3, 3 },
	{ "gray002", 7, 7, 7 },
	{ "gray003", 11, 11, 11 },
	{ "gray004", 14, 14, 14 },
	{ "gray096", 245, 245, 245 },
	{ "gray097", 247, 247, 247 },
	{ "gray098", 250, 250, 250 },
	{ "gray099", 253, 253, 253 },
	{ "gray100", 255, 255, 255 },
	{ "red000", 123, 123, 123 },
	{ "red025", 172, 107, 107 },
	{ "red050", 206, 88, 88 },
	{ "red075", 233, 64, 64 },
	{ "red100", 255, 0, 0 },
	{ "green000", 219, 219, 219 },
	{ "green025", 175, 234, 175 },
	{ "green050", 134, 244, 134 },
	{ "green075", 92, 250, 92 },
	{ "green100", 0, 255, 0 },
	{ "blue000", 92, 92, 92 },
	{ "blue025", 90, 90, 113 },
	{ "blue050", 85, 85, 139 },
	{ "blue075", 75, 75, 178 },
	{ "blue100", 0, 0, 255 },
	{ "yellow000", 244, 244, 244 },
	{ "yellow025", 248, 248, 199 },
	{ "yellow050", 250, 250, 156 },
	{ "yellow075", 253, 253, 109 },
	{ "yellow100", 255, 255, 0 },
	{ "cyan000", 232, 232, 232 },
	{ "cyan025", 204, 238, 238 },
	{ "cyan050", 172, 244, 244 },
	{ "cyan075", 128, 249, 249 },
	{ "cyan100", 0, 255, 255 },
	{ "magenta000", 147, 147, 147 },
	{ "magenta025", 167, 139, 167 },
	{ "magenta050", 188, 125, 188 },
	{ "magenta075", 217, 102, 217 },
	{ "magenta100", 255, 0, 255 },
	{ "black", 0, 0, 0 },
	{ "gray35", 160, 160, 160 },
	{ "gray50", 188, 188, 188 },
	{ "gray65", 211, 211, 211 },
	{ "gray80", 230, 230, 230 },
	{ "white", 255, 255, 255 },
	{ "darkskin", 117, 82, 66 },
	{ "lightskin", 195, 152, 132 },
	{ "bluesky", 95, 124, 158 },
	{ "foliage", 91, 109, 66 },
	{ "blueflower", 132, 130, 178 },
	{ "bluishgreen", 100, 190, 171 },
	{ "orange", 218, 122, 38 },
	{ "purplishblue", 75, 93, 165 },
	{ "moderatered", 195, 84, 98 },
	{ "purple", 93, 61, 109 },
	{ "yellowgreen", 160, 188, 64 },
	{ "orangeyellow", 230, 163, 43 },
	{ "blue", 50, 61, 152 },
	{ "green", 71, 150, 71 },
	{ "red", 178, 47, 57 },
	{ "yellow", 238, 201, 29 },
	{ "magenta", 188, 84, 148 },
	{ "cyan", 0, 135, 165 }
};

#define HCFR_TYPES	8

static const HCFR_TYPE hcfr_data[] = {
	{ "REC601    D65", hcfr_rec601_d65 },
	{ "REC601    D93", hcfr_rec601_d93 },
	{ "PAL SECAM D65", hcfr_palsecam_d65 },
	{ "PAL SECAM D93", hcfr_palsecam_d93 },
	{ "REC709    D65", hcfr_rec709_d65 },
	{ "REC709    D93", hcfr_rec709_d93 },
	{ "SRGB      D65", hcfr_srgb_d65 },
	{ "SRGB      D93", hcfr_srgb_d93 }
};

#endif /* _HCFR_H_ */