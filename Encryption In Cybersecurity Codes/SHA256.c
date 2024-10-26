#include <stdio.h>
#include <openssl/sha.h>

void generate_sha256(const char *str, unsigned char output[SHA256_DIGEST_LENGTH]) {
    SHA256((unsigned char*)str, strlen(str), output);
}

int main() {
    const char *text = "Entered Text will be hashed to SHA-256";
    unsigned char hash[SHA256_DIGEST_LENGTH];
    
    generate_sha256(text, hash);

    for(int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        printf("%02x", hash[i]);
    }
    printf("\n");
    return 0;
}
