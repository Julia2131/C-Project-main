# 📌 Dự án: Chương trình C với 5 chức năng

## 🔍 Giới thiệu
Dự án này là một chương trình C gồm 5 function riêng biệt, mỗi function biểu diễn một khía cạnh khác nhau của lập trình C:

- **Data types & type conversion** (kiểu dữ liệu)
- **If/else** (cấu trúc điều kiện)
- **Loops (for/while/do-while)** (vòng lặp)
- **No return function** (hàm không có giá trị trả về)
- **Array & string manipulation** (mảng và chuỗi)

---

## 👤 Cấu trúc thư mục

```
MyCProject
├\2500 main.c          // Hàm main() - gọi các function đã viết
├\2500 functions.h     // File header - khai báo function
└\2500 functions.c     // Định nghĩa các function
```

---

## 🔍 Chi tiết các file

### 1️⃣ File `main.c`
- Đây là file chính của chương trình, chứa `main()`.
- Chương trình sẽ:
  1. **Tính trung bình** của hai số.
  2. **Xác định điểm chữ** từ điểm số.
  3. **Tính giai thừa** bằng vòng lặp.
  4. **In mẫu hình sao** (hàm không trả về).
  5. **Đếm số nguyên âm** trong chuỗi.

### 2️⃣ File `functions.h`
- Chứa các **prototype** của function, giúc khai báo trước các hàm để sử dụng trong `main.c`.
- Tách biệt phần định nghĩa function nằm trong `functions.c`.

### 3️⃣ File `functions.c`
- Chứa phần **định nghĩa (implementation)** của từng function:
  - `calculateAverage(int, float) -> double`
  - `determineGrade(int) -> char`
  - `calculateFactorial(int) -> long`
  - `printPattern(int) -> void`
  - `countVowels(char*) -> int`

---

## 🛠 Cách biên dịch và chạy chương trình

### 1️⃣ Cài đặt GCC
- Tải **MinGW-w64** (Windows) hoặc dùng GCC sẵn trên Linux/macOS.
- Kiểm tra GCC:
  ```bash
  gcc --version
  ```

### 2️⃣ Biên dịch
```bash
cd C:\MyCProject
gcc functions.c main.c -o program.exe
```

### 3️⃣ Chạy chương trình
- Windows:
  ```bash
  .\program.exe
  ```
- Linux/macOS:
  ```bash
  ./program
  ```

---

## 🔎 Chức năng của từng hàm

| Function              | Mô tả                                                                 |
|-----------------------|-------------------------------------------------------------------------|
| `calculateAverage`    | Nhận `int`, `float` → Trả về `double`. Tính trung bình của 2 số.        |
| `determineGrade`      | Nhận `int` → Trả về `char`. Xếp loại điểm (A/B/C/D/F).   |
| `calculateFactorial`  | Nhận `int` → Trả về `long`. Tính giai thừa bằng `for`.         |
| `printPattern`        | Nhận `int` → Không trả về. In mẫu hình `*`.            |
| `countVowels`         | Nhận `char*` → Trả về `int`. Đếm số nguyên âm.         |

---

📉 **Bây giờ bạn đã sẵn sàng mở VS Code, biên dịch & chạy chương trình!** 🚀