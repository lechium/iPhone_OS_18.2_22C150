//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AmbientUI/NSObject-Protocol.h>

@class BSAnimationSettings, NSDictionary, PRSPosterConfiguration;
@protocol BSInvalidatable;

@protocol AMUIAmbientViewControlling <NSObject>
@property(readonly, nonatomic) NSDictionary *activeConfigurationMetadata;
- (void)invalidate;
- (_Bool)handleDismiss;
- (void)noteAmbientViewControllingDelegateDidUpdate;
- (_Bool)updatePosterConfiguration:(PRSPosterConfiguration *)arg1 withAnimationSettings:(BSAnimationSettings *)arg2;

@optional
- (id <BSInvalidatable>)cancelTouchesForCurrentEventInHostedContent;
@end
