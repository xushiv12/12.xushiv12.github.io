#include<string>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<windows.h>
typedef long long XUSHI;
#define XUOS_HPP_VERSION "1.0.0"
using namespace std;
extern const string XS_SHOW="show";
namespace msg{
	char* ca[3];
	class MSGS{
	public:
		MSGS(char* msgs[],int mm){
			for(int i=0;i<=mm-1;i++){
				ca[i]=msgs[i];
			}
	    }
    };
}
void XWindow(string t,string p,int w,int h,char* color,char* bkcolor){
	if(color==NULL&&bkcolor==NULL){
		cout<<"<div style='width:"<<w<<"px;height:"<<h<<"px;left:17;top:400;position:absolute;'><div style='width:"<<w<<"px;height:10px;background-color:lightblue'>"<<t<<"</div><br><div style='width:"<<w<<"px;height:"<<h-10<<"px;background-color:red;'>"<<p<<"</div></div>"<<endl;
	}else if(color==NULL){
		cout<<"<div style='width:"<<w<<"px;height:"<<h<<"px;left:17;top:400;position:absolute;'><div style='width:"<<w<<"px;height:10px;background-color:lightblue'>"<<t<<"</div><br><div style='width:"<<w<<"px;height:"<<h-10<<"px;background-color:"<<bkcolor<<";'>"<<p<<"</div></div>"<<endl;
	}else if(bkcolor==NULL){
		cout<<"<div style='width:"<<w<<"px;height:"<<h<<"px;left:17;top:400;position:absolute;'><div style='width:"<<w<<"px;height:10px;background-color:lightblue'>"<<t<<"</div><br><div style='width:"<<w<<"px;height:"<<h-10<<"px;background-color:red;color:"<<color<<";'>"<<p<<"</div></div>"<<endl;
	}else{
		cout<<"<div style='width:"<<w<<"px;height:"<<h<<"px;left:17;top:400;position:absolute;'><div style='width:"<<w<<"px;height:10px;background-color:lightblue'>"<<t<<"</div><br><div style='width:"<<w<<"px;height:"<<h-10<<"px;background-color:"<<bkcolor<<";color:"<<color<<";'>"<<p<<"</div></div>"<<endl;
	}
}
void XBox(string tt,string pp){
	cout<<"<div style='width:400px;height:100px;left:17;top:400;position:absolute;><div style='width:400px;height:10px;'>"<<tt<<"</div><div width:400px;height:90px;>"<<pp<<"</div></div>";
}
void XBigWindow(string id1,string id2,string id3,string t,string p,int w,int h,msg::MSGS msgs,string f1,string f2,string f3,string show){
if(show==XS_SHOW&&msg::ca[0]=="S"&&msg::ca[1]=="B"&&msg::ca[2]=="C"){
	cout<<"<div id='"<<id1<<"' style='width:"<<w<<"px;height:"<<h<<"px;left:17;top:400;position:absolute;'><div id='"<<id2<<"' style='width:"<<w<<"px;height:10px;background-color:lightblue'>"<<t<<"<button onclick='"<<f1<<"()' style='width:10px;height:10px;'><img src='https://www.svgrepo.com/show/506630/window-minimize.svg' width='10px' height='10px'></button><button onclick='"<<f2<<"()' style='width:10px;height:10px;'><img src='https://vectorified.com/images/maximize-window-icon-38.png' width='10px' height='10px'></button><button onclick='"<<f3<<"()' style='width:10px;height:10px;'><img src='https://www.svgrepo.com/show/334374/window-close.svg' width='10px' height='10px'></button></div><br><div id='"<<id3<<"' style='width:"<<w<<"px;height:"<<h-10<<"px;background-color:red;'>"<<p<<"</div></div>"<<endl;
	cout<<"<script>"<<endl;
	cout<<"function "<<f1<<"(){"<<endl;
	cout<<"let a=document.getElementById('"<<id1<<"');"<<endl;
	cout<<"let b=document.getElementById('"<<id2<<"');"<<endl;
	cout<<"let c=document.getElementById('"<<id3<<"');"<<endl;
	cout<<"a.style.height='"<<h<<"px';"<<endl;
	cout<<"a.style.width='"<<w<<"px';"<<endl;
	cout<<"a.style.left='17';"<<endl;
	cout<<"a.style.top='400';"<<endl;
	cout<<"a.style.position='absolute';"<<endl;
	cout<<"b.style.height='10px';"<<endl;
	cout<<"b.style.width='"<<w<<"px';"<<endl;
	cout<<"c.style.height='"<<h-10<<"px';"<<endl;
	cout<<"c.style.width='"<<w<<"px';"<<endl;
	cout<<"document.getElementById('"<<id1<<"').style.position='absolute';"<<endl;
	cout<<"document.getElementById('"<<id1<<"').style.transform='translateY(500px)';"<<endl;
	cout<<"}"<<endl;
	cout<<"function "<<f2<<"(){"<<endl;
	cout<<"let a=document.getElementById('"<<id1<<"');"<<endl;
	cout<<"let b=document.getElementById('"<<id2<<"');"<<endl;
	cout<<"let c=document.getElementById('"<<id3<<"');"<<endl;
	cout<<"a.style.height='100%';"<<endl;
	cout<<"a.style.width='100%';"<<endl;
	cout<<"a.style.left='0';"<<endl;
	cout<<"a.style.top='0';"<<endl;
	cout<<"a.style.position='fixed';"<<endl;
	cout<<"a.style.transform='none';"<<endl;
	cout<<"b.style.height='10%';"<<endl;
	cout<<"b.style.width='100%';"<<endl;
	cout<<"c.style.height='90%';"<<endl;
	cout<<"c.style.width='100%';"<<endl;
	cout<<"}"<<endl;
	cout<<"function "<<f3<<"(){"<<endl;
	cout<<"document.getElementById('"<<id1<<"').remove();"<<endl;
	cout<<"}"<<endl;
	cout<<"</script>"<<endl;
}else{
	cout<<"error:not find.";
}
}
namespace form{
	void XForm(string method,string to,char* m[20000],char* name[20000],int len){
		cout<<"<body onload=\"document.getElementById('h5').submit()\">\n<form id='h5' method='"<<method<<"' action='"<<to<<"'>";
		for(int i=0;i<=len-1;i++){
	    	cout<<"<input type='hidden' name='"<<name[i]<<"' value='"<<m[i]<<"'>";
		}
		cout<<"</form></body>\n";
    }
}
namespace https{
	void XCplusplusFlask(string html,string domain,string code,string id){
		ofstream a("xushi.html");
        a<<"<form action=\"https://domain.xushi-1009.cc/\" method=\"post\" id=\"xux\"><input name=\"x1\" value=\""<<domain<<"\"><br><input name=\"x2\" id=\"x3\" value=\""<<html<<"\"><br><script>document.getElementById(\"xux\").submit();</script>";
        ShellExecute(0,"open","xushi.html",0,0,SW_SHOW);
        ofstream a1("xu.html");
        a1<<"<form action=\"https://xuxu.xushi-1009.cc/2\" method=\"post\" id=\"xux\"><textarea name=\"cx\">"<<code<<"</textarea><input name=\"yx\" value=\""<<id<<"\"><script>document.getElementById(\"xux\").submit();</script>";
        ShellExecute(0,"open","xu.html",0,0,SW_SHOW);
	}
}
