//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, SRCompactTextRequestView;

@protocol SRCompactTextRequestViewDelegate <NSObject>
- (void)textRequestViewRequestsVoiceActivation:(SRCompactTextRequestView *)arg1;
- (void)textRequestView:(SRCompactTextRequestView *)arg1 didEnableSuggestions:(_Bool)arg2;
- (void)textRequestView:(SRCompactTextRequestView *)arg1 siriRequestCommittedWithText:(NSString *)arg2;
- (void)textRequestView:(SRCompactTextRequestView *)arg1 didChangeTextFieldText:(NSString *)arg2;
- (void)textRequestViewDidEndTextEditMenuInteraction:(SRCompactTextRequestView *)arg1;
- (void)textRequestViewWillBeginTextEditMenuInteraction:(SRCompactTextRequestView *)arg1;
- (void)textRequestViewDidEndEditing:(SRCompactTextRequestView *)arg1;
- (void)textRequestViewWillBeginEditing:(SRCompactTextRequestView *)arg1;
- (void)textRequestView:(SRCompactTextRequestView *)arg1 requestsKeyboardWithCompletion:(void (^)(_Bool))arg2;
@end

