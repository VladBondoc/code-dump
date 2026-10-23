#include <bits/stdc++.h>
using namespace std;

struct fast_in {
    using ll = long long;

    FILE *f;
    fast_in(const char *name) { f = fopen(name, "r"); }
    fast_in(FILE *f = stdin) : f(f) {}
    ~fast_in() {fclose(f);}

    static const int maxbuf = 1'000'000;
    int ptr = maxbuf;
    char buf[maxbuf];

    char get_char() {
        if(ptr == maxbuf)
            fread(buf, 1, sizeof(buf), f), ptr = 0;
        return buf[ptr ++];
    }

    ll get_ll() {
        char crt = get_char();
        while(crt != '-' && (crt < '0' || '9' < crt)) crt = get_char();
        ll ans = 0, sign = 1;
        if(crt == '-') sign = -1, crt = get_char();
        while('0' <= crt && crt <= '9')
            ans = ans * 10 + crt - '0', crt = get_char();
        return sign * ans;
    }

    void operator>>(char &c) {
        c = get_char();
    }

    void operator>>(int &v) {
        v = get_ll();
    }

    void operator>>(ll &v) {
        v = get_ll();
    }
};
