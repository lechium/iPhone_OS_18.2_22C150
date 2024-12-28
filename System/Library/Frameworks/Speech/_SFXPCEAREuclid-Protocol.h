//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol _SFXPCEAREuclid
- (oneway void)patchVersionWithReply:(void (^)(NSString *))arg1;
- (oneway void)minorVersionWithReply:(void (^)(NSString *))arg1;
- (oneway void)majorVersionWithReply:(void (^)(NSString *))arg1;
- (oneway void)fullVersionWithReply:(void (^)(NSString *))arg1;
- (oneway void)embeddingDimWithReply:(void (^)(NSNumber *))arg1;
- (oneway void)maxInputLengthWithReply:(void (^)(NSNumber *))arg1;
- (oneway void)computeEmbeddings:(NSArray *)arg1 reply:(void (^)(NSArray *))arg2;
- (oneway void)distanceBetweenSource:(NSString *)arg1 target:(NSString *)arg2 reply:(void (^)(NSNumber *))arg3;
- (oneway void)findNearestNeighbors:(NSString *)arg1 numberOfNeighbors:(long long)arg2 reply:(void (^)(NSArray *))arg3;
- (oneway void)hello;
@end
