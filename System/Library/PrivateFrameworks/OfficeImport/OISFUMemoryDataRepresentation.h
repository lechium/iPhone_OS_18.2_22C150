//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface OISFUMemoryDataRepresentation
{
    NSData *mData;	// 32 = 0x20
}

- (unsigned long long)readIntoData:(id)arg1;	// IMP=0x00000000002900a4
- (_Bool)hasSameLocationAs:(id)arg1;	// IMP=0x0000000000290042
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;	// IMP=0x0000000000290030
- (id)bufferedInputStream;	// IMP=0x000000000028fff2
- (id)inputStream;	// IMP=0x000000000028ffe0
- (long long)dataLength;	// IMP=0x000000000028ffc3
- (_Bool)isReadable;	// IMP=0x000000000028ffbb
- (id)data;	// IMP=0x000000000028ffaa
- (void)dealloc;	// IMP=0x000000000028ff68
- (id)initWithDataRepresentation:(id)arg1;	// IMP=0x000000000028fd8d
- (id)initWithDataNoCopy:(id)arg1;	// IMP=0x000000000028fd36
- (id)initWithData:(id)arg1;	// IMP=0x000000000028fcd8

@end
