//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, TPSpecificUser;

@protocol CKKSCuttlefishAdapterProtocol
- (void)fetchRecoverableTLKShares:(TPSpecificUser *)arg1 peerID:(NSString *)arg2 contextID:(NSString *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)fetchPCSIdentityByKey:(TPSpecificUser *)arg1 pcsservices:(NSArray *)arg2 reply:(void (^)(NSArray *, NSArray *, NSError *))arg3;
- (void)fetchCurrentItem:(TPSpecificUser *)arg1 items:(NSArray *)arg2 reply:(void (^)(NSArray *, NSArray *, NSError *))arg3;
@end

