//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UniqueAnimationKeyCounter : NSObject
{
    unsigned long long _nextAnimationKey;	// 8 = 0x8
    unsigned long long _finishedUsingKeys;	// 16 = 0x10
}

@property(readonly, nonatomic, getter=isFinishedUsingAllKeys) _Bool finishedUsingAllKeys;
- (void)didFinishUsingAnimationKey;	// IMP=0x00000000000c562a
- (unsigned long long)nextAnimationKey;	// IMP=0x00000000000c5618

@end

