//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKAuthorizationRequestRecord, NSArray;

@protocol _HKAuthorizationPresentationController <NSObject>
- (void)cancelPresentation;
- (void)presentWithPresentationRequests:(NSArray *)arg1 authorizationRequestRecord:(HKAuthorizationRequestRecord *)arg2 authorizationViewControllerPresenter:(id)arg3 completion:(void (^)(_Bool, NSError *))arg4;
@end

