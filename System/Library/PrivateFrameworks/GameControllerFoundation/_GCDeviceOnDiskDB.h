//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _GCDeviceOnDiskDB : NSObject
{
    NSArray *_configurationBundles;	// 8 = 0x8
    NSArray *_bundles;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000032aab
@property(readonly, copy) NSArray *configurationBundles; // @synthesize configurationBundles=_configurationBundles;
- (id)bestModelMatchingDevice:(id)arg1;	// IMP=0x0000000000031eb1
- (id)init;	// IMP=0x0000000000031e98
- (id)initWithBundles:(id)arg1;	// IMP=0x0000000000031c7d

@end

