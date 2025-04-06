#include <iostream>
using namespace std;


int main()
{
    int liczba_w;
    int number_of_edges;

    //data input (1/2)
    cout << "Podaj liczbe wierzcholkow: ";
    cin >> liczba_w;
    cout << "\nPodaj liczbe krawedzi: ";
    cin >> number_of_edges;

    //creating  adjacency_matrix
    int** adjacency_matrix = new int*[liczba_w];
    for (int i = 0; i < liczba_w; i++)
    {
        adjacency_matrix[i] =  new int [liczba_w];
    }

    for (int i = 0; i < liczba_w; i++)
    {
        for (int j = 0; j < liczba_w; j++)
        {
            adjacency_matrix[i][j] = 0;
        }
    }

    //data input (2/2)
    int temp_a;
    int temp_b;
    for (int i = 0; i < number_of_edges; i++)
    {
        cout << "\n" << i + 1 << " krawedz: ";
        cout << "\nwierzcholek, ktory jest poczatkiem krawedzi(liczone od 0): ";
        cin >> temp_a;
        cout << "\nwierzcholek, ktory jest koncem krawedzi(liczone od 0): ";
        cin >> temp_b;

        adjacency_matrix[temp_a][temp_b] = 1;

    }
    cout << "    ";
    for (int i = 0; i < liczba_w; i++)
    {
        i > 9 ? cout << " " << i : cout << "  " << i;
    }

    //printing results
    cout << "\n";
    cout << "---------------------------------------------------------";
    cout << "\n";


    for (int i = 0; i < liczba_w; i++)
    {
        i > 9 ? cout << i << " |" : cout << i << "  |";

        for (int j = 0; j < liczba_w; j++)
        {
            cout << "  ";
            cout << adjacency_matrix[i][j];
        }
        cout << "\n";
    }

    return 0;
}
