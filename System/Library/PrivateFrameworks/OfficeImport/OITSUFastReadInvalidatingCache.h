//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCondition;

__attribute__((visibility("hidden")))
@interface OITSUFastReadInvalidatingCache : NSObject
{
    CDUnknownBlockType mGenerator;	// 8 = 0x8
    _Atomic id mValue;	// 16 = 0x10
    _Atomic long long mReaderCount;	// 24 = 0x18
    _Atomic id mToDispose;	// 32 = 0x20
    _Bool mReentrant;	// 40 = 0x28
    NSCondition *mCondition;	// 48 = 0x30
    _Bool mIsGenerating;	// 56 = 0x38
}

- (void)invalidate;	// IMP=0x00000000002859bf
- (id)value;	// IMP=0x0000000000285813
- (void)p_setValue:(id)arg1;	// IMP=0x0000000000285741
- (void)dealloc;	// IMP=0x00000000002856e2
- (id)initForReentrant:(_Bool)arg1 withGenerator:(CDUnknownBlockType)arg2;	// IMP=0x0000000000285662

@end

