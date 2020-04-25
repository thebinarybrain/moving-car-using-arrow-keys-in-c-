#include<graphics.h>
#include<windows.h>
int main()
{
DWORD screenWidth=GetSystemMetrics(SM_CXSCREEN);
DWORD screenHeight=GetSystemMetrics(SM_CYSCREEN);
initwindow(screenWidth,screenHeight," ",-3,-3);
int rectposx=100,cir1posx=200,cir2posx=500,speed=10;
while(1)
{
    setcolor(RED);
    for(int i=0;i<=19;i++)
        rectangle(rectposx,300,rectposx+500,511);
    setcolor(BLUE);
    for(int i=50;i<=69;i++)
    {

        circle(cir1posx,600,50);
        circle(cir2posx,600,50);
    }
    setcolor(GREEN);
    for(int i=0;i<=19;i++)
        line(0,670,screenWidth,670);
    if(GetAsyncKeyState(VK_LEFT))
    {
        rectposx-=speed;
        cir1posx-=speed;
        cir2posx-=speed;
    }
    else if(GetAsyncKeyState(VK_RIGHT))
    {
        rectposx+=speed;
        cir1posx+=speed;
        cir2posx+=speed;
    }
    delay(5);
    cleardevice();
}
getch();
}

