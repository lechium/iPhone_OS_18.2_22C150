//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UISheetPresentationControllerClientConfiguration;

@protocol _UISheetPresentationControllerClientRemotePresentationDelegate <NSObject>
- (void)_sheetInteractionDraggingDidEnd;
- (void)_sheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 animateChange:(_Bool)arg3 dismissible:(_Bool)arg4;
- (void)_sheetInteractionDraggingDidBeginWithRubberBandCoefficient:(double)arg1 dismissible:(_Bool)arg2 interruptedOffset:(struct CGPoint)arg3;
- (void)_sheetGrabberDidTriggerPrimaryAction;
- (void)_sheetPresentationControllerClientConfigurationDidChange:(_UISheetPresentationControllerClientConfiguration *)arg1;

@optional
- (void)_sheetPresentationControllerDidChangeContainsFirstResponder:(_Bool)arg1 firstResponderRequiresKeyboard:(_Bool)arg2 keyboardFrame:(struct CGRect)arg3;
@end

