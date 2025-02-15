//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemApertureUI/NSObject-Protocol.h>

@class UIView;
@protocol SAUILayoutHosting;

@protocol SAUILayoutSpecifying <NSObject>
@property(readonly, nonatomic) long long preferredLayoutMode;
@property(readonly, nonatomic) long long maximumSupportedLayoutMode;
@property(readonly, nonatomic) long long minimumSupportedLayoutMode;
@property(readonly, nonatomic) long long layoutMode;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2;

@optional
@property(readonly, nonatomic, getter=isRequestingMenuPresentation) _Bool requestingMenuPresentation;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisRequestingMenuPresentation

@property(readonly, nonatomic, getter=isMinimalPresentationPossible) _Bool minimalPresentationPossible;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisMinimalPresentationPossible

@property(readonly, nonatomic, getter=isInteractiveDismissalEnabled) _Bool interactiveDismissalEnabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisInteractiveDismissalEnabled

@property(nonatomic) __weak id <SAUILayoutHosting> layoutHost;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<SAUILayoutHosting>",?,W,N

- (void)layoutHostContainerViewDidLayoutSubviews:(UIView *)arg1;
- (void)layoutHostContainerViewWillLayoutSubviews:(UIView *)arg1;
- (_Bool)isProvidedViewConcentric:(UIView *)arg1 inLayoutMode:(long long)arg2;
- (struct CGSize)sizeThatFitsSize:(struct CGSize)arg1 forProvidedView:(UIView *)arg2 inLayoutMode:(long long)arg3;
- (struct NSDirectionalEdgeInsets)preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets)arg2 maximumOutsets:(struct NSDirectionalEdgeInsets)arg3;
@end

