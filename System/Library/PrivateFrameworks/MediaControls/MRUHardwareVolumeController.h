//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable;

__attribute__((visibility("hidden")))
@interface MRUHardwareVolumeController : NSObject
{
    NSHashTable *_assertions;	// 8 = 0x8
    NSArray *_invalidators;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000e4f3c
- (void).cxx_destruct;	// IMP=0x00000000000e5556
@property(retain, nonatomic) NSArray *invalidators; // @synthesize invalidators=_invalidators;
@property(retain, nonatomic) NSHashTable *assertions; // @synthesize assertions=_assertions;
- (void)relinquishHardwareVolumeButtons;	// IMP=0x00000000000e54e7
- (void)updateControlsForAssertion:(id)arg1;	// IMP=0x00000000000e52c2
- (void)unregisterAssertion:(id)arg1;	// IMP=0x00000000000e5150
- (id)requestControlsForVolumeDataSource:(id)arg1 reason:(id)arg2;	// IMP=0x00000000000e4ff7
- (id)init;	// IMP=0x00000000000e4f91

@end

