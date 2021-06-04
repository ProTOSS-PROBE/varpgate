using Newtonsoft.Json.Linq;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void Button1_Click(object sender, EventArgs e)
        {

            string city = textBox1.Text;
            string url = "http://api.openweathermap.org/data/2.5/weather?q=" + city + "&type=like&APPID=d1784dd91c301776552a8f710432f4df";

            System.Net.WebRequest reqGET = System.Net.WebRequest.Create(url);
            System.Net.WebResponse resp = reqGET.GetResponse();
            System.IO.Stream stream = resp.GetResponseStream();
            System.IO.StreamReader sr = new System.IO.StreamReader(stream);
            string s = sr.ReadToEnd();
            JObject o = JObject.Parse(s);

            JToken a = o["main"]["temp"];
            String str = a.ToString();
            double temp = double.Parse(str) - 273.15;
            int temp1 = (int)temp;
            str = temp1.ToString();
            label1.Text = "Temperature: " + str + " 'C";

            JToken b = o["main"]["humidity"];
            label2.Text = "Humidity: " + (string)b + " %";

            JToken c = o["main"]["pressure"];
            label3.Text = "Pressure: " + (string)c +" hPa";

            JToken d = o["wind"]["speed"];
            JToken f = o["wind"]["deg"];
            String str1 = f.ToString();
            int deg = int.Parse(str1);
            if (deg <= 10 || deg >= 350) 
                    {
                str1 = "N";
            }
            else if (11 <= deg && deg <= 79)
            {
                str1 = "N-E";
            }
            else if (80 <= deg && deg <= 100)
            {
                str1 = "E";
            }
            else if (101 <= deg && deg <= 169)
            {
                str1 = "S-E";
            }
            else if (170 <= deg && deg <= 190)
            {
                str1 = "S";
            }
            else if (191 <= deg && deg <= 259)
            {
                str1 = "S-W";
            }
            else if (260 <= deg && deg <= 280)
            {
                str1 = "W";
            }
            else if (281 <= deg && deg <= 349)
            {
                str1 = "N-W";
            }
            label4.Text = "Wind: " + (string)d + " m/s " + str1;
        }

        private void Label1_Click(object sender, EventArgs e)
        {
            label1.Text = "Temperature:";
        }
    }
}
