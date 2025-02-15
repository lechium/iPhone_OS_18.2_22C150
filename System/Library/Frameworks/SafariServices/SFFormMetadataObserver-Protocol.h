//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSURL, SFFormAutoFillFrameHandle, WBSFormControlMetadata, WBSFormMetadata, WBSSavedAccount;

@protocol SFFormMetadataObserver <NSObject>
- (void)didRemoveAutomaticStrongPasswordInForm:(WBSFormMetadata *)arg1 inputSessionUserObject:(NSDictionary *)arg2 inFrame:(SFFormAutoFillFrameHandle *)arg3;
- (void)didCompleteWithSavedAccount:(WBSSavedAccount *)arg1;
- (void)didCompleteWithPasskey;
- (void)didUpdateUnsubmittedForm:(WBSFormMetadata *)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2;
- (void)didFillOneTimeCodeAndShouldSubmit:(_Bool)arg1;
- (void)autoFillDidFinishWithUpdatedFormMetadata:(WBSFormMetadata *)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2 shouldSubmit:(_Bool)arg3;
- (void)autoFilledField:(WBSFormControlMetadata *)arg1 inForm:(WBSFormMetadata *)arg2;
- (void)willNavigateFrame:(SFFormAutoFillFrameHandle *)arg1 withUnsubmittedForm:(WBSFormMetadata *)arg2;
- (void)didFillGeneratedPasswordInForm:(WBSFormMetadata *)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2;
- (void)textDidChangeInTextField:(WBSFormControlMetadata *)arg1 inForm:(WBSFormMetadata *)arg2 inFrame:(SFFormAutoFillFrameHandle *)arg3;
- (void)didCollectFormMetadataForPageLevelAutoFill:(NSDictionary *)arg1 atURL:(NSURL *)arg2;
- (void)didCollectFormMetadataForPreFilling:(NSDictionary *)arg1 atURL:(NSURL *)arg2;
- (void)didCollectURLsForPreFilling:(NSArray *)arg1 atURL:(NSURL *)arg2 inFrame:(SFFormAutoFillFrameHandle *)arg3;
@end

