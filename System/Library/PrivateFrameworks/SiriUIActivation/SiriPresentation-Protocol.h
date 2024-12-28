//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUIActivation/BSInvalidatable-Protocol.h>

@class SBAlertItem, SiriDismissalOptions;
@protocol SiriPresentationControllerDelegate;

@protocol SiriPresentation <BSInvalidatable>
@property(nonatomic) __weak id <SiriPresentationControllerDelegate> siriPresentationControllerDelegate;
@property(readonly, nonatomic) long long identifier;
- (void)invalidate;
- (void)hasContentAtPoint:(struct CGPoint)arg1 completion:(void (^)(_Bool))arg2;
- (void)dismissWithOptions:(SiriDismissalOptions *)arg1;
- (void)dismiss;
- (_Bool)isEnabled;

@optional
- (void)noteTapAtPoint:(struct CGPoint)arg1;
- (void)notePanBeganAtPoint:(struct CGPoint)arg1;
- (void)didDismissLocationTCC:(SBAlertItem *)arg1;
- (void)didPresentLocationTCC:(SBAlertItem *)arg1;
@end
