//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSKeyValueObservance, NSKeyValueObservationInfo, NSKeyValueProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueShareableObservationInfoKey : NSObject
{
    _Bool _addingNotRemoving;	// 8 = 0x8
    NSKeyValueObservationInfo *_baseObservationInfo;	// 16 = 0x10
    NSObject *_additionObserver;	// 24 = 0x18
    NSKeyValueProperty *_additionProperty;	// 32 = 0x20
    unsigned long long _additionOptions;	// 40 = 0x28
    void *_additionContext;	// 48 = 0x30
    NSObject *_additionOriginalObservable;	// 56 = 0x38
    NSKeyValueObservance *_removalObservance;	// 64 = 0x40
    unsigned long long _removalObservanceIndex;	// 72 = 0x48
    unsigned long long _cachedHash;	// 80 = 0x50
}

@end

