//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIView;

@interface _TtC10ContactsUI12CNTipsHelper : NSObject
{
    MISSING_TYPE *entries;	// 8 = 0x8
    MISSING_TYPE *startupTask;	// 16 = 0x10
    MISSING_TYPE *controller;	// 24 = 0x18
    MISSING_TYPE *lock;	// 32 = 0x20
    MISSING_TYPE *currentTipView;	// 40 = 0x28
}

+ (id)shared;	// IMP=0x00400000000d45b0
- (void).cxx_destruct;	// IMP=0x00000000000d62a0
- (id)init;	// IMP=0x00000000000d6260
- (void)tipKitSetSiriTipContext:(id)arg1;	// IMP=0x00000000000d5e10
- (void)tipKitStopObservation;	// IMP=0x00000000000d5da0
- (void)tipKitStartObservation:(id)arg1;	// IMP=0x00000000000d5c00
@property(nonatomic, retain) UIView *currentTipView; // @synthesize currentTipView;

@end

