//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexSet, NSString;

@protocol TFFeedbackFormPresenterView
- (void)showErrorAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2;
- (void)showSubmitButtonForSubmissionPendingState:(_Bool)arg1;
- (void)reloadEntriesAtIndexPaths:(NSArray *)arg1;
- (void)reloadEntryGroupsAtIndices:(NSIndexSet *)arg1;
- (void)prepareForEntryType:(unsigned long long)arg1;
- (void)setNavigationItemTitle:(NSString *)arg1;
@end

