//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@protocol LXQueryDecorationXPCProtocol
- (void)queryDecorationCollectionWithQdInputData:(NSData *)arg1 crossAPIAssociationKeyData:(NSData *)arg2 with:(void (^)(NSData *, NSError *))arg3;
- (void)queryDecorationCollectionWithQdInputData:(NSData *)arg1 sessionUUIDData:(NSData *)arg2 with:(void (^)(NSData *, NSError *))arg3;
- (void)queryDecorationCollectionWithQdInputData:(NSData *)arg1 with:(void (^)(NSData *, NSError *))arg2;
- (void)warmup;
@end
