//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@protocol RPNearFieldXPCDaemonInterfaceOld
- (void)stopDiscoveryWithCompletion:(void (^)(NSError *))arg1;
- (void)startActiveDiscoveryWithApplicationLabel:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)startPassiveDiscoveryWithApplicationLabels:(NSSet *)arg1 completion:(void (^)(NSError *))arg2;
@end
