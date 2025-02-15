//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

@protocol AKTextViewKeyCommandDelegate;

@interface AKTextView : UITextView
{
    long long _maximumNumberOfCharacters;	// 8 = 0x8
    id <AKTextViewKeyCommandDelegate> _keyCommandDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009b660
@property __weak id <AKTextViewKeyCommandDelegate> keyCommandDelegate; // @synthesize keyCommandDelegate=_keyCommandDelegate;
@property long long maximumNumberOfCharacters; // @synthesize maximumNumberOfCharacters=_maximumNumberOfCharacters;
- (_Bool)isBlockedAction:(SEL)arg1;	// IMP=0x000000000009b5fc
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000009b583
- (id)textInputTraits;	// IMP=0x000000000009b56a
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000009b506
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;	// IMP=0x000000000009b47d
- (void)handleBackTabCommand:(id)arg1;	// IMP=0x000000000009b42f
- (void)handleTabCommand:(id)arg1;	// IMP=0x000000000009b3e1
- (id)keyCommands;	// IMP=0x000000000009b2f3

@end

