//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol UIDictationTipHandlerDelegate;

__attribute__((visibility("hidden")))
@interface UIDictationTipModelessInputHandler : NSObject
{
    _Bool _modelessInputTipDictationStoppedSignal;	// 8 = 0x8
    _Bool _softwareKeyboardInteractionAfterDictationStoppedSignal;	// 9 = 0x9
    _Bool _shouldAttemptToShowModelessTip;	// 10 = 0xa
    id <UIDictationTipHandlerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000111e1c8
@property(nonatomic) _Bool shouldAttemptToShowModelessTip; // @synthesize shouldAttemptToShowModelessTip=_shouldAttemptToShowModelessTip;
@property(nonatomic) _Bool softwareKeyboardInteractionAfterDictationStoppedSignal; // @synthesize softwareKeyboardInteractionAfterDictationStoppedSignal=_softwareKeyboardInteractionAfterDictationStoppedSignal;
@property(nonatomic) _Bool modelessInputTipDictationStoppedSignal; // @synthesize modelessInputTipDictationStoppedSignal=_modelessInputTipDictationStoppedSignal;
@property(nonatomic) __weak id <UIDictationTipHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showModelessInputTip;	// IMP=0x000000000111e0a5
- (_Bool)shouldShowModelessInputTip;	// IMP=0x000000000111dfd6
- (void)triggerAttemptToShowModelessTipFlag;	// IMP=0x000000000111df77
- (void)userInteractionEndedDuringModelessInputTipDictationStoppedSignal;	// IMP=0x000000000111df32
- (void)processUserInteractionEnded;	// IMP=0x000000000111dead
- (void)processSoftwareKeyboardInteraction;	// IMP=0x000000000111de23
- (void)resetDictationTipModelessHandlerSignalFlags;	// IMP=0x000000000111dde2
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000111dd6a

@end
