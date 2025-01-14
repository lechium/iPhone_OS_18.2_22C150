//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/NSObject-Protocol.h>

@class AACustodianshipInfo;
@protocol AAOBWelcomeControllerModelProtocol;

@protocol TrustedContactFlowPresenterProtocol <NSObject>
- (void)presentInvitationUIWithCustodianshipInfo:(AACustodianshipInfo *)arg1 completion:(void (^)(NSError *))arg2;
- (void)presentModel:(id <AAOBWelcomeControllerModelProtocol>)arg1 completion:(void (^)(NSError *))arg2;
@end

