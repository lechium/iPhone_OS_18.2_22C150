//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSArray, NSString, _TtC5AskTo10ATQuestion, _TtC5AskTo14ATAnswerChoice, _TtC9AskToCore9ATPayload;

@interface _TtC11AskToDaemon6Server : _TtCs12_SwiftObject
{
    MISSING_TYPE *knownClientsWithNonAskToFlows;	// 16 = 0x10
    MISSING_TYPE *client;	// 24 = 0x18
    MISSING_TYPE *imessageSender;	// 32 = 0x20
    MISSING_TYPE *clientResponseTaskMapper;	// 72 = 0x48
}

- (void)screenTimeDidReceiveAnswer:(_TtC5AskTo14ATAnswerChoice *)arg1 forRequestWithID:(NSString *)arg2 responderDSID:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;	// IMP=0x0000000000019d10
- (void)sendResponse:(_TtC9AskToCore9ATPayload *)arg1 to:(NSArray *)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x0000000000019a70
- (void)sendWithQuestion:(_TtC5AskTo10ATQuestion *)arg1 to:(short)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;	// IMP=0x00000000000197b0

@end

