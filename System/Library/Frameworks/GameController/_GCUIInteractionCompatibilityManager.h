//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _GCUIInteractionCompatibilityManager : NSObject
{
    NSMutableSet *_installedInteractions;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00600000000a0175
- (void).cxx_destruct;	// IMP=0x00000000000a0a13
- (void)_windowDidBecomeKey:(id)arg1;	// IMP=0x00000000000a078b
- (void)_installInteractionOnWindow:(id)arg1;	// IMP=0x00000000000a0507
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)init;	// IMP=0x00000000000a01fa

@end

