# Project Lưu đồ thuật toán

## Hướng dẫn bắt đầu

1. Mở Visual Studio.
2. Clone repository về máy. (Trong phần "Get Started" của main menu)
3. Khi cần, trong menu "Git" trên thanh toolbar, nhấn "Pull" để cập nhật các branch.

## Hướng dẫn thêm bài (Hướng mỗi bài một branch)

Hướng này phân chia phần việc thành *nhiều* branch, mỗi bài một branch.

1. Trong menu "Git" trên thanh toolbar, chọn "New Branch", đặt tên branch theo tên bài.
    1. Nên chọn "Based on" là branch `master`.
2. Thêm project mới cho bài giải.
3. [Xem tiếp](#hướng-dẫn-sau-khi-hoàn-thiện-bài)

## Hướng dẫn thêm bài (Hướng nhiều bài một branch)

Hướng này phân chia phần việc thành một *hoặc* nhiều branch. Phần việc *nên* được chia *hợp lý* vào các branch (theo chương, chủ đề, phần, ...)

1. Trong menu "Git" trên thanh toolbar, chọn "New Branch", đặt tên branch **theo tên mình (để quản lý list bài làm)**, **nếu chưa tạo branch nào**.
    1. Nên chọn "Based on" là branch `master`.
2. Thêm 1 project cho mỗi bài.
    1. **Lưu ý**: Nên commit 1 lần cho mỗi bài (Không nên làm xong hết tất cả các bài rồi commit và push 1 lần).
3. Push và tạo PR hợp lý.
    1. **Lưu ý**: Chỉ tạo PR và merge **sau** khi hoàn thiện các bài.
4. [Xem tiếp](#hướng-dẫn-sau-khi-hoàn-thiện-bài)

## Hướng dẫn sau khi hoàn thiện bài

1. Trong menu "Git" trên thanh toolbar, chọn "Commit or Stash...".
2. Chọn các file muốn commit (thường chọn hết hoặc chỉ chọn của bài đang làm nếu theo hướng 2).
3. Viết commit message (bất kỳ thứ gì - có thể đặt tên bài cho dễ; bắt buộc để có thể push lên repository).
4. Nhấn "Commit Staged".
5. Trong menu "Git" trên thanh toolbar, chọn "Sync".

## Hướng dẫn merge branch vào master

1. Trên web github của repository, chọn phần "Pull Request".
2. Chọn tạo pull request với branch đích là `master`, branch nguồn là branch muốn merge.
3. Tạo pull request.
4. Chọn "Merge pull request" để merge. Khuyến khích để người khác review và merge.
5. Xóa branch sau khi merge.
6. Trong Visual Studio, trong menu "Git" trên thanh toolbar, chọn "Manage braches".
7. Click chuột phải vào branch `master`, chọn "Checkout".

## Hướng dẫn tạm ngưng bài hiện tại để làm bài khác

1. Trong menu "Git" trên thanh toolbar, chọn "New Branch", đặt tên branch theo tên bài.
    1. **Phải** chọn "Based on" là branch `master`.