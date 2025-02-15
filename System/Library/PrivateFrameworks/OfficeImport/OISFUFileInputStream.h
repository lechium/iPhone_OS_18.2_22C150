//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OISFUFileInputStream : NSObject
{
    int mFd;	// 8 = 0x8
    _Bool mIsCachingDisabled;	// 12 = 0xc
    long long mStartOffset;	// 16 = 0x10
    long long mCurrentOffset;	// 24 = 0x18
    long long mEndOffset;	// 32 = 0x20
}

- (id)closeLocalStream;	// IMP=0x000000000028f151
- (void)close;	// IMP=0x000000000028f061
- (void)enableSystemCaching;	// IMP=0x000000000028f00e
- (void)disableSystemCaching;	// IMP=0x000000000028efb8
- (void)seekToOffset:(long long)arg1;	// IMP=0x000000000028ee6e
- (_Bool)canSeek;	// IMP=0x000000000028ee66
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000028ed28
- (long long)offset;	// IMP=0x000000000028ed1a
- (void)dealloc;	// IMP=0x000000000028ecdc
- (id)initWithPath:(id)arg1 offset:(long long)arg2;	// IMP=0x000000000028ec29
- (id)initWithPath:(id)arg1 offset:(long long)arg2 length:(long long)arg3;	// IMP=0x000000000028eb5b
- (id)initWithFileDescriptor:(int)arg1 offset:(long long)arg2 length:(long long)arg3;	// IMP=0x000000000028eaa5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

