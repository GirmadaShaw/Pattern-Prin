#include <iostream> //my name

int main() {
  int n = 5;

  // 1st pattern
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++)
      std ::cout << "*";
    std ::cout << std ::endl;
  }

  std ::cout << "\n";

  // 2nd pattern
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++)
      std ::cout << "*";
    std ::cout << std ::endl;
  }

  std ::cout << "\n";

  // 3rd pattern
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i + j >= n - 1)
        std ::cout << "*";
      else
        std ::cout << " ";
    }
    std ::cout << std ::endl;
  }

  std ::cout << "\n";

  // 4th pattern
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i <= j)
        std ::cout << "*";
      else
        std ::cout << " ";
    }
    std ::cout << "\n";
  }

  std ::cout << "\n";

  // 5th pattern
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 4 || j == 0 || i == j)
        std ::cout << "*";
      else
        std ::cout << " ";
    }
    std ::cout << "\n";
  }

  std ::cout << "\n";

  // 6th pattern
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 4 || j == 4 || i + j == 4)
        std ::cout << "*";
      else
        std ::cout << " ";
    }
    std ::cout << "\n";
  }

  std ::cout << "\n";

  // 7th pattern
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 || j == 4 || i == j)
        std ::cout << "*";
      else
        std ::cout << " ";
    }
    std ::cout << "\n";
  }

  std ::cout << "\n";

  // 8th pattern
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 || j == 0 || i + j == 4)
        std ::cout << "*";
      else
        std ::cout << " ";
    }
    std ::cout << "\n";
  }

  std ::cout << "\n";

  // 9th pattern
  n = 8;
  int p = (n / 2) + 1, q = (n / 2) - 1;
  for (int i = 0; i < n; i++) {
    if (i <= n / 2) {
      p--;
      q++;
    } else {
      p++;
      q--;
    }
    for (int j = 0; j < n; j++) {
      if (j <= q && j >= p) {
        if ((i % 2 == 0 && j % 2 != 0) || (i % 2 != 0 && j % 2 == 0))
          std ::cout << "*";
        else
          std ::cout << " ";
      } else
        std ::cout << " ";
    }

    std ::cout << "\n";
  }
  std ::cout << "\n";

  // 10th pattern
  n = 9;
  p = (n / 2) + 1, q = (n / 2) - 1;
  for (int i = 0; i < n; i++) {
    if (i <= n / 2) {
      p--;
      q++;
    } else {
      p++;
      q--;
    }
    for (int j = 0; j < n; j++) {
      if (j <= q && j >= p) {
        if (j == p || j == q)
          std ::cout << "*";
        else
          std ::cout << " ";
      } else
        std ::cout << " ";
    }

    std ::cout << "\n";
  }

  std :: cout << "\n" ;

// 11th Pattern 
int k = 1 ;n = 5 ;
for( int i = 0 ; i <  n-1 ; i ++ )
  {
  for ( int j = 0 ; j < 2 * i + 1 ; j++ )
    {
    if ( j & 1 )
      std :: cout << "*" ;
      else
      std :: cout << k++ ;
    } 
    std :: cout << "\n" ;
  }
k = 7 ;
for ( int i = 3 ; i >= 0 ; i -- )
  {
    for( int j = 0 ; j < 2*i + 1  ; j ++)  
      {
      if ( j & 1 )
        std :: cout << "*" ;
      else
        std :: cout << k++ ;
      }
    k = k - 2*i - 1  ; 
    std :: cout << "\n" ;
  }
}

//heloo I am samridh
