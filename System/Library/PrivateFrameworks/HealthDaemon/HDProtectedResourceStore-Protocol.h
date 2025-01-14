//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDAssertion, HDDatabaseTransaction, NSString;

@protocol HDProtectedResourceStore <NSObject>
@property(readonly, copy, nonatomic) NSString *protectedResourceIdentifier;
- (void)checkInProtectedResource:(id)arg1;
- (id)checkOutProtectedResourceWithAssertion:(HDAssertion *)arg1 transaction:(HDDatabaseTransaction *)arg2 error:(id *)arg3;
- (HDAssertion *)requestProtectedResourceAccessAssertionForOwnerIdentifier:(NSString *)arg1 error:(id *)arg2;
@end

