"tác dụng: hỗ trợ việc in tuần tự nhiều slide powerpoint vào một mặt giấy, in 2 mặt của 1 tờ để tiết kiệm giấy"


def generate_pages(total_pages, start=1, per_side=2):
    pages = []
    step = per_side * 2
    i = start

    while i <= total_pages:
        # Lấy các trang cho 1 mặt
        for j in range(per_side):
            if i + j <= total_pages:
                pages.append(str(i + j))
        
        # Nhảy sang tờ tiếp theo
        i += step

    return pages


total_pages = int(input("Nhập tổng số trang: "))
start = int(input("Nhập số bắt đầu: "))
per_side = int(input("Nhập số trang mỗi mặt: "))

result = generate_pages(total_pages, start, per_side)
print(",".join(result))


