# Baekjoon Solutions

백준 문제 풀이(C++) 저장소입니다. 문제 유형/난이도 기준으로 폴더를 나눠 관리합니다.

## 구성
- `cpp/Stage/`: 단계별 풀이
- `cpp/solved.ac/`: 티어별 풀이 + 해설(.md)
- `cpp/solving/`: 풀이 진행 중 문제
- `cpp/practice/`: 별도 연습 문제

## 컴파일/실행 예시
```bash
cd /Users/jomincheol/Desktop/Git/baekjoon
g++ -std=c++17 -O2 -Wall cpp/solved.ac/tier/silver/SILVER3/9095.cpp -o run
./run
```

## 원칙
- 문제별 소스는 `문제번호.cpp`로 유지
- 해설이 필요한 문제는 같은 위치에 `.md` 추가
