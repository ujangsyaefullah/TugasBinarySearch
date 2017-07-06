/*		ALGORITMA PENCARIAN BAGI DUA
 *		Algoritma & Pemrograman 2
 *		UJANG SAEPULLOH (NIM. 16.111.270)
 *		TIF RM 16 C
 */

#include<iostream>

using namespace std;

int main () {
int n, angka[12], kiri, kanan, tengah, temp, key;
bool ketemu = false;
cout << endl;
cout << "======= ALGORITMA PENCARIAN =======" << endl;
cout << "-----------------------------------" << endl << endl;
cout << "Masukan jumlah data           : ";
cin >> n ;
cout << endl;
cout << "-----------------------------------" << endl << endl;

	for(int i=0; i<n; i++)
		{
		cout<<"Angka ke - ["<<i<<"] : ";
		cin>>angka[i];
	}
	
	for (int i=0; i<n; i++)
	{
		for(int j=0; j< n-i-1; j++)
		{
			if(angka [j] > angka [j+1])
				{
				temp=angka[j];
				angka[j]=angka[j+1];
				angka[j+1]=temp;
			}
		}
	}

cout << endl;
cout << "-----------------------------------" << endl << endl;
cout<<"Data yang telah diurutkan adalah : " << endl;
for(int i=0; i<n; i++)
	{
	cout<<angka[i]<<" ";
	}
cout << endl << endl;
cout << "-----------------------------------" << endl << endl;
cout << "Masukan angka yang dicari      : ";
cin >> key;
cout << endl;
cout << "-----------------------------------" << endl << endl; 
kiri=0;
kanan=n-1;
 
while(kiri<=kanan)
	{
	tengah=(kiri + kanan)/2;
	if(key == angka[tengah])
		{
		ketemu=true;
		break;
		}
	else if (key < angka [tengah])
		{
		kanan = tengah -1;
		}
	else
		{
		kiri = tengah +1;
		}
	}
if (ketemu == true)
	cout<<"Angka ditemukan!";
else 
	cout<<"Angka tidak ditemukan";
return 0;
}