//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray, NSString, UIView;
@protocol SBApplicationSceneStatusBarDescribing;

@protocol SBMainDisplaySceneLayoutStatusBarViewDataSource <NSObject>
- (_Bool)allowsConfiguringIndividualStatusBarParts;
- (long long)statusBarOrientation;
- (id <SBApplicationSceneStatusBarDescribing>)statusBarDescriberForStatusBarPart:(NSString *)arg1;
- (NSArray *)statusBarDescribers;

@optional
- (struct CGRect)statusBarAvoidanceFrame;
- (struct CGRect)frameForSceneIdentifier:(NSString *)arg1 inView:(UIView *)arg2;
- (id <SBApplicationSceneStatusBarDescribing>)statusBarDescriberAtPoint:(struct CGPoint)arg1 inView:(UIView *)arg2 pointInSceneLayoutSpace:(struct CGPoint *)arg3;
- (NSArray *)currentlyValidStatusBarPartIdentifiers;
- (NSArray *)statusBarPartsForSceneWithIdentifier:(NSString *)arg1;
@end

