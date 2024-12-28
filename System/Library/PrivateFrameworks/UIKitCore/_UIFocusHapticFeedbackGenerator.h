//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARInputDeviceTouchpad, CARSession;

__attribute__((visibility("hidden")))
@interface _UIFocusHapticFeedbackGenerator : NSObject
{
    CARSession *_carSession;	// 8 = 0x8
    CARInputDeviceTouchpad *_currentTouchpad;	// 16 = 0x10
    unsigned long long _currentSenderID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000b15819
@property(nonatomic) unsigned long long currentSenderID; // @synthesize currentSenderID=_currentSenderID;
@property(retain, nonatomic) CARInputDeviceTouchpad *currentTouchpad; // @synthesize currentTouchpad=_currentTouchpad;
@property(retain, nonatomic) CARSession *carSession; // @synthesize carSession=_carSession;
- (void)performHapticFeedbackForFocusUpdateInContext:(id)arg1;	// IMP=0x0000000000b1562e
- (id)initWithScreen:(id)arg1;	// IMP=0x0000000000b155b3

@end
