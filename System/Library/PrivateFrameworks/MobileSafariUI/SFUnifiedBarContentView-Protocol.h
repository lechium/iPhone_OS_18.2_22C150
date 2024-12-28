//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSArray, SFUnifiedBarMetrics, SFUnifiedBarTheme;

@protocol SFUnifiedBarContentView <NSObject>
@property(readonly, nonatomic) struct CGSize preferredSize;

@optional
@property(readonly, nonatomic) _Bool isCurrentlyScrollable;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(nonatomic) double themeColorVisibility;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(nonatomic) _Bool showsSquishedAccessoryViews;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly, nonatomic) NSArray *squishedAccessoryViews;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(nonatomic) struct UIEdgeInsets squishedContentInset;
// Preceding property had unknown attributes: ?
// Original attribute string: T{UIEdgeInsets=dddd},?,N

@property(nonatomic) double squishTransformFactor;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(nonatomic) unsigned long long sizeClass;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(readonly, nonatomic) double topSquishedSpacingAdjustment;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N

@property(readonly, nonatomic) double preferredSquishedBottomSpacing;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N

@property(readonly, nonatomic) _Bool showsSquishedContent;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) double preferredBottomSpacing;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N

@property(readonly, nonatomic) double preferredTopSpacing;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N

@property(nonatomic) _Bool pinsScrollPositionToTrailingEdgeDuringResize;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) struct CGPoint midpointForCenteredContent;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGPoint=dd},?,N

@property(nonatomic) struct NSDirectionalEdgeInsets contentInset;
// Preceding property had unknown attributes: ?
// Original attribute string: T{NSDirectionalEdgeInsets=dddd},?,N

@property(readonly, nonatomic, getter=isContentHidden) _Bool contentHidden;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisContentHidden

@property(retain, nonatomic) SFUnifiedBarTheme *barTheme;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SFUnifiedBarTheme",?,&,N

@property(readonly, nonatomic) SFUnifiedBarMetrics *barMetrics;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SFUnifiedBarMetrics",?,R,N

@property(nonatomic) double barBackgroundAlpha;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@end
