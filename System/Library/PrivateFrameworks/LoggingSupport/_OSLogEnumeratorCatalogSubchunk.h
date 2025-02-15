//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, _OSLogEnumeratorCatalog;

__attribute__((visibility("hidden")))
@interface _OSLogEnumeratorCatalogSubchunk : NSObject
{
    NSMutableDictionary *_decompressedChunks;	// 8 = 0x8
    struct catalog_subchunk_s *_subchunk;	// 16 = 0x10
    struct _NSRange _range;	// 24 = 0x18
    _OSLogEnumeratorCatalog *_catalog;	// 40 = 0x28
    unsigned long long _ot;	// 48 = 0x30
    unsigned long long _et;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000191ae
@property(readonly, nonatomic) unsigned long long endTime; // @synthesize endTime=_et;
@property(readonly, nonatomic) unsigned long long oldestTime; // @synthesize oldestTime=_ot;
@property(readonly, nonatomic) _OSLogEnumeratorCatalog *catalog; // @synthesize catalog=_catalog;
- (void)enumerateChunksUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000190d5
- (id)_decompressedBufferForChunk:(struct tracev3_chunk_s *)arg1 subchunk:(struct catalog_subchunk_s *)arg2;	// IMP=0x000000000001900d
- (long long)endTimeCompare:(id)arg1;	// IMP=0x0000000000018fec
- (long long)oldestTimeCompare:(id)arg1;	// IMP=0x0000000000018fcb
- (id)initWithCatalog:(id)arg1 subchunk:(struct catalog_subchunk_s *)arg2 range:(struct _NSRange)arg3 oldestTime:(unsigned long long)arg4 endTime:(unsigned long long)arg5;	// IMP=0x0000000000018fa3
- (id)initWithCatalog:(id)arg1 subchunk:(struct catalog_subchunk_s *)arg2 range:(struct _NSRange)arg3;	// IMP=0x0000000000018ec1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

