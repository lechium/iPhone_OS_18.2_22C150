//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSUUID;

@protocol _TtP15FeedbackService33CentralizedFeedbackDaemonProtocol_
- (void)remoteEvaluateWithRequest:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)fetchDonationIDsWithCount:(unsigned int)arg1 fromLatest:(_Bool)arg2 excludingEvaluationIDs:(NSArray *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (void)fetchDonationsWithCount:(unsigned int)arg1 fromLatest:(_Bool)arg2 excludingEvaluationIDs:(NSArray *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (void)fetchDonationsWithCount:(unsigned int)arg1 fromLatest:(_Bool)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (void)fetchDonationWithDonationID:(NSUUID *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)fetchEvaluationWithEvaluationID:(NSUUID *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)recordEvaluationWithEvaluationJSON:(NSData *)arg1 completion:(void (^)(NSUUID *, NSError *))arg2;
- (void)presentedInteractionWithInteractionJSON:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)presentedDonationWithEvaluationID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)invalidateDonationWithDonationJSON:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)donateWithDonationJSON:(NSData *)arg1 completion:(void (^)(NSUUID *, NSError *))arg2;
@end
