//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSHIDEventAuthenticationMessage, UIKeyCommand;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDDismissalResponse : NSObject
{
    UIKeyCommand *_keyCommand;	// 8 = 0x8
    BKSHIDEventAuthenticationMessage *_pasteAuthenticationMessage;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000012441f5
- (void).cxx_destruct;	// IMP=0x00000000012443b5
@property(retain, nonatomic) BKSHIDEventAuthenticationMessage *pasteAuthenticationMessage; // @synthesize pasteAuthenticationMessage=_pasteAuthenticationMessage;
@property(retain, nonatomic) UIKeyCommand *keyCommand; // @synthesize keyCommand=_keyCommand;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000124426a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000012441fd

@end
