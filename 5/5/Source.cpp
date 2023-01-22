#include <iostream>
#include <vector>
#include <iterator>

int main()
{
        int n{};
        std::cin >> n;

        if (n > 3 && (!(n % 3) || !((n + 1) % 3)))
        {
            std::vector<int> a{ n - 1 }, b{ n - 2 }, c{ n };
            int i = n - 3;

            for (; i > 3;)
            {
                a.push_back(i--);
                b.push_back(i--);
                c.push_back(i--);

                std::swap(a, c);
            }

            b.push_back(i--);
            a.push_back(i--);
            if (i)
                c.push_back(1);
            std::cout << a.size() << '\n';
            std::copy(std::begin(a), std::end(a), std::ostream_iterator<int>(std::cout, " "));
            std::cout << '\n';
            std::cout << '\n' << b.size() << '\n';
            std::copy(std::begin(b), std::end(b), std::ostream_iterator<int>(std::cout, " "));
            std::cout << '\n';
            std::cout << '\n' << c.size() << '\n';
            std::copy(std::begin(c), std::end(c), std::ostream_iterator<int>(std::cout, " "));
            std::cout << '\n';
        }
        else
        {
            std::cout << -1;
        }

	return 0;
}