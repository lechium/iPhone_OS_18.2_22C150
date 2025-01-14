//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class NSString, PRPosterEnvironmentContext, PRTimeFontConfiguration, UIColor, UITraitCollection;

@protocol PRPosterEnvironment <NSObject>
@property(readonly, nonatomic) PRTimeFontConfiguration *sourceTimeFontConfiguration;
@property(readonly, nonatomic) PRPosterEnvironmentContext *context;
@property(readonly, nonatomic) NSString *role;
@property(readonly, nonatomic) unsigned long long significantEventsCounter;
@property(readonly, nonatomic) struct CGRect floatingObscurableBounds;
@property(readonly, nonatomic) struct CGRect contentCutoutBounds;
@property(readonly, nonatomic) long long boundingShape;
@property(readonly, nonatomic) long long deviceOrientation;
@property(readonly, nonatomic) long long userInterfaceStyle;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
@property(readonly, nonatomic) UIColor *caseColor;
@end

