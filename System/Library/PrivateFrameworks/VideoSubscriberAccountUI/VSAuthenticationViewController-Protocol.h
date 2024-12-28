//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class VSViewModel;
@protocol VSAuthenticationViewControllerDelegate;

@protocol VSAuthenticationViewController <NSObject>
@property(readonly, nonatomic) VSViewModel *viewModel;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate;

@optional
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGSize=dd},?,R,N

@end
