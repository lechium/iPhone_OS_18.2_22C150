//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSString, UITextView;

@protocol CKBalloonTextViewInteractionDelegate <NSObject>
- (void)interactionStoppedFromPreviewItemControllerInTextView:(UITextView *)arg1;
- (void)interactionStartedFromPreviewItemControllerInTextView:(UITextView *)arg1;

@optional
- (void)interactionTextView:(UITextView *)arg1 userDidDragOutsideViewWithPoint:(struct CGPoint)arg2;
- (void)interactionTextViewShouldCopyToPasteboard:(UITextView *)arg1;
- (void)interactionStartedTapInTextView:(UITextView *)arg1 withModifierFlags:(long long)arg2 selectedText:(NSString *)arg3;
- (void)interactionStartedLongPressInTextView:(UITextView *)arg1;
@end

