//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol TransparencydIDSSupportProtocol
- (void)ttr:(NSData *)arg1 fromHandle:(NSString *)arg2 complete:(void (^)(NSError *))arg3;
- (void)haveContact:(NSString *)arg1 complete:(void (^)(_Bool, NSError *))arg2;
- (void)accountKey:(NSString *)arg1 complete:(void (^)(NSData *, NSError *))arg2;
@end

