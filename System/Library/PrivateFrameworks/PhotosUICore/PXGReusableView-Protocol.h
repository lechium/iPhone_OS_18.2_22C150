//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXReusableObject-Protocol.h>

@class CALayer, NSObject;
@protocol NSCopying, PXAnonymousView;

@protocol PXGReusableView <PXReusableObject>
@property(nonatomic) struct CGRect clippingRect;
@property(copy, nonatomic) id <NSCopying> userData;

@optional
@property(readonly, nonatomic) _Bool isFloating;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool canUnloadWhenInvisible;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (struct CGPoint)convertHostedChildCenter:(struct CGPoint)arg1 fromGlobalLayer:(CALayer *)arg2;
- (void)addHostedLayer:(CALayer *)arg1;
- (void)addHostedView:(NSObject<PXAnonymousView> *)arg1;
- (_Bool)shouldReloadForUserData:(id <NSCopying>)arg1;
@end
