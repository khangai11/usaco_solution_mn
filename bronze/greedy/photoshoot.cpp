#include "bits/stdc++.h"

using namespace std;
using ll = long long;


/***
 * hint1: GGHH байх үед G usguudiig 2uulang ni tegsh bairand avaachij chadah uu?
 * 
 * hint2: GH GH GH GH... GH  байвал хэдэн үйлдэл хийх хэрэгтэй вэ?
 * 
 * hint3: GH GH GH ... GH HG GH GH GH... GH байвал хэдэн үйлдэл хэрэгтэй вэ?
 * 
 * solution: эхнээс нь 2,2-оор нь салгаад харах юм бол GG байвал ямар ч үйлдэл хийсэн аль нэг нь заавал 
 * аль нэг нь сондгой байранд үлдэх учраас үйлдэл хийх шаардлага байхгүй.
 * Мөн HH байх юм бол бид үйлдэл хийгээд хэрэггүй нь харагдана.
 * тийм учраас GG болон HH байгаа газруудыг устгасан ч хариуд өөрчлөлт гарахгүй.
 * GH эсвэл HG байх юм бол бид G-г нь тэгш байранд аваачиж чадна.
 * GH-iin daraa HG orson baival ene 2iig adilhan bolgohiin tuld urd tald baigaa hesegt ni neg udaa 
 * uildel hiij baij adilhan bolgoj boloh uchir (GH GH GH HG) -> (HG HG HG HG) 
 * bolgoh uildel hiine gesen ug.
 * 
 * etssiin hariu ni HG->GH болон GH->HG болж хувирч байгаа газар болгон бид үйлдэл хийнэ гэсэн үг.
 * Мөн бүгдийг нь адилхан болгох дээрх үйлдэл хийж дууссаны дараа G-үүд сондгой байранд байвал тэгш болгохын тулд дахиж нэг удаа үйлдэл хийх хэрэгтэй болно.
*/








int main(void){
    ll n;
    string s;
    cin>>n>>s;
    int ans = 0;
    int prev_loc = 0;
    for(int i=0;i<n;i+=2){
        if(s[i]=='G' && s[i+1]=='H'){
            //loc = 1;
            if(prev_loc==2){
                ans++;
            }
            prev_loc = 1;
        } else if(s[i]=='H' && s[i+1]=='G'){
            //loc = 2;
            if(prev_loc==1){
                ans++;
            }
            prev_loc = 2;
        }
    }
    if(prev_loc==1) ans++;
    cout<<ans<<"\n";
}