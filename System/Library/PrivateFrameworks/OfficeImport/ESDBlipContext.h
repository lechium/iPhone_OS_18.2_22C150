//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ESDBlipContext : NSObject
{
    struct SsrwOOStream *mStream;	// 8 = 0x8
    unsigned int mStreamID;	// 16 = 0x10
    unsigned int mStartOffset;	// 20 = 0x14
    unsigned int mByteCount;	// 24 = 0x18
}

@property(readonly, copy) NSString *description;
- (id)dataRep;	// IMP=0x000000000032a9c7
- (struct SsrwOOStream *)stream;	// IMP=0x000000000032a9bd
- (_Bool)loadDelayedNode:(id)arg1;	// IMP=0x00000000000b1639
- (_Bool)saveDelayedMedia:(id)arg1 toFile:(id)arg2;	// IMP=0x000000000032a9b5
- (id)initWithOffset:(unsigned int)arg1 byteCount:(unsigned int)arg2 stream:(struct SsrwOOStream *)arg3 streamID:(unsigned int)arg4;	// IMP=0x000000000001d820

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

