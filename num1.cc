// 请实现一个函数，将一个字符串中的空格替换成“%20”。
// 例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
class Solution {
    public:
        void replaceSpace(char *str,int length) {
            if(str==NULL||length<=0)
                return;
            int i=0,numberOfblank=0,oldnumber=0;
            while(str[i]!='\0') {
                oldnumber++;
                if(str[i]==' ')
                    numberOfblank++;    
                i++;

            }
            int newlength=oldnumber+numberOfblank*2;
            if(newlength>length)
                return;
            while(oldnumber>=0&&newlength>oldnumber){
                if(str[oldnumber]==' '){
                    str[newlength--]='0';
                    str[newlength--]='2';
                    str[newlength--]='%';

                }
                else
                    str[newlength--]=str[oldnumber];
                oldnumber--;

            }


        }

};
