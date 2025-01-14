//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _UIFocusSoundPlayer;

__attribute__((visibility("hidden")))
@interface _UIFocusSoundGenerator : NSObject
{
    id <_UIFocusSoundPlayer> _focusSoundPlayer;	// 8 = 0x8
}

+ (void)_uiktest_unregisterURLForIdentifier:(id)arg1;	// IMP=0x0060000000b19c6c
+ (void)registerURL:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0060000000b19a55
+ (id)defaultGenerator;	// IMP=0x0060000000b19467
- (void).cxx_destruct;	// IMP=0x0000000000b19d4c
@property(readonly, nonatomic) id <_UIFocusSoundPlayer> focusSoundPlayer; // @synthesize focusSoundPlayer=_focusSoundPlayer;
- (void)playSoundForFocusUpdateInContext:(id)arg1;	// IMP=0x0000000000b1953c
- (id)initWithFocusSoundPlayer:(id)arg1;	// IMP=0x0000000000b194d1

@end

