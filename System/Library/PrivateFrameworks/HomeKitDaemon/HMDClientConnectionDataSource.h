//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HMDCarPlayDataSource;

__attribute__((visibility("hidden")))
@interface HMDClientConnectionDataSource : NSObject
{
    id <HMDCarPlayDataSource> _carPlayDataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000ab161f
@property(readonly) id <HMDCarPlayDataSource> carPlayDataSource; // @synthesize carPlayDataSource=_carPlayDataSource;
@property(readonly) _Bool isDeviceLocked;
@property(readonly) _Bool supportsDeviceLock;
- (id)init;	// IMP=0x0000000000ab1594

@end

