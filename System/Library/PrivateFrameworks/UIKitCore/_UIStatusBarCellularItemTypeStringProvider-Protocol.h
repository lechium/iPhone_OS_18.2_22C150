//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UIFont;

@protocol _UIStatusBarCellularItemTypeStringProvider <NSObject>
- (double)animatedTypeDisplayItemSpacingFactorForCellularType:(long long)arg1;
- (UIFont *)condensedFontForCellularType:(long long)arg1 defaultFont:(UIFont *)arg2 baselineOffset:(double *)arg3;
- (NSString *)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;
@end
