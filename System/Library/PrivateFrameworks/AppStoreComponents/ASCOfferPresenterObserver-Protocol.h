//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreComponents/NSObject-Protocol.h>

@class NSString, UIView;
@protocol ASCOffer;

@protocol ASCOfferPresenterObserver <NSObject>
- (void)offerPresenterPreprocessOffer:(id <ASCOffer>)arg1 inState:(NSString *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)offerPresenterWillPerformActionOfOffer:(id <ASCOffer>)arg1 inState:(NSString *)arg2 withActivity:(inout id *)arg3 inContext:(inout id *)arg4 withPaymentSheetView:(UIView *)arg5;
- (void)offerPresenterDidObserveChangeToState:(NSString *)arg1;
@end
