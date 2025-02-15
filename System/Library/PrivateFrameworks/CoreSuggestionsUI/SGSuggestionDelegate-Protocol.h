//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestionsUI/SGSuggestionViewControllerPresenter-Protocol.h>

@class EKEventStore, EKICSPreviewController, NSData, UIViewController;
@protocol SGSuggestion;

@protocol SGSuggestionDelegate <SGSuggestionViewControllerPresenter>
- (long long)suggestionsUIContext;
- (void)suggestionWasUpdated:(id <SGSuggestion>)arg1;
- (void)suggestion:(id <SGSuggestion>)arg1 actionFinished:(_Bool)arg2;

@optional
- (EKICSPreviewController *)icsPreviewControllerForData:(NSData *)arg1 andEventStore:(EKEventStore *)arg2;
- (void)dismissICSPreviewController:(id)arg1;
- (void)suggestionBatchDismissal;
- (void)bannerDismissAction;
- (UIViewController *)tableViewController;
- (void)bannerPrimaryAction;
@end

