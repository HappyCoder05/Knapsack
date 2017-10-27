//Knapsack crypto system with an example 
//implementation in progress
//Sergio Vela

#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <string>
#include <cerrno>
#include <fstream>
#include <cmath>
#include <cstdlib>
using namespace std;

string retrieve_cipher(string publickey, string data);
public int solve(int n, int m);
public string getknapsack(string key, string n, string m);


int main()
{

	ifstream f;
	vector<int> E;
	f.open("messages.txt", ios::in);
	assert(f.is_open());
	string line, delimiter = ",", word;
	int numb, mod, multiplier;
	cout<<"enter the mod: \n\n";
	cin>> mod;
	cout<<"enter the multiplier";
	cin>>multiplier;
	int mod = 
	while (getline(f, line))
	{

		word = line.substr(0, line.find(delimiter));
		line.erase(0, line.find(delimiter) + delimiter.length());
		numb = stoi(word);
		E.push_back(numb);
	}
	f.close();
	vector<int>  results;
	int long ans;
	for (int i = 0; i < E.size(); i++)
	{
		ans = E[i] * 1721;
		ans = ans % mod;
		results.push_back(ans);
	}
	for (int i = 0; i < results.size(); i++)
	{
		cout << results[i] << endl;
	}
	vector<string> bitstrings;
	int long A[11] = {1,3,7,14,32,64,128,262,513,1036,2077};
	for (int i = 0; i < results.size(); i++)
	{
			string bitstring = "00000000000";
			for (int a = 10; a >=0 ; a--)
			{
				
				if (A[a] <= results[i])
				{
					cout << "THIS IS A " << A[a] << "   this is results  " << results[i] << endl;
					results[i] = results[i] - A[a];
					bitstring[a] = '1';

				}
			}
			bitstrings.push_back(bitstring);
	}
	vector<int> stringsasdecimals;
	int first = 1;
	for (int i = 0; i < bitstrings.size(); i++)
		cout << bitstrings[i] << endl;
	ifstream f1;

	f1.open("bits.txt", ios::in);
	assert(f1.is_open());
	delimiter = " ";
	int long as;
	while (getline(f1, line))
	{
		word = line.substr(0, line.find(delimiter));
		as = stoi(word,nullptr, 2);
		stringsasdecimals.push_back(as+1);
	}
	for (int i = 0; i < stringsasdecimals.size(); i++)
		cout << "this is the value: " << stringsasdecimals[i] << endl;


string retrieve_public_key=getknapsack(priv, n,m);
      string ci = retrieve_cipher(etrieve_public_key,data);
      int solution = solve(Convert.ToInt32(n), Convert.ToInt32(mod));
      string plain = getknapsack(ci, Convert.ToString(solution), mod);
		
}


//some functions previously implemented by asecuritysite.com
        public string retrieve_cipher(string publickey, string data)
        {
            string data_result = "";
            string[] vals = publickey.Split(',');
            int[] weights = new int[vals.Length];
            for (int i=0;i<vals.Length;i++) weights[i]=Convert.ToInt32(vals[i]);
            int ptr = 0;
            int bit=0;
            int total = 0;
            do
            {
                total = 0;
                for (int i = 0; i < 6; i++)
                {
                    if (data[ptr] == '1') bit = 1;
                    else bit = 0;
                    total += weights[i] * bit;
                    ptr++;
                }
                if (data_result == "") data_result += total.ToString();
                else data_result += "," + total.ToString();

            } while (ptr < data.Length);

        
            return (data_result);

        }
        public int solve(int n, int m)
        {
            int res = 0;
            for (int i = 0; i < 5000; i++)
            {
                if (((n*i)%m)==1) return (i);
            }
            return (res);
        }
        public string getknapsack(string key, string n, string m)
        {
            string[] vals = key.Split(',');
            string k = "";
            foreach (string v in vals)
            {
                int i = (Convert.ToInt32(v) * Convert.ToInt32(n)) % Convert.ToInt32(m); 
                if (k == "") k +=i.ToString();
                else k+=","+i.ToString();

            }
            return (k);

        }