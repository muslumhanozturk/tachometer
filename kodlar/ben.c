#include <16f877.h>


#fuses XT,NOWDT,NOPROTECT, NOBROWNOUT,NOLVP,NOPUT,NOWRT,NODEBUG,NOCPD
#use delay(clock=4000000)
#use fast_io(b)
#use fast_io(c)
#use fast_io(e)

unsigned int32 i=0;
int s=0;
float y,j=0;

#define use_portb_lcd TRUE

#include <lcd.c>

#int_timer1
void timer1_kesme()
{
s++;
if (s>3)
{
s=4;
lcd_gotoxy(6,1);
printf(lcd_putc,"XXXXXX");
}
}


#int_CCP1
void yakala_kesmesi()
{


i=get_timer1();
set_timer1(0);
i=i+65535*s;
s=0;
j=i*0.000008/4;
j=60/j;
lcd_gotoxy(6,1);

printf(lcd_putc,"%f",j);



}





void main()
{
setup_psp(PSP_DISABLED);
setup_spi(SPI_SS_DISABLED);
setup_timer_1(T1_INTERNAL |T1_DIV_BY_8);
setup_adc_ports(NO_ANALOGS);
setup_adc(ADC_OFF);
enable_interrupts(INT_CCP1);
enable_interrupts(int_timer1);
enable_interrupts(GLOBAL);
lcd_init();


setup_ccp1(CCP_CAPTURE_DIV_4);

CCP_1_HIGH=0x00;
CCP_2_LOW=0x00;





set_tris_b(0x00);
set_tris_c(0x07);

output_b(0x00);

printf(lcd_putc,"\fSPIN         RPM");

while(1);

 
   

}

