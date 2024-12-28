//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface MFBitmap : NSObject
{
    int m_width;	// 8 = 0x8
    int m_height;	// 12 = 0xc
    unsigned int m_bitsPerPixel;	// 16 = 0x10
    int m_compression;	// 20 = 0x14
    _Bool m_isOS2;	// 24 = 0x18
    unsigned int m_infoHeaderSize;	// 28 = 0x1c
    unsigned int m_paletteSize;	// 32 = 0x20
    NSMutableData *m_bmpData;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000035e395
- (unsigned long long)pixelDataLength;	// IMP=0x000000000035e37a
- (_Bool)isEmpty;	// IMP=0x000000000015539e
- (void)setMonoPalette:(id)arg1;	// IMP=0x000000000015543c
- (_Bool)isFlipped;	// IMP=0x000000000035e35d
- (const char *)pixelData;	// IMP=0x000000000035e340
- (id)initWithBitmap:(id)arg1 in_width:(int)arg2 in_height:(int)arg3 in_planes:(int)arg4 in_bitsPerPixel:(int)arg5 in_bitmap:(const char *)arg6 in_bitmapSize:(unsigned int)arg7;	// IMP=0x000000000035deec
- (id)initWithDIBitmap:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_bitmap:(const char *)arg4 in_bitmapSize:(unsigned int)arg5 in_usage:(int)arg6;	// IMP=0x000000000035ddcc
- (id)initWithDIBitmap:(id)arg1 in_dib:(const char *)arg2 in_dibSize:(unsigned int)arg3 in_usage:(int)arg4;	// IMP=0x000000000035dc91
- (id)init;	// IMP=0x000000000035dc28
- (_Bool)processDIBHeader:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_usage:(int)arg4;	// IMP=0x000000000035da93
- (void)appendDIBPalette:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_usage:(int)arg4;	// IMP=0x000000000035d870
- (unsigned int)pixelDataOffset:(const char *)arg1 in_headerSize:(unsigned int)arg2 in_usage:(int)arg3;	// IMP=0x000000000035d83d
- (unsigned int)coloursUsed:(const char *)arg1 in_headerSize:(unsigned int)arg2 in_usage:(int)arg3;	// IMP=0x000000000035d819
- (void)setNull;	// IMP=0x00000000001559de
- (void)writeInfoHeader;	// IMP=0x000000000035d747
- (void)writeFileHeader;	// IMP=0x00000000001553ac
- (void)writePaletteEntry:(id)arg1 in_index:(int)arg2;	// IMP=0x000000000035d682
- (_Bool)parseHeader:(const char *)arg1 in_headerSize:(unsigned int)arg2;	// IMP=0x000000000035d62a

@end
