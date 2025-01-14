//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AceObject, MISSING_TYPE, NSSet, NSUUID, SRSuggestionsViewController, UIView;
@protocol SAAceCommand;

@protocol SRSuggestionsViewControllerDelegate <NSObject>
- (CDStruct_a82615c4)keyboardInfoForSuggestionsController:(SRSuggestionsViewController *)arg1;
- (NSSet *)siriEnabledAppListForSuggestionsController:(SRSuggestionsViewController *)arg1;
- (double)statusViewHeightForSuggestionsViewController:(SRSuggestionsViewController *)arg1;
- (struct CGRect)statusBarFrameForSuggestionsViewController:(SRSuggestionsViewController *)arg1;
- (double)contentWidthForSuggestionsViewController:(SRSuggestionsViewController *)arg1;
- (void)suggestionsViewDidShowSuggestions:(SRSuggestionsViewController *)arg1;
- (void)suggestionsViewController:(SRSuggestionsViewController *)arg1 performAceCommand:(AceObject<SAAceCommand> *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;

@optional
- (MISSING_TYPE *)inTextInputModeForSuggestionsViewController: /* Error: Ran out of types for this method. */;
- (void)suggestionsViewController:(SRSuggestionsViewController *)arg1 didHideVibrantView:(UIView *)arg2;
@end

