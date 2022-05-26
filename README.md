# game2048
- Hoàng Thanh Tùng
- Lớp: K66CB - UET
 Bài Tập Lớn: 2048 (INT2215_1 - Lập trình nâng cao).
 ## 1. Hướng dẫn cài đặt
 - Tải game ở trên, nhấn vào mục Code và chọn Download Zip
 - Giải nén, vào thư mục Game chọn 2048.exe để chơi game
## 2. Mô tả game
game 2048, là một loại game cổ điển mà trong đó người chơi sẽ di chuyển các ô số (bắt đầu từ 2), các ô có số giống nhau sẽ cộng dồn lên, nhiệm vụ của ngừoi chơi là di chuyển sao cho các ô só cộng dồn được đến 2048. 
Game sẽ kết thúc nếu các ô số đã bịt kín các ô trong bảng và không thể di chuyển các ô số được nữa.
 ## 3. các chức năng có trong game:
### a. về phần menu game:
 menu  có 4 nút là 'new game', 'mode', 'score', 'exit'
 - có  âm thanh khi bấm vào các nút
 - có bản mode 
 - có nút tắt/bật tiếng (có hướng dẫn chỗ để bấm phím tắt/bật)
 - có exit để thoát khỏi trò chơi
### b. về phần new game:
- bấm vào new game để chơi
- hướng dẫn chơi: sử dụng các nút 'awds' hoặc các phím di chuyển để di chuyển các ô số mỗi khi ô số giống nhau thì sẽ được cộng dồn
- trong phần game cũng có nút 'menu' để trở lại menu,có nút "new game: để làm mới lại game
- có nút best hiện lần chơi cao nhất. Để lưu vào mục score của menu 
- trong các quá trình trên các nút bấm và di chuyển các ô số đều có âm thanh
### c. về phần mode:
- có các bảng có kích thước từ 4x4 đến 7x7 để chơi. Khi muốn thay đổi kích thước bảng ta ấm vào 'mode' rồi lựa chọn kích thước bảng chọn xong ta ấm back để thoát ra ngoài trở về menu chính rồi ấn vào new game để chơi.
### d. về phần score
- ta có mục lưu điểm lần chơi cao nhất 
## 4. các chức năng có trong game over!
- có 4 phần 'try again', 'score', 'mode','exit'
- phần score và exit chức năng của nó giống ở phần menu
- khác ở chỗ là nút 'try again' để chơi lại. và khi chọn 'mode' kích thước bảng ô xong thì ấn vào 'try again' để chơi lại. 
- link video : https://youtu.be/NHVwDOcdPGg
## 5. các kĩ thuật được sủ dụng:
- một số thao tác của SDL cơ bản, có renderer vẽ nhưng thử cơ bản(nút bấm, ô số,...., có load hình ảnh (tiêu đề của game ở phần menu), có âm thanh (các nút bấm), SDL_SetRenderDrawColor để chỉnh màu cho các ô chữ, SDL_RenderFillRect để chỉnh kích thước ô,  sử dụng  SDL_tff vẽ chữ và chỉnh font chữ)
- có chia file (theo chức năng)
- có cấu trúc class đơn giản (phần game,Draw và nút bấm)
- sử dụng mảng con trỏ
- các thuật toán để vẽ bảng, các ô số, thuật toán để di chuyển và cộng dồn các ô số
## 6. kết luận
- em đã tìm hiểu và tiếp thu kiến thức về SDL2 tại: lazyfoo.net/tutorials/SDL/
- cơ chế hoạt động được lấy ý tưởng từ trên mạng
- tự code và thiết kế game
về hướng phát triển:
- hoàn thiện hơn phần âm thanh(nếu có thể thì sẽ tăng level mốc số 2048 lên số cao hơn)
- nâng cấp độ họa và animation cho game
kinh nghiệm rút ra:
được tìm hiểu và tự làm 1 game đơn giản
- biết về cách tạo project và lập trình trên vs code
- tìm hiểu và biết thêm về github
- biết về lập trình độ họa SDL2