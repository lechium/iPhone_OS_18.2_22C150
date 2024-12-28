//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDStructuredWriter;

__attribute__((visibility("hidden")))
@interface HMDExtendedTypeWriter
{
    HMDStructuredWriter *_writer;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003e9b86
- (void)writeUUID:(id)arg1;	// IMP=0x00000000003e9a91
- (void)writeDate:(id)arg1;	// IMP=0x00000000003e997e
- (void)writeData:(id)arg1;	// IMP=0x00000000003e9887
- (void)writeNumber:(id)arg1;	// IMP=0x00000000003e986a
- (void)writeString:(id)arg1;	// IMP=0x00000000003e984d
- (void)writeBoolean:(_Bool)arg1;	// IMP=0x00000000003e9830
- (void)writeNull;	// IMP=0x00000000003e97bd
- (void)endDictionary;	// IMP=0x00000000003e97a0
- (void)writeDictionaryKey:(id)arg1;	// IMP=0x00000000003e9783
- (void)beginDictionaryOfSize:(unsigned long long)arg1;	// IMP=0x00000000003e9766
- (void)endArray;	// IMP=0x00000000003e9749
- (void)beginArrayOfSize:(unsigned long long)arg1;	// IMP=0x00000000003e972c
- (void)failWithError:(id)arg1;	// IMP=0x00000000003e970f
- (id)error;	// IMP=0x00000000003e96f2
- (id)initWithWriter:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000003e9672

@end
