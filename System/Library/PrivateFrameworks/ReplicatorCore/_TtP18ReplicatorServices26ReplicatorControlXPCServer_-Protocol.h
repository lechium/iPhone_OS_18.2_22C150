//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@protocol _TtP18ReplicatorServices26ReplicatorControlXPCServer_
- (NSData *)pushTokenWithParameters:(NSData *)arg1 error:(id *)arg2;
- (NSData *)allowListAndReturnError:(id *)arg1;
- (_Bool)removeFromAllowListWithParameters:(NSData *)arg1 error:(id *)arg2;
- (_Bool)addIDToAllowListWithParameters:(NSData *)arg1 error:(id *)arg2;
- (_Bool)setAllowListWithParameters:(NSData *)arg1 error:(id *)arg2;
- (NSData *)isAllowListEnabledAndReturnError:(id *)arg1;
- (_Bool)enableAllowListWithParameters:(NSData *)arg1 error:(id *)arg2;
- (_Bool)retryStuckRelationshipsAndReturnError:(id *)arg1;
- (NSData *)isEnabledAndReturnError:(id *)arg1;
- (_Bool)setEnabledWithParameters:(NSData *)arg1 error:(id *)arg2;
- (_Bool)unavailableWithParameters:(NSData *)arg1 error:(id *)arg2;
- (_Bool)unpairWithParameters:(NSData *)arg1 error:(id *)arg2;
- (void)pairWithParameters:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (NSData *)localDeviceAndReturnError:(id *)arg1;
- (NSData *)devicesAndReturnError:(id *)arg1;
@end
