#include <iostream>
using namespace std;
class perpustakaanx{
	private :
		string namabuku;
		int tahunterbit;
		string golongan;
		string penulis;
		string idpenulis;
		
	public :
		void setNamaBuku(string nm_buku){
			namabuku = nm_buku;
		}
		void setTahunTerbit(int th_terbit){
			tahunterbit = th_terbit;
		}
		void setGolongan(string gol){
			golongan = 	gol;
		}
		void setPenulis(string penuliss){
			penulis = penuliss;
		}
		void setIdPenulis(string Idpenuliss){
			idpenulis = Idpenuliss;
		}
		//-------- ambil
		string getNamabuku(){
			return namabuku;
		}
		int getTahunTerbit(){
			return tahunterbit;
		}
		string getPenulis(){
			return penulis;
		}
		string getIdPenulis(){
			return idpenulis;
		}
		
		void tampil(string golongan){
		cout << "Nama Buku		: "<<namabuku<<endl;
		cout << "Tahun Terbit Buku 	: "<<tahunterbit<<endl;
		cout << "Penulis			: "<<penulis<<endl;
		cout << "Golongan		: "<<golongan<<endl<<endl;
		
		}
};

int main(){	
		//tek
		perpustakaanx *bukutek1 = new perpustakaanx();
		bukutek1->setNamaBuku("Buku 1 teknologi");
		bukutek1->setTahunTerbit(2013);
		bukutek1->setPenulis("1.Bisma Mahendra");
		
		perpustakaanx *bukutek2 = new perpustakaanx();
		bukutek2->setNamaBuku("Buku 2 teknologi");
		bukutek2->setTahunTerbit(2014);
		bukutek2->setPenulis("1.Bisma Mahendra\n\t\t\t  2. Sulton Arif");
		
		//filsafat
		perpustakaanx *bukufil1 = new perpustakaanx();
		bukufil1->setNamaBuku("Buku 1 Filsafat");
		bukufil1->setTahunTerbit(2015);
		bukufil1->setPenulis("Kevin Pratama");
		
		perpustakaanx *bukufil2 = new perpustakaanx();
		bukufil2->setNamaBuku("Buku 2 Filsafat");
		bukufil2->setTahunTerbit(2014);
		bukufil2->setPenulis("Abdullah");
		
		//sejarah
		perpustakaanx *bukusej1 = new perpustakaanx();
		bukusej1->setNamaBuku("Buku 1 Sejarah");
		bukusej1->setTahunTerbit(2011);
		bukusej1->setPenulis("Imad Muzafar");
		
		perpustakaanx *bukusej2 = new perpustakaanx();
		bukusej2->setNamaBuku("Buku 2 Sejarah");
		bukusej2->setTahunTerbit(2013);
		bukusej2->setPenulis("Ammar W");
				
	int pilih,pilihkategoribuku;
	cout<<" -Perpustakaan X- \n";

		cout<<"1. Teknologi\n"
			<<"2. Filsafat\n"
			<<"3. Sejarah\n"
			<<"4. Agama\n"
			<<"5. Psikologi\n"
			<<"6. Politik\n"
			<<"7. Fiksi\n"
		;
		
		cout<<"Silakan Pilih Kategori : ";
		cin>>pilihkategoribuku;
			if(pilihkategoribuku==1){ //--teknologi
				string kategori = "Teknologi";
				cout<<" -"<<kategori<<"- \n" ;
				//Tambah Buku 
				bukutek1->setGolongan(kategori);
				bukutek2->setGolongan(kategori);
				bukutek1->tampil(kategori);
				bukutek2->tampil(kategori);
				
			}
			//bisma
			if(pilihkategoribuku==2){//--filsafat
				string kategori = "Filsafat";
				cout<<" -"<<kategori<<"- \n" ;
				//Tambah Buku 
				bukufil1->setGolongan(kategori);
				bukufil2->setGolongan(kategori);
				bukufil1->tampil(kategori);
				bukufil2->tampil(kategori);
			}
			if(pilihkategoribuku==3){//--filsafat
				string kategori = "Sejarah";
				cout<<" -"<<kategori<<"- \n" ;
				//Tambah Buku 
				bukusej1->setGolongan(kategori);
				bukusej2->setGolongan(kategori);
				bukusej1->tampil(kategori);
				bukusej2->tampil(kategori);
			}
		
	
}


