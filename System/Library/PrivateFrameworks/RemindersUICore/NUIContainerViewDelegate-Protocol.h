//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemindersUICore/NSObject-Protocol.h>

@class NUIContainerView, UIView;

@protocol NUIContainerViewDelegate <NSObject>

@optional
- (void)containerViewDidLayoutArrangedSubviews:(NUIContainerView *)arg1;
- (_Bool)containerView:(NUIContainerView *)arg1 shouldRestartMeasurementDueToCompressionInAxis:(long long)arg2 forReason:(long long)arg3;
- (void)containerView:(NUIContainerView *)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (struct CGRect)containerView:(NUIContainerView *)arg1 layoutFrameForArrangedSubview:(UIView *)arg2 withProposedFrame:(struct CGRect)arg3;
- (struct CGSize)containerView:(NUIContainerView *)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(UIView *)arg3;
@end

