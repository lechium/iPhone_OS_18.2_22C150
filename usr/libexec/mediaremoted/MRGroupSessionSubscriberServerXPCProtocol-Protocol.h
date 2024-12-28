//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRCodableGroupSessionParticipant, NSString;

@protocol MRGroupSessionSubscriberServerXPCProtocol
- (void)session:(NSString *)arg1 removeAllParticipantsWithReply:(void (^)(NSError *))arg2;
- (void)session:(NSString *)arg1 removeParticipant:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)session:(NSString *)arg1 denyPendingParticipant:(MRCodableGroupSessionParticipant *)arg2 reply:(void (^)(NSError *))arg3;
- (void)session:(NSString *)arg1 approvePendingParticipant:(MRCodableGroupSessionParticipant *)arg2 reply:(void (^)(NSError *))arg3;
- (void)connectToSession:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end
