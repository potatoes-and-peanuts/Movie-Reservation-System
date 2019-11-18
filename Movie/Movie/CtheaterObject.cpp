#include "main.h"
#include "movie.h"

int CtheaterObject() {
	string local1[] = { "서울", "경기", "인천", "강원", "대전/충청", "대구", "부산/울산", "경상", "광주/전라/제주" };
	string local2[9][5] = { { "강남", "강변", "구로", "천호", "홍대" },
	{ "구리", "김포",  "시흥", "수원", "용인" },
	{ "계양", "청라", "인천", "부평", "연수역" },
	{ "강릉", "원주", "인제", "춘천", "춘천명동" },
	{ "당진", "대전", "보령", "서산", "세종" },
	{ "대구", "대구수성", "대구월성", "대구철곡", "대구한일" },
	{ "남포", "대연", "대한", "동래", "서면" },
	{ "거제", "구미", "김해", "마산", "안동" },
	{ "광양", "군산", "나주", "목포", "순천" } };


	for (int i = 0; i < 9; i++) {
		int cnt = 0;
		for (int j=0; j < 25; j++) {
			if (j % 5 == 0&&j!=0) {
				cnt++;
			}
			blackmoney[i][j] = new movie(local1[i], local2[i][cnt]);
		}
	}
	//movie(string month, string day, string hour, string theater1, string theater2);
	//movie(string theater1, string theater2);
}