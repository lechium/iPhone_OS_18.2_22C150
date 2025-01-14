//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EMWorkbookMapper;

__attribute__((visibility("hidden")))
@interface EMTop
{
}

+ (_Bool)supportsProgressiveMapping;	// IMP=0x00100000004693c6
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;	// IMP=0x00000000004693ce
- (void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(_Bool)arg6;	// IMP=0x00000000004692d7
- (void)initializeClasses;	// IMP=0x000000000046925e
- (Class)mapperClassForIndexing:(_Bool)arg1;	// IMP=0x000000000046922d
- (Class)stateClass;	// IMP=0x000000000046921c
- (Class)readerClassForXMLDocuments;	// IMP=0x000000000046920b
- (Class)readerClassForBinaryDocuments;	// IMP=0x00000000004691fa

// Remaining properties
@property(readonly) EMWorkbookMapper *mapper; // @dynamic mapper;

@end

