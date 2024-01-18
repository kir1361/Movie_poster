#pragma once

using namespace System;
using namespace System::Windows::Forms;

ref class Film abstract {

protected:

    String^ filmName;
    String^ category;
    String^ age;
    String^ rating;

public:

    Film() : filmName(nullptr), category(nullptr), age(nullptr), rating(nullptr) {}


    Film(String^ Name, String^ cat, String^ Age, String^ Rating) : filmName(Name), category(cat), age(Age), rating(Rating) {};


    virtual String^ displayFilmInfo() override abstract;

    Film(const Film^ other) : filmName(other->filmName), category(other->category), age(other->age), rating(other->rating) {};

    ~Film() {};

};


ref class Bio : public Laba5::Film {

public:

    Bio(String^ Name, String^ cat, String^ Age, String^ Rating) : Film(Name, "Biography", Age, Rating) {}

    virtual String^ displayFilmInfo() override {

        String^ filmInfo = "Film name: " + filmName + "\tCategory: Biography" + "\tAge: " + age + "\tRating: " + rating + "\n";

        return filmInfo;
    }

    // constructor

    Bio(const Bio^ other) : Laba5::Film(other) {};

};


ref class Doc : public Laba5::Film {

public:

    Doc(String^ name, String^ cat, String^ Age, String^ Rating) : Film(name, "Documentary", Age, Rating) {}


    virtual String^ displayFilmInfo() override {

        String^ filmInfo = "Film name: " + filmName + "\tCategory: Documentary" + "\tAge: " + age + "\tRating: " + rating + "\n";

        return filmInfo + "\n";
            
    }

    // copy

    Doc(const Doc^ other) : Film(other) {};

};


ref class Children : public Laba5::Film {

public:

    Children(String^ name, String^ cat, String^ Age, String^ Rating) : Film(name, "Children", Age, Rating) {}

    virtual String^ displayFilmInfo() override {

        String^ filmInfo = "Film name: " + filmName + "\tCategory: For children" + "\tAge: " + age + "\tRating: " + rating + "\n";

        return filmInfo;
    }


    // copy

    Children(const Children^ other) : Film(other) {};

};


ref class Scientific : public Laba5::Film {

public:

    Scientific(String^ name, String^ cat, String^ Age, String^ Rating) : Film(name, "Scientific", Age, Rating) {}

    virtual String^ displayFilmInfo() override {

        String^ filmInfo = "Film name: " + filmName + "\tCategory: Scientific" + "\tAge: " + age + "\tRating: " + rating + "\n";

        return filmInfo;
    }


    // copy

    Scientific(const Scientific^ other) : Film(other) {};

};


ref class Cartoon : public Laba5::Film {

public:

    Cartoon(String^ name, String^ cat, String^ Age, String^ Rating) : Film(name, "Cartoon", Age, Rating) {}

    virtual String^ displayFilmInfo() override {

        String^ filmInfo = "Film name: " + filmName + "\tCategory:Cartoon" + "                                 Age: " + age + "\tRating : " + rating + "\n";
        return filmInfo;
    }


    // copy A to B

    Cartoon(const Cartoon^ other) : Film(other) {};

};


ref class FilmContainer {

    ref struct Films {

        Laba5::Film^ item;
        Films^ next;

    };


private:

    Films^ first;
    TextBox^ tBox;

public:

    FilmContainer(TextBox^ other) {

        tBox = other;
        first = nullptr;

    }

    void Add(Laba5::Film^ other) {

        Films^ temp = gcnew Films;
        temp->item = other;
        temp->next = first;
        first = temp;


    }

    void Output() {

        Films^ temp = first;
        tBox->Text = "";
        while (temp != nullptr) {

            tBox->Text += temp->item->displayFilmInfo() + "\r\n";
            temp = temp->next;
        }

    }

    void Clear() {

        Films^ temp = first;
        while (first != nullptr) {

            first = temp->next;
            delete temp;
            temp = first;

        }

    }
    ~FilmContainer()
    {
        Clear();
    }

};