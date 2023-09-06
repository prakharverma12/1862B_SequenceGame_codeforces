#include <iostream>
#include <vector>

void generate_vec(std::vector<int> v, int n);
void input();


int main()
{
    int t,n;
    std::cin>>t;

    while(t--)
    {
        input();
    }

    return 0;
}
void generate_vec(std::vector<int> v, int n)
{
    std::vector<int> o;
    o.clear();
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            o.push_back(v[i]);
        }
        else
        {
            if(v[i-1]<=v[i])
            {
                o.push_back(v[i]);
            }
            else
            {
                if(v[i]>1)
                {
                    o.push_back(v[i]-1);
                }
                else{
                    o.push_back(1);
                }
                o.push_back(v[i]);
            }
        }
    }
    std::cout<<o.size()<<std::endl;
    for(int i:o)
    {
        std::cout<<i<<" "<<std::flush;
    }
    std::cout<<""<<std::endl;
    
}

void input()
{
    int n;
    std::cin>>n;
    std::vector<int> v;
    v.clear();
    for(int i=0; i<n; i++)
    {
        int temp;
        std::cin>>temp;
        v.push_back(temp);
    }
    generate_vec(v,n);
    
}