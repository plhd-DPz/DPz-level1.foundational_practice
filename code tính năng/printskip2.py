"tác dụng: hỗ trợ việc in tuần tự, 2 mặt, mỗi mặt 2 slide powerpoint để tiết kiệm giấy"


total_pages = int(input("Nhập tổng số trang: "))
start = int(input("Nhập số bắt đầu: "))

pages = []
i = start

while i <= total_pages:
    # Lấy trang i
    pages.append(str(i))
    # Nếu còn trang tiếp theo thì lấy luôn i+1
    if i + 1 <= total_pages:
        pages.append(str(i+1))
    # Bỏ qua 2 trang tiếp theo
    i += 4

# In kết quả
print(", ".join(pages))



