#include <GL/glut.h>         

void display_result(void)
{
	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
	glEnable(GL_COLOR_MATERIAL);

	glColor3ub(47, 63, 79);
	glBegin(GL_TRIANGLES);
	glVertex3i(178, 77, 0);
	glVertex3i(87, 4, 0);
	glVertex3i(219, 1, 0);
	glEnd();

	glColor3ub(30, 48, 60);
	glBegin(GL_TRIANGLES);
	glVertex3i(274, 133, 0);
	glVertex3i(178, 77, 0);
	glVertex3i(292, 58, 0);
	glEnd();

	glColor3ub(18, 28, 38);
	glBegin(GL_TRIANGLES);
	glVertex3i(178, 77, 0);
	glVertex3i(219, 1, 0);
	glVertex3i(292, 58, 0);
	glEnd();

	glColor3ub(21, 25, 34);
	glBegin(GL_TRIANGLES);
	glVertex3i(292, 58, 0);
	glVertex3i(364, 5, 0);
	glVertex3i(219, 1, 0);
	glEnd();

	glColor3ub(22, 27, 33);
	glBegin(GL_TRIANGLES);
	glVertex3i(414, 60, 0);
	glVertex3i(364, 5, 0);
	glVertex3i(486, 4, 0);
	glEnd();

	glColor3ub(29, 32, 41);
	glBegin(GL_TRIANGLES);
	glVertex3i(406, 122, 0);
	glVertex3i(414, 60, 0);
	glVertex3i(488, 80, 0);
	glEnd();

	glColor3ub(26, 31, 37);
	glBegin(GL_TRIANGLES);
	glVertex3i(488, 80, 0);
	glVertex3i(486, 4, 0);
	glVertex3i(414, 60, 0);
	glEnd();

	glColor3ub(41, 43, 56);
	glBegin(GL_TRIANGLES);
	glVertex3i(552, 44, 0);
	glVertex3i(580, 4, 0);
	glVertex3i(486, 4, 0);
	glEnd();

	glColor3ub(32, 35, 44);
	glBegin(GL_TRIANGLES);
	glVertex3i(486, 4, 0);
	glVertex3i(552, 44, 0);
	glVertex3i(488, 80, 0);
	glEnd();

	glColor3ub(131, 101, 93);
	glBegin(GL_TRIANGLES);
	glVertex3i(386, 86, 0);
	glVertex3i(414, 60, 0);
	glVertex3i(364, 5, 0);
	glEnd();

	glColor3ub(142, 109, 104);
	glBegin(GL_TRIANGLES);
	glVertex3i(352, 63, 0);
	glVertex3i(364, 5, 0);
	glVertex3i(386, 86, 0);
	glEnd();

	glColor3ub(142, 109, 100);
	glBegin(GL_TRIANGLES);
	glVertex3i(292, 58, 0);
	glVertex3i(352, 63, 0);
	glVertex3i(364, 5, 0);
	glEnd();

	glColor3ub(147, 115, 94);
	glBegin(GL_TRIANGLES);
	glVertex3i(300, 101, 0);
	glVertex3i(292, 58, 0);
	glVertex3i(274, 133, 0);
	glEnd();

	glColor3ub(148, 112, 100);
	glBegin(GL_TRIANGLES);
	glVertex3i(300, 101, 0);
	glVertex3i(352, 63, 0);
	glVertex3i(292, 58, 0);
	glEnd();

	glColor3ub(140, 98, 84);
	glBegin(GL_TRIANGLES);
	glVertex3i(327, 118, 0);
	glVertex3i(300, 101, 0);
	glVertex3i(352, 63, 0);
	glEnd();

	glColor3ub(135, 105, 94);
	glBegin(GL_TRIANGLES);
	glVertex3i(364, 116, 0);
	glVertex3i(352, 63, 0);
	glVertex3i(386, 86, 0);
	glEnd();

	glColor3ub(125, 90, 84);
	glBegin(GL_TRIANGLES);
	glVertex3i(406, 122, 0);
	glVertex3i(386, 86, 0);
	glVertex3i(414, 60, 0);
	glEnd();

	glColor3ub(149, 113, 99);
	glBegin(GL_TRIANGLES);
	glVertex3i(364, 116, 0);
	glVertex3i(406, 122, 0);
	glVertex3i(386, 86, 0);
	glEnd();

	glColor3ub(169, 133, 119);
	glBegin(GL_TRIANGLES);
	glVertex3i(401, 148, 0);
	glVertex3i(406, 122, 0);
	glVertex3i(364, 116, 0);
	glEnd();

	glColor3ub(116, 79, 70);
	glBegin(GL_TRIANGLES);
	glVertex3i(327, 118, 0);
	glVertex3i(364, 116, 0);
	glVertex3i(352, 63, 0);
	glEnd();

	glColor3ub(130, 94, 78);
	glBegin(GL_TRIANGLES);
	glVertex3i(287, 151, 0);
	glVertex3i(300, 101, 0);
	glVertex3i(327, 118, 0);
	glEnd();

	glColor3ub(150, 118, 95);
	glBegin(GL_TRIANGLES);
	glVertex3i(287, 151, 0);
	glVertex3i(274, 133, 0);
	glVertex3i(300, 101, 0);
	glEnd();

	glColor3ub(195, 177, 165);
	glBegin(GL_TRIANGLES);
	glVertex3i(274, 163, 0);
	glVertex3i(274, 133, 0);
	glVertex3i(287, 151, 0);
	glEnd();

	glColor3ub(182, 148, 138);
	glBegin(GL_TRIANGLES);
	glVertex3i(261, 200, 0);
	glVertex3i(274, 163, 0);
	glVertex3i(292, 191, 0);
	glEnd();

	glColor3ub(175, 136, 121);
	glBegin(GL_TRIANGLES);
	glVertex3i(292, 191, 0);
	glVertex3i(317, 175, 0);
	glVertex3i(274, 163, 0);
	glEnd();

	glColor3ub(167, 130, 112);
	glBegin(GL_TRIANGLES);
	glVertex3i(317, 175, 0);
	glVertex3i(287, 151, 0);
	glVertex3i(274, 163, 0);
	glEnd();

	glColor3ub(149, 110, 95);
	glBegin(GL_TRIANGLES);
	glVertex3i(317, 175, 0);
	glVertex3i(287, 151, 0);
	glVertex3i(327, 118, 0);
	glEnd();

	glColor3ub(153, 103, 96);
	glBegin(GL_TRIANGLES);
	glVertex3i(317, 175, 0);
	glVertex3i(339, 158, 0);
	glVertex3i(327, 118, 0);
	glEnd();

	glColor3ub(146, 103, 96);
	glBegin(GL_TRIANGLES);
	glVertex3i(339, 158, 0);
	glVertex3i(364, 116, 0);
	glVertex3i(327, 118, 0);
	glEnd();

	glColor3ub(149, 105, 96);
	glBegin(GL_TRIANGLES);
	glVertex3i(339, 158, 0);
	glVertex3i(363, 159, 0);
	glVertex3i(364, 116, 0);
	glEnd();

	glColor3ub(152, 118, 108);
	glBegin(GL_TRIANGLES);
	glVertex3i(363, 159, 0);
	glVertex3i(401, 148, 0);
	glVertex3i(364, 116, 0);
	glEnd();

	glColor3ub(140, 100, 92);
	glBegin(GL_TRIANGLES);
	glVertex3i(383, 177, 0);
	glVertex3i(363, 159, 0);
	glVertex3i(401, 148, 0);
	glEnd();

	glColor3ub(136, 98, 89);
	glBegin(GL_TRIANGLES);
	glVertex3i(398, 193, 0);
	glVertex3i(383, 177, 0);
	glVertex3i(401, 148, 0);
	glEnd();

	glColor3ub(178, 141, 133);
	glBegin(GL_TRIANGLES);
	glVertex3i(398, 193, 0);
	glVertex3i(419, 177, 0);
	glVertex3i(401, 148, 0);
	glEnd();

	glColor3ub(199, 166, 159);
	glBegin(GL_TRIANGLES);
	glVertex3i(398, 193, 0);
	glVertex3i(427, 208, 0);
	glVertex3i(419, 177, 0);
	glEnd();

	glColor3ub(179, 138, 132);
	glBegin(GL_TRIANGLES);
	glVertex3i(429, 241, 0);
	glVertex3i(427, 208, 0);
	glVertex3i(404, 218, 0);
	glEnd();

	glColor3ub(169, 124, 118);
	glBegin(GL_TRIANGLES);
	glVertex3i(404, 218, 0);
	glVertex3i(398, 193, 0);
	glVertex3i(427, 208, 0);
	glEnd();

	glColor3ub(120, 67, 77);
	glBegin(GL_TRIANGLES);
	glVertex3i(361, 174, 0);
	glVertex3i(363, 159, 0);
	glVertex3i(383, 177, 0);
	glEnd();

	glColor3ub(149, 83, 93);
	glBegin(GL_TRIANGLES);
	glVertex3i(339, 175, 0);
	glVertex3i(339, 158, 0);
	glVertex3i(363, 159, 0);
	glEnd();

	glColor3ub(137, 71, 85);
	glBegin(GL_TRIANGLES);
	glVertex3i(339, 175, 0);
	glVertex3i(361, 174, 0);
	glVertex3i(363, 159, 0);
	glEnd();

	glColor3ub(128, 73, 76);
	glBegin(GL_TRIANGLES);
	glVertex3i(317, 175, 0);
	glVertex3i(339, 175, 0);
	glVertex3i(339, 158, 0);
	glEnd();

	glColor3ub(109, 63, 63);
	glBegin(GL_TRIANGLES);
	glVertex3i(335, 187, 0);
	glVertex3i(317, 175, 0);
	glVertex3i(339, 175, 0);
	glEnd();

	glColor3ub(111, 62, 66);
	glBegin(GL_TRIANGLES);
	glVertex3i(362, 189, 0);
	glVertex3i(339, 175, 0);
	glVertex3i(361, 174, 0);
	glEnd();

	glColor3ub(113, 65, 65);
	glBegin(GL_TRIANGLES);
	glVertex3i(362, 189, 0);
	glVertex3i(383, 177, 0);
	glVertex3i(361, 174, 0);
	glEnd();

	glColor3ub(119, 65, 65);
	glBegin(GL_TRIANGLES);
	glVertex3i(335, 187, 0);
	glVertex3i(362, 189, 0);
	glVertex3i(339, 175, 0);
	glEnd();

	glColor3ub(175, 129, 114);
	glBegin(GL_TRIANGLES);
	glVertex3i(335, 208, 0);
	glVertex3i(292, 191, 0);
	glVertex3i(317, 175, 0);
	glEnd();

	glColor3ub(168, 120, 106);
	glBegin(GL_TRIANGLES);
	glVertex3i(335, 208, 0);
	glVertex3i(335, 187, 0);
	glVertex3i(317, 175, 0);
	glEnd();

	glColor3ub(155, 108, 98);
	glBegin(GL_TRIANGLES);
	glVertex3i(335, 208, 0);
	glVertex3i(362, 189, 0);
	glVertex3i(335, 187, 0);
	glEnd();

	glColor3ub(155, 107, 97);
	glBegin(GL_TRIANGLES);
	glVertex3i(335, 208, 0);
	glVertex3i(368, 207, 0);
	glVertex3i(362, 189, 0);
	glEnd();

	glColor3ub(172, 126, 111);
	glBegin(GL_TRIANGLES);
	glVertex3i(322, 218, 0);
	glVertex3i(335, 208, 0);
	glVertex3i(292, 191, 0);
	glEnd();

	glColor3ub(148, 98, 91);
	glBegin(GL_TRIANGLES);
	glVertex3i(322, 218, 0);
	glVertex3i(332, 219, 0);
	glVertex3i(335, 208, 0);
	glEnd();

	glColor3ub(97, 63, 53);
	glBegin(GL_TRIANGLES);
	glVertex3i(332, 219, 0);
	glVertex3i(340, 219, 0);
	glVertex3i(335, 208, 0);
	glEnd();

	glColor3ub(54, 17, 11);
	glBegin(GL_TRIANGLES);
	glVertex3i(335, 225, 0);
	glVertex3i(332, 219, 0);
	glVertex3i(340, 219, 0);
	glEnd();

	glColor3ub(153, 104, 97);
	glBegin(GL_TRIANGLES);
	glVertex3i(322, 218, 0);
	glVertex3i(335, 225, 0);
	glVertex3i(332, 219, 0);
	glEnd();

	glColor3ub(174, 124, 115);
	glBegin(GL_TRIANGLES);
	glVertex3i(327, 231, 0);
	glVertex3i(322, 218, 0);
	glVertex3i(335, 225, 0);
	glEnd();

	glColor3ub(134, 91, 85);
	glBegin(GL_TRIANGLES);
	glVertex3i(340, 219, 0);
	glVertex3i(351, 220, 0);
	glVertex3i(335, 208, 0);
	glEnd();

	glColor3ub(130, 81, 76);
	glBegin(GL_TRIANGLES);
	glVertex3i(351, 220, 0);
	glVertex3i(351, 220, 0);
	glVertex3i(335, 208, 0);
	glEnd();

	glColor3ub(130, 81, 76);
	glBegin(GL_TRIANGLES);
	glVertex3i(335, 208, 0);
	glVertex3i(351, 220, 0);
	glVertex3i(351, 220, 0);
	glEnd();

	glColor3ub(135, 90, 87);
	glBegin(GL_TRIANGLES);
	glVertex3i(351, 220, 0);
	glVertex3i(360, 218, 0);
	glVertex3i(351, 220, 0);
	glEnd();

	glColor3ub(177, 133, 124);
	glBegin(GL_TRIANGLES);
	glVertex3i(281, 218, 0);
	glVertex3i(292, 191, 0);
	glVertex3i(322, 218, 0);
	glEnd();

	glColor3ub(141, 92, 85);
	glBegin(GL_TRIANGLES);
	glVertex3i(360, 218, 0);
	glVertex3i(368, 207, 0);
	glVertex3i(335, 208, 0);
	glEnd();

	glColor3ub(106, 62, 59);
	glBegin(GL_TRIANGLES);
	glVertex3i(360, 218, 0);
	glVertex3i(367, 220, 0);
	glVertex3i(368, 207, 0);
	glEnd();

	glColor3ub(42, 11, 6);
	glBegin(GL_TRIANGLES);
	glVertex3i(363, 224, 0);
	glVertex3i(360, 218, 0);
	glVertex3i(367, 220, 0);
	glEnd();

	glColor3ub(150, 102, 92);
	glBegin(GL_TRIANGLES);
	glVertex3i(378, 220, 0);
	glVertex3i(368, 207, 0);
	glVertex3i(367, 220, 0);
	glEnd();

	glColor3ub(149, 101, 91);
	glBegin(GL_TRIANGLES);
	glVertex3i(368, 207, 0);
	glVertex3i(383, 177, 0);
	glVertex3i(362, 189, 0);
	glEnd();

	glColor3ub(155, 108, 102);
	glBegin(GL_TRIANGLES);
	glVertex3i(368, 207, 0);
	glVertex3i(398, 193, 0);
	glVertex3i(383, 177, 0);
	glEnd();

	glColor3ub(155, 107, 97);
	glBegin(GL_TRIANGLES);
	glVertex3i(378, 220, 0);
	glVertex3i(398, 193, 0);
	glVertex3i(368, 207, 0);
	glEnd();

	glColor3ub(168, 115, 107);
	glBegin(GL_TRIANGLES);
	glVertex3i(378, 220, 0);
	glVertex3i(404, 218, 0);
	glVertex3i(398, 193, 0);
	glEnd();

	glColor3ub(160, 110, 99);
	glBegin(GL_TRIANGLES);
	glVertex3i(367, 240, 0);
	glVertex3i(378, 220, 0);
	glVertex3i(390, 240, 0);
	glEnd();

	glColor3ub(111, 67, 56);
	glBegin(GL_TRIANGLES);
	glVertex3i(363, 224, 0);
	glVertex3i(378, 220, 0);
	glVertex3i(367, 220, 0);
	glEnd();

	glColor3ub(165, 118, 108);
	glBegin(GL_TRIANGLES);
	glVertex3i(367, 240, 0);
	glVertex3i(363, 224, 0);
	glVertex3i(378, 220, 0);
	glEnd();

	glColor3ub(95, 51, 48);
	glBegin(GL_TRIANGLES);
	glVertex3i(335, 225, 0);
	glVertex3i(351, 220, 0);
	glVertex3i(340, 219, 0);
	glEnd();

	glColor3ub(157, 112, 106);
	glBegin(GL_TRIANGLES);
	glVertex3i(367, 240, 0);
	glVertex3i(351, 220, 0);
	glVertex3i(360, 218, 0);
	glEnd();

	glColor3ub(176, 128, 116);
	glBegin(GL_TRIANGLES);
	glVertex3i(337, 259, 0);
	glVertex3i(327, 231, 0);
	glVertex3i(335, 225, 0);
	glEnd();

	glColor3ub(182, 135, 125);
	glBegin(GL_TRIANGLES);
	glVertex3i(337, 259, 0);
	glVertex3i(351, 220, 0);
	glVertex3i(335, 225, 0);
	glEnd();

	glColor3ub(179, 129, 118);
	glBegin(GL_TRIANGLES);
	glVertex3i(337, 259, 0);
	glVertex3i(367, 240, 0);
	glVertex3i(351, 220, 0);
	glEnd();

	glColor3ub(160, 112, 102);
	glBegin(GL_TRIANGLES);
	glVertex3i(359, 266, 0);
	glVertex3i(367, 240, 0);
	glVertex3i(337, 259, 0);
	glEnd();

	glColor3ub(178, 132, 119);
	glBegin(GL_TRIANGLES);
	glVertex3i(340, 287, 0);
	glVertex3i(337, 259, 0);
	glVertex3i(359, 266, 0);
	glEnd();

	glColor3ub(164, 116, 114);
	glBegin(GL_TRIANGLES);
	glVertex3i(358, 288, 0);
	glVertex3i(359, 266, 0);
	glVertex3i(340, 287, 0);
	glEnd();

	glColor3ub(164, 118, 105);
	glBegin(GL_TRIANGLES);
	glVertex3i(390, 240, 0);
	glVertex3i(404, 218, 0);
	glVertex3i(378, 220, 0);
	glEnd();

	glColor3ub(164, 115, 110);
	glBegin(GL_TRIANGLES);
	glVertex3i(390, 240, 0);
	glVertex3i(410, 244, 0);
	glVertex3i(404, 218, 0);
	glEnd();

	glColor3ub(163, 114, 109);
	glBegin(GL_TRIANGLES);
	glVertex3i(410, 244, 0);
	glVertex3i(429, 241, 0);
	glVertex3i(404, 218, 0);
	glEnd();

	glColor3ub(179, 149, 141);
	glBegin(GL_TRIANGLES);
	glVertex3i(425, 268, 0);
	glVertex3i(410, 244, 0);
	glVertex3i(429, 241, 0);
	glEnd();

	glColor3ub(159, 128, 123);
	glBegin(GL_TRIANGLES);
	glVertex3i(411, 275, 0);
	glVertex3i(410, 244, 0);
	glVertex3i(425, 268, 0);
	glEnd();

	glColor3ub(139, 105, 103);
	glBegin(GL_TRIANGLES);
	glVertex3i(396, 271, 0);
	glVertex3i(411, 275, 0);
	glVertex3i(410, 244, 0);
	glEnd();

	glColor3ub(158, 115, 109);
	glBegin(GL_TRIANGLES);
	glVertex3i(396, 271, 0);
	glVertex3i(390, 240, 0);
	glVertex3i(410, 244, 0);
	glEnd();

	glColor3ub(149, 112, 106);
	glBegin(GL_TRIANGLES);
	glVertex3i(385, 271, 0);
	glVertex3i(396, 271, 0);
	glVertex3i(390, 240, 0);
	glEnd();

	glColor3ub(163, 121, 109);
	glBegin(GL_TRIANGLES);
	glVertex3i(385, 271, 0);
	glVertex3i(367, 240, 0);
	glVertex3i(390, 240, 0);
	glEnd();

	glColor3ub(162, 118, 117);
	glBegin(GL_TRIANGLES);
	glVertex3i(371, 271, 0);
	glVertex3i(385, 271, 0);
	glVertex3i(367, 240, 0);
	glEnd();

	glColor3ub(149, 106, 97);
	glBegin(GL_TRIANGLES);
	glVertex3i(371, 271, 0);
	glVertex3i(359, 266, 0);
	glVertex3i(367, 240, 0);
	glEnd();

	glColor3ub(144, 103, 97);
	glBegin(GL_TRIANGLES);
	glVertex3i(358, 288, 0);
	glVertex3i(371, 271, 0);
	glVertex3i(359, 266, 0);
	glEnd();

	glColor3ub(119, 103, 104);
	glBegin(GL_TRIANGLES);
	glVertex3i(383, 282, 0);
	glVertex3i(371, 271, 0);
	glVertex3i(385, 271, 0);
	glEnd();

	glColor3ub(25, 22, 29);
	glBegin(GL_TRIANGLES);
	glVertex3i(383, 282, 0);
	glVertex3i(396, 271, 0);
	glVertex3i(385, 271, 0);
	glEnd();

	glColor3ub(46, 40, 44);
	glBegin(GL_TRIANGLES);
	glVertex3i(397, 284, 0);
	glVertex3i(383, 282, 0);
	glVertex3i(396, 271, 0);
	glEnd();

	glColor3ub(129, 119, 117);
	glBegin(GL_TRIANGLES);
	glVertex3i(397, 284, 0);
	glVertex3i(411, 275, 0);
	glVertex3i(396, 271, 0);
	glEnd();

	glColor3ub(148, 113, 107);
	glBegin(GL_TRIANGLES);
	glVertex3i(358, 288, 0);
	glVertex3i(383, 282, 0);
	glVertex3i(371, 271, 0);
	glEnd();

	glColor3ub(69, 45, 41);
	glBegin(GL_TRIANGLES);
	glVertex3i(433, 290, 0);
	glVertex3i(425, 268, 0);
	glVertex3i(421, 289, 0);
	glEnd();

	glColor3ub(205, 176, 168);
	glBegin(GL_TRIANGLES);
	glVertex3i(411, 275, 0);
	glVertex3i(421, 289, 0);
	glVertex3i(425, 268, 0);
	glEnd();

	glColor3ub(166, 137, 131);
	glBegin(GL_TRIANGLES);
	glVertex3i(408, 298, 0);
	glVertex3i(421, 289, 0);
	glVertex3i(411, 275, 0);
	glEnd();

	glColor3ub(154, 118, 118);
	glBegin(GL_TRIANGLES);
	glVertex3i(397, 284, 0);
	glVertex3i(408, 298, 0);
	glVertex3i(411, 275, 0);
	glEnd();

	glColor3ub(146, 112, 113);
	glBegin(GL_TRIANGLES);
	glVertex3i(392, 302, 0);
	glVertex3i(397, 284, 0);
	glVertex3i(408, 298, 0);
	glEnd();

	glColor3ub(169, 124, 119);
	glBegin(GL_TRIANGLES);
	glVertex3i(392, 302, 0);
	glVertex3i(383, 282, 0);
	glVertex3i(397, 284, 0);
	glEnd();

	glColor3ub(75, 56, 60);
	glBegin(GL_TRIANGLES);
	glVertex3i(368, 301, 0);
	glVertex3i(392, 302, 0);
	glVertex3i(380, 312, 0);
	glEnd();

	glColor3ub(99, 69, 71);
	glBegin(GL_TRIANGLES);
	glVertex3i(380, 312, 0);
	glVertex3i(404, 315, 0);
	glVertex3i(392, 302, 0);
	glEnd();

	glColor3ub(69, 53, 54);
	glBegin(GL_TRIANGLES);
	glVertex3i(404, 315, 0);
	glVertex3i(408, 298, 0);
	glVertex3i(392, 302, 0);
	glEnd();

	glColor3ub(150, 116, 115);
	glBegin(GL_TRIANGLES);
	glVertex3i(368, 301, 0);
	glVertex3i(383, 282, 0);
	glVertex3i(392, 302, 0);
	glEnd();

	glColor3ub(146, 105, 103);
	glBegin(GL_TRIANGLES);
	glVertex3i(368, 301, 0);
	glVertex3i(358, 288, 0);
	glVertex3i(383, 282, 0);
	glEnd();

	glColor3ub(58, 44, 44);
	glBegin(GL_TRIANGLES);
	glVertex3i(404, 315, 0);
	glVertex3i(421, 289, 0);
	glVertex3i(408, 298, 0);
	glEnd();

	glColor3ub(57, 48, 49);
	glBegin(GL_TRIANGLES);
	glVertex3i(404, 315, 0);
	glVertex3i(438, 315, 0);
	glVertex3i(421, 289, 0);
	glEnd();

	glColor3ub(64, 59, 55);
	glBegin(GL_TRIANGLES);
	glVertex3i(438, 315, 0);
	glVertex3i(433, 290, 0);
	glVertex3i(421, 289, 0);
	glEnd();

	glColor3ub(176, 129, 121);
	glBegin(GL_TRIANGLES);
	glVertex3i(302, 243, 0);
	glVertex3i(322, 218, 0);
	glVertex3i(337, 259, 0);
	glEnd();

	glColor3ub(178, 131, 121);
	glBegin(GL_TRIANGLES);
	glVertex3i(302, 243, 0);
	glVertex3i(281, 218, 0);
	glVertex3i(322, 218, 0);
	glEnd();

	glColor3ub(165, 127, 118);
	glBegin(GL_TRIANGLES);
	glVertex3i(311, 268, 0);
	glVertex3i(302, 243, 0);
	glVertex3i(337, 259, 0);
	glEnd();

	glColor3ub(146, 111, 105);
	glBegin(GL_TRIANGLES);
	glVertex3i(323, 271, 0);
	glVertex3i(337, 259, 0);
	glVertex3i(311, 268, 0);
	glEnd();

	glColor3ub(152, 114, 111);
	glBegin(GL_TRIANGLES);
	glVertex3i(299, 269, 0);
	glVertex3i(302, 243, 0);
	glVertex3i(311, 268, 0);
	glEnd();

	glColor3ub(151, 121, 110);
	glBegin(GL_TRIANGLES);
	glVertex3i(284, 273, 0);
	glVertex3i(299, 269, 0);
	glVertex3i(302, 243, 0);
	glEnd();

	glColor3ub(170, 140, 132);
	glBegin(GL_TRIANGLES);
	glVertex3i(284, 273, 0);
	glVertex3i(276, 246, 0);
	glVertex3i(302, 243, 0);
	glEnd();

	glColor3ub(175, 136, 121);
	glBegin(GL_TRIANGLES);
	glVertex3i(276, 246, 0);
	glVertex3i(281, 218, 0);
	glVertex3i(302, 243, 0);
	glEnd();

	glColor3ub(86, 68, 64);
	glBegin(GL_TRIANGLES);
	glVertex3i(296, 278, 0);
	glVertex3i(284, 273, 0);
	glVertex3i(296, 278, 0);
	glEnd();

	glColor3ub(40, 30, 29);
	glBegin(GL_TRIANGLES);
	glVertex3i(296, 278, 0);
	glVertex3i(299, 269, 0);
	glVertex3i(308, 281, 0);
	glEnd();

	glColor3ub(42, 41, 46);
	glBegin(GL_TRIANGLES);
	glVertex3i(308, 281, 0);
	glVertex3i(311, 268, 0);
	glVertex3i(299, 269, 0);
	glEnd();

	glColor3ub(110, 95, 98);
	glBegin(GL_TRIANGLES);
	glVertex3i(308, 281, 0);
	glVertex3i(323, 271, 0);
	glVertex3i(311, 268, 0);
	glEnd();

	glColor3ub(175, 137, 128);
	glBegin(GL_TRIANGLES);
	glVertex3i(256, 219, 0);
	glVertex3i(245, 205, 0);
	glVertex3i(261, 200, 0);
	glEnd();

	glColor3ub(255, 247, 240);
	glBegin(GL_TRIANGLES);
	glVertex3i(240, 232, 0);
	glVertex3i(245, 205, 0);
	glVertex3i(256, 219, 0);
	glEnd();

	glColor3ub(164, 133, 131);
	glBegin(GL_TRIANGLES);
	glVertex3i(259, 252, 0);
	glVertex3i(240, 232, 0);
	glVertex3i(256, 219, 0);
	glEnd();

	glColor3ub(186, 112, 109);
	glBegin(GL_TRIANGLES);
	glVertex3i(244, 257, 0);
	glVertex3i(240, 232, 0);
	glVertex3i(259, 252, 0);
	glEnd();

	glColor3ub(185, 141, 130);
	glBegin(GL_TRIANGLES);
	glVertex3i(281, 218, 0);
	glVertex3i(261, 200, 0);
	glVertex3i(292, 191, 0);
	glEnd();

	glColor3ub(191, 167, 157);
	glBegin(GL_TRIANGLES);
	glVertex3i(256, 219, 0);
	glVertex3i(281, 218, 0);
	glVertex3i(261, 200, 0);
	glEnd();

	glColor3ub(184, 143, 137);
	glBegin(GL_TRIANGLES);
	glVertex3i(276, 246, 0);
	glVertex3i(256, 219, 0);
	glVertex3i(281, 218, 0);
	glEnd();

	glColor3ub(232, 226, 226);
	glBegin(GL_TRIANGLES);
	glVertex3i(259, 252, 0);
	glVertex3i(276, 246, 0);
	glVertex3i(256, 219, 0);
	glEnd();

	glColor3ub(90, 89, 94);
	glBegin(GL_TRIANGLES);
	glVertex3i(246, 280, 0);
	glVertex3i(244, 257, 0);
	glVertex3i(259, 252, 0);
	glEnd();

	glColor3ub(65, 64, 69);
	glBegin(GL_TRIANGLES);
	glVertex3i(261, 288, 0);
	glVertex3i(246, 280, 0);
	glVertex3i(259, 252, 0);
	glEnd();

	glColor3ub(114, 115, 120);
	glBegin(GL_TRIANGLES);
	glVertex3i(238, 312, 0);
	glVertex3i(261, 288, 0);
	glVertex3i(246, 280, 0);
	glEnd();

	glColor3ub(227, 209, 207);
	glBegin(GL_TRIANGLES);
	glVertex3i(284, 273, 0);
	glVertex3i(259, 252, 0);
	glVertex3i(276, 246, 0);
	glEnd();

	glColor3ub(218, 198, 191);
	glBegin(GL_TRIANGLES);
	glVertex3i(261, 288, 0);
	glVertex3i(284, 273, 0);
	glVertex3i(259, 252, 0);
	glEnd();

	glColor3ub(150, 116, 106);
	glBegin(GL_TRIANGLES);
	glVertex3i(282, 288, 0);
	glVertex3i(284, 273, 0);
	glVertex3i(308, 281, 0);
	glEnd();

	glColor3ub(157, 129, 118);
	glBegin(GL_TRIANGLES);
	glVertex3i(261, 288, 0);
	glVertex3i(282, 288, 0);
	glVertex3i(284, 273, 0);
	glEnd();

	glColor3ub(158, 123, 117);
	glBegin(GL_TRIANGLES);
	glVertex3i(294, 301, 0);
	glVertex3i(282, 288, 0);
	glVertex3i(308, 281, 0);
	glEnd();

	glColor3ub(144, 114, 112);
	glBegin(GL_TRIANGLES);
	glVertex3i(294, 301, 0);
	glVertex3i(326, 302, 0);
	glVertex3i(308, 281, 0);
	glEnd();

	glColor3ub(150, 113, 105);
	glBegin(GL_TRIANGLES);
	glVertex3i(326, 302, 0);
	glVertex3i(323, 271, 0);
	glVertex3i(308, 281, 0);
	glEnd();

	glColor3ub(167, 125, 113);
	glBegin(GL_TRIANGLES);
	glVertex3i(323, 271, 0);
	glVertex3i(340, 287, 0);
	glVertex3i(337, 259, 0);
	glEnd();

	glColor3ub(151, 112, 107);
	glBegin(GL_TRIANGLES);
	glVertex3i(326, 302, 0);
	glVertex3i(340, 287, 0);
	glVertex3i(323, 271, 0);
	glEnd();

	glColor3ub(69, 63, 73);
	glBegin(GL_TRIANGLES);
	glVertex3i(336, 328, 0);
	glVertex3i(294, 301, 0);
	glVertex3i(326, 302, 0);
	glEnd();

	glColor3ub(86, 67, 69);
	glBegin(GL_TRIANGLES);
	glVertex3i(336, 328, 0);
	glVertex3i(352, 318, 0);
	glVertex3i(326, 302, 0);
	glEnd();

	glColor3ub(145, 113, 114);
	glBegin(GL_TRIANGLES);
	glVertex3i(352, 318, 0);
	glVertex3i(340, 287, 0);
	glVertex3i(326, 302, 0);
	glEnd();

	glColor3ub(160, 119, 113);
	glBegin(GL_TRIANGLES);
	glVertex3i(352, 318, 0);
	glVertex3i(358, 288, 0);
	glVertex3i(340, 287, 0);
	glEnd();

	glColor3ub(160, 116, 115);
	glBegin(GL_TRIANGLES);
	glVertex3i(352, 318, 0);
	glVertex3i(368, 301, 0);
	glVertex3i(358, 288, 0);
	glEnd();

	glColor3ub(157, 109, 105);
	glBegin(GL_TRIANGLES);
	glVertex3i(368, 327, 0);
	glVertex3i(352, 318, 0);
	glVertex3i(368, 301, 0);
	glEnd();

	glColor3ub(154, 112, 113);
	glBegin(GL_TRIANGLES);
	glVertex3i(368, 327, 0);
	glVertex3i(380, 312, 0);
	glVertex3i(368, 301, 0);
	glEnd();

	glColor3ub(144, 106, 97);
	glBegin(GL_TRIANGLES);
	glVertex3i(384, 333, 0);
	glVertex3i(368, 327, 0);
	glVertex3i(380, 312, 0);
	glEnd();

	glColor3ub(122, 92, 82);
	glBegin(GL_TRIANGLES);
	glVertex3i(384, 333, 0);
	glVertex3i(404, 315, 0);
	glVertex3i(380, 312, 0);
	glEnd();

	glColor3ub(110, 79, 74);
	glBegin(GL_TRIANGLES);
	glVertex3i(394, 350, 0);
	glVertex3i(384, 333, 0);
	glVertex3i(404, 315, 0);
	glEnd();

	glColor3ub(141, 104, 96);
	glBegin(GL_TRIANGLES);
	glVertex3i(367, 346, 0);
	glVertex3i(394, 350, 0);
	glVertex3i(384, 333, 0);
	glEnd();

	glColor3ub(142, 105, 96);
	glBegin(GL_TRIANGLES);
	glVertex3i(367, 346, 0);
	glVertex3i(368, 327, 0);
	glVertex3i(384, 333, 0);
	glEnd();

	glColor3ub(143, 106, 98);
	glBegin(GL_TRIANGLES);
	glVertex3i(367, 346, 0);
	glVertex3i(352, 318, 0);
	glVertex3i(368, 327, 0);
	glEnd();

	glColor3ub(124, 93, 91);
	glBegin(GL_TRIANGLES);
	glVertex3i(352, 368, 0);
	glVertex3i(352, 318, 0);
	glVertex3i(367, 346, 0);
	glEnd();

	glColor3ub(124, 95, 89);
	glBegin(GL_TRIANGLES);
	glVertex3i(352, 368, 0);
	glVertex3i(368, 368, 0);
	glVertex3i(367, 346, 0);
	glEnd();

	glColor3ub(125, 91, 89);
	glBegin(GL_TRIANGLES);
	glVertex3i(368, 368, 0);
	glVertex3i(394, 350, 0);
	glVertex3i(367, 346, 0);
	glEnd();

	glColor3ub(55, 64, 69);
	glBegin(GL_TRIANGLES);
	glVertex3i(243, 348, 0);
	glVertex3i(238, 312, 0);
	glVertex3i(263, 319, 0);
	glEnd();

	glColor3ub(56, 55, 63);
	glBegin(GL_TRIANGLES);
	glVertex3i(263, 319, 0);
	glVertex3i(261, 288, 0);
	glVertex3i(282, 288, 0);
	glEnd();

	glColor3ub(81, 83, 95);
	glBegin(GL_TRIANGLES);
	glVertex3i(238, 312, 0);
	glVertex3i(263, 319, 0);
	glVertex3i(261, 288, 0);
	glEnd();

	glColor3ub(147, 161, 172);
	glBegin(GL_TRIANGLES);
	glVertex3i(262, 375, 0);
	glVertex3i(276, 354, 0);
	glVertex3i(243, 348, 0);
	glEnd();

	glColor3ub(61, 64, 73);
	glBegin(GL_TRIANGLES);
	glVertex3i(276, 354, 0);
	glVertex3i(263, 319, 0);
	glVertex3i(243, 348, 0);
	glEnd();

	glColor3ub(44, 52, 65);
	glBegin(GL_TRIANGLES);
	glVertex3i(276, 354, 0);
	glVertex3i(285, 332, 0);
	glVertex3i(263, 319, 0);
	glEnd();

	glColor3ub(46, 55, 64);
	glBegin(GL_TRIANGLES);
	glVertex3i(285, 332, 0);
	glVertex3i(282, 288, 0);
	glVertex3i(263, 319, 0);
	glEnd();

	glColor3ub(30, 38, 51);
	glBegin(GL_TRIANGLES);
	glVertex3i(285, 332, 0);
	glVertex3i(294, 301, 0);
	glVertex3i(282, 288, 0);
	glEnd();

	glColor3ub(29, 36, 52);
	glBegin(GL_TRIANGLES);
	glVertex3i(285, 332, 0);
	glVertex3i(311, 341, 0);
	glVertex3i(294, 301, 0);
	glEnd();

	glColor3ub(36, 44, 57);
	glBegin(GL_TRIANGLES);
	glVertex3i(311, 341, 0);
	glVertex3i(336, 328, 0);
	glVertex3i(294, 301, 0);
	glEnd();

	glColor3ub(31, 39, 52);
	glBegin(GL_TRIANGLES);
	glVertex3i(276, 354, 0);
	glVertex3i(309, 372, 0);
	glVertex3i(285, 332, 0);
	glEnd();

	glColor3ub(28, 33, 52);
	glBegin(GL_TRIANGLES);
	glVertex3i(309, 372, 0);
	glVertex3i(311, 341, 0);
	glVertex3i(285, 332, 0);
	glEnd();

	glColor3ub(161, 165, 177);
	glBegin(GL_TRIANGLES);
	glVertex3i(286, 393, 0);
	glVertex3i(262, 375, 0);
	glVertex3i(276, 354, 0);
	glEnd();

	glColor3ub(28, 31, 50);
	glBegin(GL_TRIANGLES);
	glVertex3i(286, 393, 0);
	glVertex3i(309, 372, 0);
	glVertex3i(276, 354, 0);
	glEnd();

	glColor3ub(40, 46, 58);
	glBegin(GL_TRIANGLES);
	glVertex3i(309, 372, 0);
	glVertex3i(330, 355, 0);
	glVertex3i(311, 341, 0);
	glEnd();

	glColor3ub(42, 46, 57);
	glBegin(GL_TRIANGLES);
	glVertex3i(330, 355, 0);
	glVertex3i(336, 328, 0);
	glVertex3i(311, 341, 0);
	glEnd();

	glColor3ub(37, 39, 51);
	glBegin(GL_TRIANGLES);
	glVertex3i(336, 328, 0);
	glVertex3i(352, 368, 0);
	glVertex3i(352, 318, 0);
	glEnd();

	glColor3ub(41, 43, 55);
	glBegin(GL_TRIANGLES);
	glVertex3i(330, 355, 0);
	glVertex3i(352, 368, 0);
	glVertex3i(336, 328, 0);
	glEnd();

	glColor3ub(45, 38, 45);
	glBegin(GL_TRIANGLES);
	glVertex3i(394, 350, 0);
	glVertex3i(421, 335, 0);
	glVertex3i(404, 315, 0);
	glEnd();

	glColor3ub(36, 35, 40);
	glBegin(GL_TRIANGLES);
	glVertex3i(421, 335, 0);
	glVertex3i(438, 315, 0);
	glVertex3i(404, 315, 0);
	glEnd();

	glColor3ub(66, 53, 62);
	glBegin(GL_TRIANGLES);
	glVertex3i(421, 335, 0);
	glVertex3i(442, 344, 0);
	glVertex3i(438, 315, 0);
	glEnd();

	glColor3ub(45, 45, 45);
	glBegin(GL_TRIANGLES);
	glVertex3i(438, 366, 0);
	glVertex3i(421, 335, 0);
	glVertex3i(442, 344, 0);
	glEnd();

	glColor3ub(37, 37, 47);
	glBegin(GL_TRIANGLES);
	glVertex3i(414, 364, 0);
	glVertex3i(438, 366, 0);
	glVertex3i(421, 335, 0);
	glEnd();

	glColor3ub(28, 31, 40);
	glBegin(GL_TRIANGLES);
	glVertex3i(414, 364, 0);
	glVertex3i(394, 350, 0);
	glVertex3i(421, 335, 0);
	glEnd();

	glColor3ub(35, 35, 43);
	glBegin(GL_TRIANGLES);
	glVertex3i(424, 382, 0);
	glVertex3i(414, 364, 0);
	glVertex3i(438, 366, 0);
	glEnd();

	glColor3ub(29, 33, 44);
	glBegin(GL_TRIANGLES);
	glVertex3i(390, 381, 0);
	glVertex3i(394, 350, 0);
	glVertex3i(414, 364, 0);
	glEnd();

	glColor3ub(35, 38, 45);
	glBegin(GL_TRIANGLES);
	glVertex3i(398, 398, 0);
	glVertex3i(390, 381, 0);
	glVertex3i(424, 382, 0);
	glEnd();

	glColor3ub(31, 31, 41);
	glBegin(GL_TRIANGLES);
	glVertex3i(424, 382, 0);
	glVertex3i(414, 364, 0);
	glVertex3i(390, 381, 0);
	glEnd();

	glColor3ub(30, 30, 38);
	glBegin(GL_TRIANGLES);
	glVertex3i(368, 368, 0);
	glVertex3i(390, 381, 0);
	glVertex3i(394, 350, 0);
	glEnd();

	glColor3ub(35, 49, 58);
	glBegin(GL_TRIANGLES);
	glVertex3i(375, 406, 0);
	glVertex3i(398, 398, 0);
	glVertex3i(390, 381, 0);
	glEnd();

	glColor3ub(26, 28, 40);
	glBegin(GL_TRIANGLES);
	glVertex3i(363, 394, 0);
	glVertex3i(390, 381, 0);
	glVertex3i(368, 368, 0);
	glEnd();

	glColor3ub(42, 44, 56);
	glBegin(GL_TRIANGLES);
	glVertex3i(363, 394, 0);
	glVertex3i(352, 368, 0);
	glVertex3i(368, 368, 0);
	glEnd();

	glColor3ub(29, 35, 47);
	glBegin(GL_TRIANGLES);
	glVertex3i(343, 411, 0);
	glVertex3i(352, 368, 0);
	glVertex3i(363, 394, 0);
	glEnd();

	glColor3ub(29, 39, 49);
	glBegin(GL_TRIANGLES);
	glVertex3i(321, 406, 0);
	glVertex3i(343, 411, 0);
	glVertex3i(352, 368, 0);
	glEnd();

	glColor3ub(35, 41, 63);
	glBegin(GL_TRIANGLES);
	glVertex3i(321, 406, 0);
	glVertex3i(330, 355, 0);
	glVertex3i(352, 368, 0);
	glEnd();

	glColor3ub(49, 51, 64);
	glBegin(GL_TRIANGLES);
	glVertex3i(321, 406, 0);
	glVertex3i(286, 393, 0);
	glVertex3i(330, 355, 0);
	glEnd();
	glFlush();

}

void display_wire(void)
{
	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
	glEnable(GL_COLOR_MATERIAL);

	glColor3ub(255, 255, 255);

	glBegin(GL_LINE_STRIP);
	glVertex3i(178, 77, 0);
	glVertex3i(87, 4, 0);
	glVertex3i(219, 1, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(274, 133, 0);
	glVertex3i(178, 77, 0);
	glVertex3i(292, 58, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(178, 77, 0);
	glVertex3i(219, 1, 0);
	glVertex3i(292, 58, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(292, 58, 0);
	glVertex3i(364, 5, 0);
	glVertex3i(219, 1, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(414, 60, 0);
	glVertex3i(364, 5, 0);
	glVertex3i(486, 4, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(406, 122, 0);
	glVertex3i(414, 60, 0);
	glVertex3i(488, 80, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(488, 80, 0);
	glVertex3i(486, 4, 0);
	glVertex3i(414, 60, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(552, 44, 0);
	glVertex3i(580, 4, 0);
	glVertex3i(486, 4, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(486, 4, 0);
	glVertex3i(552, 44, 0);
	glVertex3i(488, 80, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(386, 86, 0);
	glVertex3i(414, 60, 0);
	glVertex3i(364, 5, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(352, 63, 0);
	glVertex3i(364, 5, 0);
	glVertex3i(386, 86, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(292, 58, 0);
	glVertex3i(352, 63, 0);
	glVertex3i(364, 5, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(300, 101, 0);
	glVertex3i(292, 58, 0);
	glVertex3i(274, 133, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(300, 101, 0);
	glVertex3i(352, 63, 0);
	glVertex3i(292, 58, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(327, 118, 0);
	glVertex3i(300, 101, 0);
	glVertex3i(352, 63, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(364, 116, 0);
	glVertex3i(352, 63, 0);
	glVertex3i(386, 86, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(406, 122, 0);
	glVertex3i(386, 86, 0);
	glVertex3i(414, 60, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(364, 116, 0);
	glVertex3i(406, 122, 0);
	glVertex3i(386, 86, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(401, 148, 0);
	glVertex3i(406, 122, 0);
	glVertex3i(364, 116, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(327, 118, 0);
	glVertex3i(364, 116, 0);
	glVertex3i(352, 63, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(287, 151, 0);
	glVertex3i(300, 101, 0);
	glVertex3i(327, 118, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(287, 151, 0);
	glVertex3i(274, 133, 0);
	glVertex3i(300, 101, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(274, 163, 0);
	glVertex3i(274, 133, 0);
	glVertex3i(287, 151, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(261, 200, 0);
	glVertex3i(274, 163, 0);
	glVertex3i(292, 191, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(292, 191, 0);
	glVertex3i(317, 175, 0);
	glVertex3i(274, 163, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(317, 175, 0);
	glVertex3i(287, 151, 0);
	glVertex3i(274, 163, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(317, 175, 0);
	glVertex3i(287, 151, 0);
	glVertex3i(327, 118, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(317, 175, 0);
	glVertex3i(339, 158, 0);
	glVertex3i(327, 118, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(339, 158, 0);
	glVertex3i(364, 116, 0);
	glVertex3i(327, 118, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(339, 158, 0);
	glVertex3i(363, 159, 0);
	glVertex3i(364, 116, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(363, 159, 0);
	glVertex3i(401, 148, 0);
	glVertex3i(364, 116, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(383, 177, 0);
	glVertex3i(363, 159, 0);
	glVertex3i(401, 148, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(398, 193, 0);
	glVertex3i(383, 177, 0);
	glVertex3i(401, 148, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(398, 193, 0);
	glVertex3i(419, 177, 0);
	glVertex3i(401, 148, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(398, 193, 0);
	glVertex3i(427, 208, 0);
	glVertex3i(419, 177, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(429, 241, 0);
	glVertex3i(427, 208, 0);
	glVertex3i(404, 218, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(404, 218, 0);
	glVertex3i(398, 193, 0);
	glVertex3i(427, 208, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(361, 174, 0);
	glVertex3i(363, 159, 0);
	glVertex3i(383, 177, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(339, 175, 0);
	glVertex3i(339, 158, 0);
	glVertex3i(363, 159, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(339, 175, 0);
	glVertex3i(361, 174, 0);
	glVertex3i(363, 159, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(317, 175, 0);
	glVertex3i(339, 175, 0);
	glVertex3i(339, 158, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(335, 187, 0);
	glVertex3i(317, 175, 0);
	glVertex3i(339, 175, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(362, 189, 0);
	glVertex3i(339, 175, 0);
	glVertex3i(361, 174, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(362, 189, 0);
	glVertex3i(383, 177, 0);
	glVertex3i(361, 174, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(335, 187, 0);
	glVertex3i(362, 189, 0);
	glVertex3i(339, 175, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(335, 208, 0);
	glVertex3i(292, 191, 0);
	glVertex3i(317, 175, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(335, 208, 0);
	glVertex3i(335, 187, 0);
	glVertex3i(317, 175, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(335, 208, 0);
	glVertex3i(362, 189, 0);
	glVertex3i(335, 187, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(335, 208, 0);
	glVertex3i(368, 207, 0);
	glVertex3i(362, 189, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(322, 218, 0);
	glVertex3i(335, 208, 0);
	glVertex3i(292, 191, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(322, 218, 0);
	glVertex3i(332, 219, 0);
	glVertex3i(335, 208, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(332, 219, 0);
	glVertex3i(340, 219, 0);
	glVertex3i(335, 208, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(335, 225, 0);
	glVertex3i(332, 219, 0);
	glVertex3i(340, 219, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(322, 218, 0);
	glVertex3i(335, 225, 0);
	glVertex3i(332, 219, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(327, 231, 0);
	glVertex3i(322, 218, 0);
	glVertex3i(335, 225, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(340, 219, 0);
	glVertex3i(351, 220, 0);
	glVertex3i(335, 208, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(351, 220, 0);
	glVertex3i(351, 220, 0);
	glVertex3i(335, 208, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(335, 208, 0);
	glVertex3i(351, 220, 0);
	glVertex3i(351, 220, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(351, 220, 0);
	glVertex3i(360, 218, 0);
	glVertex3i(351, 220, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(281, 218, 0);
	glVertex3i(292, 191, 0);
	glVertex3i(322, 218, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(360, 218, 0);
	glVertex3i(368, 207, 0);
	glVertex3i(335, 208, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(360, 218, 0);
	glVertex3i(367, 220, 0);
	glVertex3i(368, 207, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(363, 224, 0);
	glVertex3i(360, 218, 0);
	glVertex3i(367, 220, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(378, 220, 0);
	glVertex3i(368, 207, 0);
	glVertex3i(367, 220, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(368, 207, 0);
	glVertex3i(383, 177, 0);
	glVertex3i(362, 189, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(368, 207, 0);
	glVertex3i(398, 193, 0);
	glVertex3i(383, 177, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(378, 220, 0);
	glVertex3i(398, 193, 0);
	glVertex3i(368, 207, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(378, 220, 0);
	glVertex3i(404, 218, 0);
	glVertex3i(398, 193, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(367, 240, 0);
	glVertex3i(378, 220, 0);
	glVertex3i(390, 240, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(363, 224, 0);
	glVertex3i(378, 220, 0);
	glVertex3i(367, 220, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(367, 240, 0);
	glVertex3i(363, 224, 0);
	glVertex3i(378, 220, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(335, 225, 0);
	glVertex3i(351, 220, 0);
	glVertex3i(340, 219, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(367, 240, 0);
	glVertex3i(351, 220, 0);
	glVertex3i(360, 218, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(337, 259, 0);
	glVertex3i(327, 231, 0);
	glVertex3i(335, 225, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(337, 259, 0);
	glVertex3i(351, 220, 0);
	glVertex3i(335, 225, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(337, 259, 0);
	glVertex3i(367, 240, 0);
	glVertex3i(351, 220, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(359, 266, 0);
	glVertex3i(367, 240, 0);
	glVertex3i(337, 259, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(340, 287, 0);
	glVertex3i(337, 259, 0);
	glVertex3i(359, 266, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(358, 288, 0);
	glVertex3i(359, 266, 0);
	glVertex3i(340, 287, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(390, 240, 0);
	glVertex3i(404, 218, 0);
	glVertex3i(378, 220, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(390, 240, 0);
	glVertex3i(410, 244, 0);
	glVertex3i(404, 218, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(410, 244, 0);
	glVertex3i(429, 241, 0);
	glVertex3i(404, 218, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(425, 268, 0);
	glVertex3i(410, 244, 0);
	glVertex3i(429, 241, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(411, 275, 0);
	glVertex3i(410, 244, 0);
	glVertex3i(425, 268, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(396, 271, 0);
	glVertex3i(411, 275, 0);
	glVertex3i(410, 244, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(396, 271, 0);
	glVertex3i(390, 240, 0);
	glVertex3i(410, 244, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(385, 271, 0);
	glVertex3i(396, 271, 0);
	glVertex3i(390, 240, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(385, 271, 0);
	glVertex3i(367, 240, 0);
	glVertex3i(390, 240, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(371, 271, 0);
	glVertex3i(385, 271, 0);
	glVertex3i(367, 240, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(371, 271, 0);
	glVertex3i(359, 266, 0);
	glVertex3i(367, 240, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(358, 288, 0);
	glVertex3i(371, 271, 0);
	glVertex3i(359, 266, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(383, 282, 0);
	glVertex3i(371, 271, 0);
	glVertex3i(385, 271, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(383, 282, 0);
	glVertex3i(396, 271, 0);
	glVertex3i(385, 271, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(397, 284, 0);
	glVertex3i(383, 282, 0);
	glVertex3i(396, 271, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(397, 284, 0);
	glVertex3i(411, 275, 0);
	glVertex3i(396, 271, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(358, 288, 0);
	glVertex3i(383, 282, 0);
	glVertex3i(371, 271, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(433, 290, 0);
	glVertex3i(425, 268, 0);
	glVertex3i(421, 289, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(411, 275, 0);
	glVertex3i(421, 289, 0);
	glVertex3i(425, 268, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(408, 298, 0);
	glVertex3i(421, 289, 0);
	glVertex3i(411, 275, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(397, 284, 0);
	glVertex3i(408, 298, 0);
	glVertex3i(411, 275, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(392, 302, 0);
	glVertex3i(397, 284, 0);
	glVertex3i(408, 298, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(392, 302, 0);
	glVertex3i(383, 282, 0);
	glVertex3i(397, 284, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(368, 301, 0);
	glVertex3i(392, 302, 0);
	glVertex3i(380, 312, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(380, 312, 0);
	glVertex3i(404, 315, 0);
	glVertex3i(392, 302, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(404, 315, 0);
	glVertex3i(408, 298, 0);
	glVertex3i(392, 302, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(368, 301, 0);
	glVertex3i(383, 282, 0);
	glVertex3i(392, 302, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(368, 301, 0);
	glVertex3i(358, 288, 0);
	glVertex3i(383, 282, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(404, 315, 0);
	glVertex3i(421, 289, 0);
	glVertex3i(408, 298, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(404, 315, 0);
	glVertex3i(438, 315, 0);
	glVertex3i(421, 289, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(438, 315, 0);
	glVertex3i(433, 290, 0);
	glVertex3i(421, 289, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(302, 243, 0);
	glVertex3i(322, 218, 0);
	glVertex3i(337, 259, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(302, 243, 0);
	glVertex3i(281, 218, 0);
	glVertex3i(322, 218, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(311, 268, 0);
	glVertex3i(302, 243, 0);
	glVertex3i(337, 259, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(323, 271, 0);
	glVertex3i(337, 259, 0);
	glVertex3i(311, 268, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(299, 269, 0);
	glVertex3i(302, 243, 0);
	glVertex3i(311, 268, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(284, 273, 0);
	glVertex3i(299, 269, 0);
	glVertex3i(302, 243, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(284, 273, 0);
	glVertex3i(276, 246, 0);
	glVertex3i(302, 243, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(276, 246, 0);
	glVertex3i(281, 218, 0);
	glVertex3i(302, 243, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(296, 278, 0);
	glVertex3i(284, 273, 0);
	glVertex3i(296, 278, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(296, 278, 0);
	glVertex3i(299, 269, 0);
	glVertex3i(308, 281, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(308, 281, 0);
	glVertex3i(311, 268, 0);
	glVertex3i(299, 269, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(308, 281, 0);
	glVertex3i(323, 271, 0);
	glVertex3i(311, 268, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(256, 219, 0);
	glVertex3i(245, 205, 0);
	glVertex3i(261, 200, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(240, 232, 0);
	glVertex3i(245, 205, 0);
	glVertex3i(256, 219, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(259, 252, 0);
	glVertex3i(240, 232, 0);
	glVertex3i(256, 219, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(244, 257, 0);
	glVertex3i(240, 232, 0);
	glVertex3i(259, 252, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(281, 218, 0);
	glVertex3i(261, 200, 0);
	glVertex3i(292, 191, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(256, 219, 0);
	glVertex3i(281, 218, 0);
	glVertex3i(261, 200, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(276, 246, 0);
	glVertex3i(256, 219, 0);
	glVertex3i(281, 218, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(259, 252, 0);
	glVertex3i(276, 246, 0);
	glVertex3i(256, 219, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(246, 280, 0);
	glVertex3i(244, 257, 0);
	glVertex3i(259, 252, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(261, 288, 0);
	glVertex3i(246, 280, 0);
	glVertex3i(259, 252, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(238, 312, 0);
	glVertex3i(261, 288, 0);
	glVertex3i(246, 280, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(284, 273, 0);
	glVertex3i(259, 252, 0);
	glVertex3i(276, 246, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(261, 288, 0);
	glVertex3i(284, 273, 0);
	glVertex3i(259, 252, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(282, 288, 0);
	glVertex3i(284, 273, 0);
	glVertex3i(308, 281, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(261, 288, 0);
	glVertex3i(282, 288, 0);
	glVertex3i(284, 273, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(294, 301, 0);
	glVertex3i(282, 288, 0);
	glVertex3i(308, 281, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(294, 301, 0);
	glVertex3i(326, 302, 0);
	glVertex3i(308, 281, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(326, 302, 0);
	glVertex3i(323, 271, 0);
	glVertex3i(308, 281, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(323, 271, 0);
	glVertex3i(340, 287, 0);
	glVertex3i(337, 259, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(326, 302, 0);
	glVertex3i(340, 287, 0);
	glVertex3i(323, 271, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(336, 328, 0);
	glVertex3i(294, 301, 0);
	glVertex3i(326, 302, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(336, 328, 0);
	glVertex3i(352, 318, 0);
	glVertex3i(326, 302, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(352, 318, 0);
	glVertex3i(340, 287, 0);
	glVertex3i(326, 302, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(352, 318, 0);
	glVertex3i(358, 288, 0);
	glVertex3i(340, 287, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(352, 318, 0);
	glVertex3i(368, 301, 0);
	glVertex3i(358, 288, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(368, 327, 0);
	glVertex3i(352, 318, 0);
	glVertex3i(368, 301, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(368, 327, 0);
	glVertex3i(380, 312, 0);
	glVertex3i(368, 301, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(384, 333, 0);
	glVertex3i(368, 327, 0);
	glVertex3i(380, 312, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(384, 333, 0);
	glVertex3i(404, 315, 0);
	glVertex3i(380, 312, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(394, 350, 0);
	glVertex3i(384, 333, 0);
	glVertex3i(404, 315, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(367, 346, 0);
	glVertex3i(394, 350, 0);
	glVertex3i(384, 333, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(367, 346, 0);
	glVertex3i(368, 327, 0);
	glVertex3i(384, 333, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(367, 346, 0);
	glVertex3i(352, 318, 0);
	glVertex3i(368, 327, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(352, 368, 0);
	glVertex3i(352, 318, 0);
	glVertex3i(367, 346, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(352, 368, 0);
	glVertex3i(368, 368, 0);
	glVertex3i(367, 346, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(368, 368, 0);
	glVertex3i(394, 350, 0);
	glVertex3i(367, 346, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(243, 348, 0);
	glVertex3i(238, 312, 0);
	glVertex3i(263, 319, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(263, 319, 0);
	glVertex3i(261, 288, 0);
	glVertex3i(282, 288, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(238, 312, 0);
	glVertex3i(263, 319, 0);
	glVertex3i(261, 288, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(262, 375, 0);
	glVertex3i(276, 354, 0);
	glVertex3i(243, 348, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(276, 354, 0);
	glVertex3i(263, 319, 0);
	glVertex3i(243, 348, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(276, 354, 0);
	glVertex3i(285, 332, 0);
	glVertex3i(263, 319, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(285, 332, 0);
	glVertex3i(282, 288, 0);
	glVertex3i(263, 319, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(285, 332, 0);
	glVertex3i(294, 301, 0);
	glVertex3i(282, 288, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(285, 332, 0);
	glVertex3i(311, 341, 0);
	glVertex3i(294, 301, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(311, 341, 0);
	glVertex3i(336, 328, 0);
	glVertex3i(294, 301, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(276, 354, 0);
	glVertex3i(309, 372, 0);
	glVertex3i(285, 332, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(309, 372, 0);
	glVertex3i(311, 341, 0);
	glVertex3i(285, 332, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(286, 393, 0);
	glVertex3i(262, 375, 0);
	glVertex3i(276, 354, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(286, 393, 0);
	glVertex3i(309, 372, 0);
	glVertex3i(276, 354, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(309, 372, 0);
	glVertex3i(330, 355, 0);
	glVertex3i(311, 341, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(330, 355, 0);
	glVertex3i(336, 328, 0);
	glVertex3i(311, 341, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(336, 328, 0);
	glVertex3i(352, 368, 0);
	glVertex3i(352, 318, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(330, 355, 0);
	glVertex3i(352, 368, 0);
	glVertex3i(336, 328, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(394, 350, 0);
	glVertex3i(421, 335, 0);
	glVertex3i(404, 315, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(421, 335, 0);
	glVertex3i(438, 315, 0);
	glVertex3i(404, 315, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(421, 335, 0);
	glVertex3i(442, 344, 0);
	glVertex3i(438, 315, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(438, 366, 0);
	glVertex3i(421, 335, 0);
	glVertex3i(442, 344, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(414, 364, 0);
	glVertex3i(438, 366, 0);
	glVertex3i(421, 335, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(414, 364, 0);
	glVertex3i(394, 350, 0);
	glVertex3i(421, 335, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(424, 382, 0);
	glVertex3i(414, 364, 0);
	glVertex3i(438, 366, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(390, 381, 0);
	glVertex3i(394, 350, 0);
	glVertex3i(414, 364, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(398, 398, 0);
	glVertex3i(390, 381, 0);
	glVertex3i(424, 382, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(424, 382, 0);
	glVertex3i(414, 364, 0);
	glVertex3i(390, 381, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(368, 368, 0);
	glVertex3i(390, 381, 0);
	glVertex3i(394, 350, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(375, 406, 0);
	glVertex3i(398, 398, 0);
	glVertex3i(390, 381, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(363, 394, 0);
	glVertex3i(390, 381, 0);
	glVertex3i(368, 368, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(363, 394, 0);
	glVertex3i(352, 368, 0);
	glVertex3i(368, 368, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(343, 411, 0);
	glVertex3i(352, 368, 0);
	glVertex3i(363, 394, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(321, 406, 0);
	glVertex3i(343, 411, 0);
	glVertex3i(352, 368, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(321, 406, 0);
	glVertex3i(330, 355, 0);
	glVertex3i(352, 368, 0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3i(321, 406, 0);
	glVertex3i(286, 393, 0);
	glVertex3i(330, 355, 0);
	glEnd();
	glFlush();

}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);      

	glMatrixMode(GL_PROJECTION);            
	glLoadIdentity();
	glOrtho(0.0, 640.0, 0.0, 480.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);			
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
	glutInitWindowSize(640, 480);       
	glutInitWindowPosition(100, 100);     
	glutCreateWindow("result");           
	init();
	glutDisplayFunc(display_result);             
										
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("wire");
	init();
	glutDisplayFunc(display_wire);

	glutMainLoop();                     
	return 0;   				
}
