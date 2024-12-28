//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class INSearchForMessagesIntent;

@protocol INSearchForMessagesIntentHandling <NSObject>
- (void)handleSearchForMessages:(INSearchForMessagesIntent *)arg1 completion:(void (^)(INSearchForMessagesIntentResponse *))arg2;

@optional
- (void)resolveSpeakableGroupNamesForSearchForMessages:(INSearchForMessagesIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)resolveGroupNamesForSearchForMessages:(INSearchForMessagesIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)resolveDateTimeRangeForSearchForMessages:(INSearchForMessagesIntent *)arg1 withCompletion:(void (^)(INDateComponentsRangeResolutionResult *))arg2;
- (void)resolveAttributesForSearchForMessages:(INSearchForMessagesIntent *)arg1 withCompletion:(void (^)(INMessageAttributeOptionsResolutionResult *))arg2;
- (void)resolveSendersForSearchForMessages:(INSearchForMessagesIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)resolveRecipientsForSearchForMessages:(INSearchForMessagesIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)confirmSearchForMessages:(INSearchForMessagesIntent *)arg1 completion:(void (^)(INSearchForMessagesIntentResponse *))arg2;
@end
