#include <windows.h>
#include <stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------------------------------------------------------------
void nhap_sai(char &check)
{
    int i, n;
     for(i=0;i<1000000;i++)
      {
          if(check!='a'&&check!='A'&&check!='b'&&check!='B'&&check!='c'&&check!='C'&&check!='d'&&check!='D')
        {
            printf("Bạn đã nhập sai kí tự cho phép. Đề nghị nhập lại: "); scanf("%s",&check);
        }
      }
}
//-------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------
//Khi thua, cho phep choi lai tu dau
void lose()
{
    SetConsoleOutputCP(65001);
    char check_lose;
    printf("\n\nBạn có muốn chơi lại không? (Y/N): "); scanf("%s", &check_lose);
    if(check_lose=='Y'||check_lose=='y')
    {
    SetConsoleOutputCP(65001);
    printf("-----------------------------------------------------------------------------");
    printf("\nChào mừng bạn đến với '((= Ai là thánh troll =)) ");
    printf("\nBạn sẽ có 30 câu hỏi cần phải vượt qua:\n");
    char check;
    int n=1;// bien cau hoi
    for(int i=0;i<10000;i++)
     {
         if(n==1)//cau 1
    {
    printf("Câu hỏi 1: Ai sẽ là người thắng?");
    printf("\na.Thằng thớt    b.Bạn     c.Ai     d.Câu tiếp đi");
    printf("\nChọn câu trả lời: "); scanf("%s", &check);
    nhap_sai(check);
    if(check=='c'||check=='C')
    {
        printf("Ai là người thắng:))");
        n++;
    }
    else
    {
        printf("Bạn đã thua!");
        lose();
    }
    }
    if(n==2)//cau 2
    {
        printf("\n\nCâu hỏi 2: Bố Nguyệt có ba người con Đông, Tây, Nam, ... Tên của đứa con cuối cùng là gì?");
        printf("\na.Bắc     b.Hùng     c.Tây Nam     d.Nguyệt");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
    {
        printf("Câu này dễ quá nhỉ:v");
        n++;
    }
    else
            {
        printf("Bạn đã thua!");
        lose();
    }
    }
    if(n==3)//cau 3
    {
        printf("\n\nCâu hỏi 3: Chữ cái đầu tiên trong bảng chữ cái Tiếng Việt là gì?");
        printf("\na.B     b.D     c.A     d.C");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("Trong 'bảng chữ cái Tiếng Việt' mà:))");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
    }
       if(n==4)//cau 4
    {
        printf("\n\nCâu hỏi 4: Phim con heo có bao nhiêu con heo?");
        printf("\na.Không có heo     b.1 con heo     c.Em chưa xem bao giờ     d.Khó nói quá à :p");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf(":))))))))))))");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
    }
           if(n==5)//cau 5
    {
        printf("\n\nCâu hỏi 6: Đây là câu số mấy?");
        printf("\na.6     b.5     c.8     d.7");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='b'||check=='B')
        {
        printf("Đây là câu số 5 nhé:v");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
    }
           if(n==6)//cau 6
    {
        printf("\n\nCâu hỏi 6: Đánh người khác là?");
        printf("\na.Bọn côn đồ     b.Ác độc     c.Bàn chải     d.Đi tù");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='c'||check=='C')
        {
        printf("Bàn chải đánh răng:))");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
    }
    if(n==7)//cau 7
      {
        printf("\n\nCâu hỏi 7: Cái gì giữa trời và đất?");
        printf("\na.Nước     b.Không khí     c.Không có gì     d.Và");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
        {
        printf("Từ 'và' giữa trời và đất =))");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==8)//cau 8
      {
        printf("\n\nCâu hỏi 8: Con cua tám cẳng hai càng gãy hai cẳng còn bò mấy chân?");
        printf("\na.6     b.5     c.8     d.4");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
        {
        printf("Hỏi con bò cơ mà :D");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
      }
          if(n==9)//cau 9
      {
        printf("\n\nCâu hỏi 9: Loài chó nào nhảy cao bằng tòa nhà cao nhất thế giới?");
        printf("\na.Bất cứ loài nào     b.Chó Pháp     c.Chó Đức     d.Chó Nhật");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("Nhà trên giấy chứ đâu:))");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
      }
          if(n==10)//cau 10
      {
        printf("\n\nCâu hỏi 10: Một căn phòng có 4 góc, mỗi góc có một con mèo trước mặt mỗi con mèo có 3 con mèo. Vậy trong phòng đó có tất cả mấy con mèo???");
        printf("\na.16     b.12    c.4   d.5");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='c'||check=='C')
        {
        printf("4 con mèo ở 4 góc phòng =))");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
      }
          if(n==11)//cau 11
      {
        printf("\n\nCâu hỏi 11: Chữ cái đầu tiên trong bảng chữ cái Tiếng Việt là gì?");
        printf("\na.B     b.C     c.D     d.A");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
        {
        printf("Dành cho mấy đứa hay chơi game troll này :)");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
      }
          if(n==12)//cau 12
      {
        printf("\n\nCâu hỏi 12: Sở thú bị cháy, con gì chạy ra đầu tiên?");
        printf("\na.Con chim     b.Con báo     c.Con người     d.Con khỉ");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='c'||check=='C')
        {
        printf("Đương nhiên là con người thấy báo động chạy ra trước rồi=))");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }

      }
          if(n==13)//cau 13
      {
        printf("\n\nCâu hỏi 13:Nhà bên trái màu xanh, nhà bên phải màu đỏ. Nhà màu trắng ở đâu? ");
        printf("\na.USA     b.Ở giữa     c.Đằng trước     d.Biết đâu được");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("Ở Mĩ có Nhà Trắng - https://vi.wikipedia.org/wiki/Nhà_Trắng :v");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==14)//cau 14
      {
        printf("\n\nCâu hỏi 14: 1 cầu vồng có 7 màu vậy 3 cầu vồng có mấy màu?");
        printf("\na.21     b.25     c.7     d.3");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='c'||check=='C')
        {
        printf("Cầu vồng chỉ có 7 màu thôi nhé:)))");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==15)//cau 15
      {
        printf("\n\nCâu hỏi 15: 2 người đào trong 1 giờ được 1 cái hố. Hỏi 1 người đào trong 1 giờ được mấy cái hố?");
        printf("\na.1/2     b.1     c.2     d.Không đào được");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='b'||check=='B')
        {
        printf("Đào được 1 cái hố (nhỏ hơn)");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==16)//cau 16
      {
        printf("\n\nCâu hỏi 16: 4:3 = ?");
        printf("\na.42.3    b.1.3     c.2.3     d.22.3");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("4:3 là bốn hai chấm 3 <=> 42.3");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==17)//cau 17
      {
        printf("\n\nCâu hỏi 17: 4 : 3 = ?");
        printf("\na.5     b.4     c.1     d.2");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
        {
        printf("4 : 3 = tứ chia tam = tám chia tư = 2");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==18)//cau 18
      {
        printf("\n\nCâu hỏi 18: Có một tàu điện đi về hướng nam. Gió hướng tây bắc. Vậy khói từ con tàu sẽ theo hướng nào?");
        printf("\na.Hên xui     b.Đông     c.Tây     d.Next đê");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
        {
        printf("Tàu điện làm gì có khói =))))");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==19)//cau 19
      {
        printf("\n\nCâu hỏi 19: Cho bạn một rổ có 3 quả táo chia đều cho 3 người, đưa cho mấy người thì vẫn còn 1 quả táo trong rổ ?");
        printf("\na.3     b.2     c.1     d.0");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("Đưa cho 2 người đầu tiên 2 quả táo, người cuối cùng đưa nguyên cả rổ lẫn táo là xong!");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==20)//cau 20
      {
        printf("\n\nCâu hỏi 20: Tìm lỗi sai trong câu sau đây: 'Nắng ấm áp sương long lanh triệu cành hồng khoe sắc thắm' ");
        printf("\na.'Nắng ấm áp'     b.'Triệu cành hồng'     c.'Triệu cành hồng'     d.'Khoe sắc thắm' ");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
        {
        printf("Khoe sắc khóe chứ =))");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==21)//cau 21
      {
        printf("\n\nCâu hỏi 21:Vào một ngày đông giá rét, bạn bước vào một căn phòng lạnh lẽo với một que diêm trong tay và đang cần sưởi ấm bản thân mình. Trong phòng chỉ có một cây đèn, một bếp củi, bạn sẽ cần làm gì trước tiên?");
        printf("\na.Quẹt diêm    b.Nhóm lửa bếp củi    c.Chịu thua     d.Qua màn");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("Bạn cần quẹt diêm lên rồi làm gì thì làm =))");
        n++;
        }
        else if(check=='d'||check=='D')
        {
            n=33;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==22)//cau 22
      {
        printf("\n\nCâu hỏi 22: 1 tù nhân bị bắt buộc lựa chọn một trong 3 cực hình: bị bắn chết, đưa vào phòng không có oxy, đưa vào phòng có đàn sư tử bị bỏ đói 3 năm. Anh ta nên chọn cực hình nào?");
        printf("\na.Bị bắn    b.Vào phòng không oxy    c.Chả chọn cái nào     d.Vào phòng có sư tử");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
        {
        printf("Sư tử bị bỏ đói 3 năm thì chết hết rồi còn đâu :)))");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==23)//cau 23
      {
        printf("\n\nCâu hỏi 23: Hãy thử tưởng tượng mình bị trói trong một căn phòng đang cháy, cửa sổ bỏ không có thể nhảy xuống biển nhưng biển lại toàn cá sấu. Bạn phải làm gì để thoát thân? ");
        printf("\na.Chờ cháy    b.Ngưng tưởng tượng    c.Nhảy xuống biển     d.Vùng vẫy tháo dây");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='b'||check=='B')
        {
        printf("Chỉ cần không tưởng tượng là bạn thoát ngay chứ gì =D");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==24)//cau 24
      {
        printf("\n\nCâu hỏi 24: Tôi ... qua câu này. Tôi ... thích gay");
        printf("\na.Có    b.Không    c.Chịu thua     d.Cạn lời");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("Bạn không gay, bạn trai bạn mới gay =))))");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==25)//cau 25
      {
        printf("\n\nCâu hỏi 25: Ngược lại với đen là?");
        printf("\na.white    b.nedd    c.red     d.black");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='b'||check=='B')
        {
        printf("nedd = neđ ngược lại với đen :v");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==26)//cau 26
      {
        printf("\n\nCâu hỏi 26: Ta có: 6+4=210 || 9+2=711 || 8+5=313 || 5+2=37. Vậy 7+6 = ?");
        printf("\na.13    b.15    c.113     d.110");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='c'||check=='C')
        {
        printf("7 - 6 =1 và 7+6 = 13 rồi ghép lại được 113");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==27)//cau 27
      {
        printf("\n\nCâu hỏi 27: Có bao nhiêu tháng có 28 ngày");
        printf("\na.1   b.12    c.Không có     d.7");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='b'||check=='B')
        {
        printf("Tháng nào mà chả có 28 ngày =]]]");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==28)//cau 28
      {
        printf("\n\nCâu hỏi 28: Cái đầu giống mèo, cái chân giống mèo, cái tai cũng giống mèo nhưng không phải con mèo?");
        printf("\na.mèo con    b.bóng của mèo    c.con hổ     d.con báo");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='b'||check=='B')
        {
        printf("Bóng của con mèo giống mèo mà lại chẳng phải con mèo :}}");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==29)//cau 29
      {
        printf("\n\nCâu hỏi 29: Bây giờ chơi lại từ đầu mới thắng được, bạn có muốn chơi lại từ đầu không?");
        printf("\na.Có    b.Không    c.Bỏ câu này     d.Cái hợi gì vậy!?");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
            printf("Vậy chơi lại từ đầu đi! =)) \n\n");
            n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
          if(n==30)//cau 30 || neu chon d thi di tiep
    {
    printf("Câu hỏi 1: Ai sẽ là người thắng?");
    printf("\na.Thằng thớt    b.Bạn     c.Ai     d.Câu tiếp đi");
    printf("\nChọn câu trả lời: "); scanf("%s", &check);
    nhap_sai(check);
    if(check=='c'||check=='C')
    {
        printf("Ai là người thắng:))");
        n=2;
    }
    else if(check=='d'||check=='D')
    {
        printf("\nSự lựa chọn sáng suốt :}");
        n++; break;
    }
    else
            {
        printf("Bạn đã thua!");
        lose();
    }
    }
}
          if(n==31)//hoi lai cau 3
      {
        printf("\n\nCâu hỏi 30: Học sinh thấy 1 con cò mù sao học sinh lại vui?");
        printf("\na.Mới nhìn thấy cò lần đầu   b.Được nghỉ học    c.Thịt cò nướng ngon lắm:))     d.Tâm hồn văn học bay bổng");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='b'||check=='B')
        {
            printf("Cò mù là cò không thấy, cò không thấy là thầy không có =))");
            n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      for(int i =0;i<n;i++)
      {
          if(n==32)
          {
        printf("\n\nCâu hỏi 30:Mời bạn trả lời lại câu 3 0 xem nhé. Học sinh thấy 1 con cò mù sao học sinh lại vui?");
        printf("\na.Mới nhìn thấy cò lần đầu   b.Được nghỉ học    c.Thịt cò nướng ngon lắm:))     d.Tâm hồn văn học bay bổng");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
            printf("Đã nói là trả lời lại câu 3, không xem nhé rồi mà =))");
            n++;
        }
        else if(check=='b'||check=='B')
        {
        for(i=0;i<10000;i++)//vòng lặp cho câu 30
        {
        printf("\n\nCâu hỏi 30: Mời bạn trả lời lại câu 3 0 xem nhé. Học sinh thấy 1 con cò mù sao học sinh lại vui?");
        printf("\na.Mới nhìn thấy cò lần đầu   b.Được nghỉ học    c.Thịt cò nướng ngon lắm:))     d.Tâm hồn văn học bay bổng");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("Đã nói là trả lời lại câu 3, không xem nhé rồi mà =))");
          printf("\nChờ 1 chút nhé!");
          Sleep( 3000 );
          printf("\n\nBạn đã thua!");
          Sleep(57000);
          printf("\n Đã bảo chờ chút mà =)) ");
          printf("\n\nChúc mừng bạn đã dành chiến thắng. Thánh troll của năm đây rồi =))");
          lose();
        }
        }
        }
        else lose();
          }
      }
      if(n==33)// ket thuc tro choi
      {
          printf("\nChờ 1 chút nhé!");
          Sleep( 3000 );
          printf("\n\nBạn đã thua!");
          Sleep(57000);
          printf("\nĐã bảo chờ chút mà =)) ");
          printf("\n\nChúc mừng bạn đã dành chiến thắng. Thánh troll của năm đây rồi =))");
          lose();
      }
    }
else exit(0);
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    SetConsoleOutputCP(65001);
    char check;
    printf("-----------------------------------------------------------------------------");
    printf("\nChào mừng bạn đến với '((= Ai là thánh troll =)) ");
    printf("\nBạn sẽ có 30 câu hỏi cần phải vượt qua:\n");
    int n=1;// bien cau hoi
    for(int i=0;i<10000;i++)
     {
         if(n==1)//cau 1
    {
    printf("Câu hỏi 1: Ai sẽ là người thắng?");
    printf("\na.Thằng thớt    b.Bạn     c.Ai     d.Câu tiếp đi");
    printf("\nChọn câu trả lời: "); scanf("%s", &check);
    nhap_sai(check);
    if(check=='c'||check=='C')
    {
        printf("Ai là người thắng:))");
        n++;
    }
    else
    {
        printf("Bạn đã thua!");
        lose();
    }
    }
    if(n==2)//cau 2
    {
        printf("\n\nCâu hỏi 2: Bố Nguyệt có ba người con Đông, Tây, Nam, ... Tên của đứa con cuối cùng là gì?");
        printf("\na.Bắc     b.Hùng     c.Tây Nam     d.Nguyệt");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
    {
        printf("Câu này dễ quá nhỉ:v");
        n++;
    }
    else
            {
        printf("Bạn đã thua!");
        lose();
    }
    }
    if(n==3)//cau 3
    {
        printf("\n\nCâu hỏi 3: Chữ cái đầu tiên trong bảng chữ cái Tiếng Việt là gì?");
        printf("\na.B     b.D     c.A     d.C");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("Trong 'bảng chữ cái Tiếng Việt' mà:))");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
    }
       if(n==4)//cau 4
    {
        printf("\n\nCâu hỏi 4: Phim con heo có bao nhiêu con heo?");
        printf("\na.Không có heo     b.1 con heo     c.Em chưa xem bao giờ     d.Khó nói quá à :p");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf(":))))))))))))");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
    }
           if(n==5)//cau 5
    {
        printf("\n\nCâu hỏi 6: Đây là câu số mấy?");
        printf("\na.6     b.5     c.8     d.7");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='b'||check=='B')
        {
        printf("Đây là câu số 5 nhé:v");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
    }
           if(n==6)//cau 6
    {
        printf("\n\nCâu hỏi 6: Đánh người khác là?");
        printf("\na.Bọn côn đồ     b.Ác độc     c.Bàn chải     d.Đi tù");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='c'||check=='C')
        {
        printf("Bàn chải đánh răng:))");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
    }
    if(n==7)//cau 7
      {
        printf("\n\nCâu hỏi 7: Cái gì giữa trời và đất?");
        printf("\na.Nước     b.Không khí     c.Không có gì     d.Và");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
        {
        printf("Từ 'và' giữa trời và đất =))");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==8)//cau 8
      {
        printf("\n\nCâu hỏi 8: Con cua tám cẳng hai càng gãy hai cẳng còn bò mấy chân?");
        printf("\na.6     b.5     c.8     d.4");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
        {
        printf("Hỏi con bò cơ mà :D");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
      }
          if(n==9)//cau 9
      {
        printf("\n\nCâu hỏi 9: Loài chó nào nhảy cao bằng tòa nhà cao nhất thế giới?");
        printf("\na.Bất cứ loài nào     b.Chó Pháp     c.Chó Đức     d.Chó Nhật");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("Nhà trên giấy chứ đâu:))");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
      }
          if(n==10)//cau 10
      {
        printf("\n\nCâu hỏi 10: Một căn phòng có 4 góc, mỗi góc có một con mèo trước mặt mỗi con mèo có 3 con mèo. Vậy trong phòng đó có tất cả mấy con mèo???");
        printf("\na.16     b.12    c.4   d.5");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='c'||check=='C')
        {
        printf("4 con mèo ở 4 góc phòng =))");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
      }
          if(n==11)//cau 11
      {
        printf("\n\nCâu hỏi 11: Chữ cái đầu tiên trong bảng chữ cái Tiếng Việt là gì?");
        printf("\na.B     b.C     c.D     d.A");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
        {
        printf("Dành cho mấy đứa hay chơi game troll này :)");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }
      }
          if(n==12)//cau 12
      {
        printf("\n\nCâu hỏi 12: Sở thú bị cháy, con gì chạy ra đầu tiên?");
        printf("\na.Con chim     b.Con báo     c.Con người     d.Con khỉ");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='c'||check=='C')
        {
        printf("Đương nhiên là con người thấy báo động chạy ra trước rồi=))");
        n++;
        }
        else
            {
        printf("Bạn đã thua!");
        lose();
    }

      }
          if(n==13)//cau 13
      {
        printf("\n\nCâu hỏi 13:Nhà bên trái màu xanh, nhà bên phải màu đỏ. Nhà màu trắng ở đâu? ");
        printf("\na.USA     b.Ở giữa     c.Đằng trước     d.Biết đâu được");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("Ở Mĩ có Nhà Trắng - https://vi.wikipedia.org/wiki/Nhà_Trắng :v");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==14)//cau 14
      {
        printf("\n\nCâu hỏi 14: 1 cầu vồng có 7 màu vậy 3 cầu vồng có mấy màu?");
        printf("\na.21     b.25     c.7     d.3");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='c'||check=='C')
        {
        printf("Cầu vồng chỉ có 7 màu thôi nhé:)))");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==15)//cau 15
      {
        printf("\n\nCâu hỏi 15: 2 người đào trong 1 giờ được 1 cái hố. Hỏi 1 người đào trong 1 giờ được mấy cái hố?");
        printf("\na.1/2     b.1     c.2     d.Không đào được");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='b'||check=='B')
        {
        printf("Đào được 1 cái hố (nhỏ hơn)");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==16)//cau 16
      {
        printf("\n\nCâu hỏi 16: 4:3 = ?");
        printf("\na.42.3    b.1.3     c.2.3     d.22.3");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("4:3 là bốn hai chấm 3 <=> 42.3");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==17)//cau 17
      {
        printf("\n\nCâu hỏi 17: 4 : 3 = ?");
        printf("\na.5     b.4     c.1     d.2");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
        {
        printf("4 : 3 = tứ chia tam = tám chia tư = 2");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==18)//cau 18
      {
        printf("\n\nCâu hỏi 18: Có một tàu điện đi về hướng nam. Gió hướng tây bắc. Vậy khói từ con tàu sẽ theo hướng nào?");
        printf("\na.Hên xui     b.Đông     c.Tây     d.Next đê");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
        {
        printf("Tàu điện làm gì có khói =))))");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==19)//cau 19
      {
        printf("\n\nCâu hỏi 19: Cho bạn một rổ có 3 quả táo chia đều cho 3 người, đưa cho mấy người thì vẫn còn 1 quả táo trong rổ ?");
        printf("\na.3     b.2     c.1     d.0");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("Đưa cho 2 người đầu tiên 2 quả táo, người cuối cùng đưa nguyên cả rổ lẫn táo là xong!");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==20)//cau 20
      {
        printf("\n\nCâu hỏi 20: Tìm lỗi sai trong câu sau đây: 'Nắng ấm áp sương long lanh triệu cành hồng khoe sắc thắm' ");
        printf("\na.'Nắng ấm áp'     b.'Triệu cành hồng'     c.'Triệu cành hồng'     d.'Khoe sắc thắm' ");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
        {
        printf("Khoe sắc khóe chứ =))");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
        if(n==21)//cau 21
      {
        printf("\n\nCâu hỏi 21:Vào một ngày đông giá rét, bạn bước vào một căn phòng lạnh lẽo với một que diêm trong tay và đang cần sưởi ấm bản thân mình. Trong phòng chỉ có một cây đèn, một bếp củi, bạn sẽ cần làm gì trước tiên?");
        printf("\na.Quẹt diêm    b.Nhóm lửa bếp củi    c.Chịu thua     d.Qua màn");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("Bạn cần quẹt diêm lên rồi làm gì thì làm =))");
        n++;
        }
        else if(check=='d'||check=='D')
        {
            n=33;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==22)//cau 22
      {
        printf("\n\nCâu hỏi 22: 1 tù nhân bị bắt buộc lựa chọn một trong 3 cực hình: bị bắn chết, đưa vào phòng không có oxy, đưa vào phòng có đàn sư tử bị bỏ đói 3 năm. Anh ta nên chọn cực hình nào?");
        printf("\na.Bị bắn    b.Vào phòng không oxy    c.Chả chọn cái nào     d.Vào phòng có sư tử");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='d'||check=='D')
        {
        printf("Sư tử bị bỏ đói 3 năm thì chết hết rồi còn đâu :)))");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==23)//cau 23
      {
        printf("\n\nCâu hỏi 23: Hãy thử tưởng tượng mình bị trói trong một căn phòng đang cháy, cửa sổ bỏ không có thể nhảy xuống biển nhưng biển lại toàn cá sấu. Bạn phải làm gì để thoát thân? ");
        printf("\na.Chờ cháy    b.Ngưng tưởng tượng    c.Nhảy xuống biển     d.Vùng vẫy tháo dây");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='b'||check=='B')
        {
        printf("Chỉ cần không tưởng tượng là bạn thoát ngay chứ gì =D");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==24)//cau 24
      {
        printf("\n\nCâu hỏi 24: Tôi ... qua câu này. Tôi ... thích gay");
        printf("\na.Có    b.Không    c.Chịu thua     d.Cạn lời");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
        printf("Bạn không gay, bạn trai bạn mới gay =))))");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==25)//cau 25
      {
        printf("\n\nCâu hỏi 25: Ngược lại với đen là?");
        printf("\na.white    b.nedd    c.red     d.black");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='b'||check=='B')
        {
        printf("nedd = neđ ngược lại với đen :v");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==26)//cau 26
      {
        printf("\n\nCâu hỏi 26: Ta có: 6+4=210 || 9+2=711 || 8+5=313 || 5+2=37. Vậy 7+6 = ?");
        printf("\na.13    b.15    c.113     d.110");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='c'||check=='C')
        {
        printf("7 - 6 =1 và 7+6 = 13 rồi ghép lại được 113");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==27)//cau 27
      {
        printf("\n\nCâu hỏi 27: Có bao nhiêu tháng có 28 ngày");
        printf("\na.1   b.12    c.Không có     d.7");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='b'||check=='B')
        {
        printf("Tháng nào mà chả có 28 ngày =]]]");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==28)//cau 28
      {
        printf("\n\nCâu hỏi 28: Cái đầu giống mèo, cái chân giống mèo, cái tai cũng giống mèo nhưng không phải con mèo?");
        printf("\na.mèo con    b.bóng của mèo    c.con hổ     d.con báo");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='b'||check=='B')
        {
        printf("Bóng của con mèo giống mèo mà lại chẳng phải con mèo :}}");
        n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      if(n==29)//cau 29
      {
        printf("\n\nCâu hỏi 29: Bây giờ chơi lại từ đầu mới thắng được, bạn có muốn chơi lại từ đầu không?");
        printf("\na.Có    b.Không    c.Bỏ câu này     d.Cái hợi gì vậy!?");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
            printf("Vậy chơi lại từ đầu đi! =)) \n\n");
            n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
          if(n==30)//cau 30 || neu chon d thi di tiep
    {
    printf("Câu hỏi 1: Ai sẽ là người thắng?");
    printf("\na.Thằng thớt    b.Bạn     c.Ai     d.Câu tiếp đi");
    printf("\nChọn câu trả lời: "); scanf("%s", &check);
    nhap_sai(check);
    if(check=='c'||check=='C')
    {
        printf("Ai là người thắng:))");
        n=2;
    }
    else if(check=='d'||check=='D')
    {
        printf("\nSự lựa chọn sáng suốt :}");
        n++; break;
    }
    else
            {
        printf("Bạn đã thua!");
        lose();
    }
    }
}
          if(n==31)//hoi lai cau 3
      {
        printf("\n\nCâu hỏi 30: Học sinh thấy 1 con cò mù sao học sinh lại vui?");
        printf("\na.Mới nhìn thấy cò lần đầu   b.Được nghỉ học    c.Thịt cò nướng ngon lắm:))     d.Tâm hồn văn học bay bổng");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='b'||check=='B')
        {
            printf("Cò mù là cò không thấy, cò không thấy là thầy không có =))");
            n++;
        }
        else
                {
        printf("Bạn đã thua!");
        lose();
    }
      }
      for(int i =0;i<n;i++)
      {
          if(n==32)
          {
        printf("\n\nCâu hỏi 30:Mời bạn trả lời lại câu 3 0 xem nhé. Học sinh thấy 1 con cò mù sao học sinh lại vui?");
        printf("\na.Mới nhìn thấy cò lần đầu   b.Được nghỉ học    c.Thịt cò nướng ngon lắm:))     d.Tâm hồn văn học bay bổng");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
            printf("Đã nói là trả lời lại câu 3, không xem nhé rồi mà =))");
            n++;
        }
        else if(check=='b'||check=='B')
        {
        for(i=0;i<10000;i++)//vòng lặp cho câu 30
        {
        printf("\n\nCâu hỏi 30: Mời bạn trả lời lại câu 3 0 xem nhé. Học sinh thấy 1 con cò mù sao học sinh lại vui?");
        printf("\na.Mới nhìn thấy cò lần đầu   b.Được nghỉ học    c.Thịt cò nướng ngon lắm:))     d.Tâm hồn văn học bay bổng");
        printf("\nChọn câu trả lời: "); scanf("%s", &check);
        nhap_sai(check);
        if(check=='a'||check=='A')
        {
          printf("Đã nói là trả lời lại câu 3, không xem nhé rồi mà =))");
          printf("\nChờ 1 chút nhé!");
          Sleep( 3000 );
          printf("\n\nBạn đã thua!");
          Sleep(57000);
          printf("\nĐã bảo chờ chút mà =)) ");
          printf("\n\nChúc mừng bạn đã dành chiến thắng. Thánh troll của năm đây rồi =))");
          lose();
        }
        }
        }
        else lose();
          }
      }
      if(n==33)// ket thuc tro choi
      {
          printf("\nChờ 1 chút nhé!");
          Sleep( 3000 );
          printf("\n\nBạn đã thua!");
          Sleep(57000);
          printf("\nĐã bảo chờ chút mà =)) ");
          printf("\n\nChúc mừng bạn đã dành chiến thắng. Thánh troll của năm đây rồi =))");
          lose();
      }
}






