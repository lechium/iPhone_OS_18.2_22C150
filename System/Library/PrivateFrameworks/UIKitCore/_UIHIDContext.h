//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIHIDPathCollection, _UIHIDScaleEventTracker;

__attribute__((visibility("hidden")))
@interface _UIHIDContext : NSObject
{
    _UIHIDPathCollection *pathCollection;	// 8 = 0x8
    _UIHIDScaleEventTracker *scaleEventTracker;	// 16 = 0x10
    unsigned long long state;	// 24 = 0x18
    unsigned long long remoteTimestamp;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000013d2671

@end
