#include <iostream>
#include <fstream>

int main() {
    // Open a file named index.html for writing
    std::ofstream outfile("index.html");

    // Write HTML content to the file
    outfile << "<!DOCTYPE html>\n";
    outfile << "<html lang=\"en\">\n";
    outfile << "<head>\n";
    outfile << "    <meta charset=\"UTF-8\">\n";
    outfile << "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
    outfile << "    <title>UniHaven - Your Haven Away from Home</title>\n";
    outfile << "    <style>\n";
    outfile << "        body {\n";
    outfile << "            font-family: Arial, sans-serif;\n";
    outfile << "            margin: 0;\n";
    outfile << "            padding: 0;\n";
    outfile << "            background-color: #f5f5f5;\n";
    outfile << "        }\n";
    outfile << "        header {\n";
    outfile << "            background-color: #FFA500;\n";
    outfile << "            padding: 20px 0;\n";
    outfile << "            text-align: center;\n";
    outfile << "        }\n";
    outfile << "        h1 {\n";
    outfile << "            color: #fff;\n";
    outfile << "        }\n";
    outfile << "        .container {\n";
    outfile << "            max-width: 800px;\n";
    outfile << "            margin: 20px auto;\n";
    outfile << "            padding: 0 20px;\n";
    outfile << "        }\n";
    outfile << "        p {\n";
    outfile << "            font-size: 18px;\n";
    outfile << "            line-height: 1.6;\n";
    outfile << "            color: #333;\n";
    outfile << "        }\n";
    outfile << "        .cta {\n";
    outfile << "            background-color: #FFA500;\n";
    outfile << "            color: #fff;\n";
    outfile << "            padding: 10px 20px;\n";
    outfile << "            text-decoration: none;\n";
    outfile << "            border-radius: 5px;\n";
    outfile << "        }\n";
    outfile << "    </style>\n";
    outfile << "</head>\n";
    outfile << "<body>\n";
    outfile << "    <header>\n";
    outfile << "        <h1>Welcome to UniHaven</h1>\n";
    outfile << "    </header>\n";
    outfile << "    <div class=\"container\">\n";
    outfile << "        <p>UniHaven is a company where students or working professionals can rent a flat or hostel. Additionally, people can register themselves and post flats/hostels to earn. There's also an option to register offline flats/hostels and earn a commission.</p>\n";
    outfile << "        <p>Find your home away from home with UniHaven!</p>\n";
    outfile << "        <a href=\"#\" class=\"cta\">Register Now</a>\n";
    outfile << "    </div>\n";
    outfile << "</body>\n";
    outfile << "</html>\n";

    // Close the file
    outfile.close();

    std::cout << "Webpage created successfully!\n";

    return 0;
}
