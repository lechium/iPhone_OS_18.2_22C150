//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/NSObject-Protocol.h>

@class WBSStartPageSection;

@protocol SFStartPageDataSourceObserving <NSObject>
- (void)reloadNavigationItemAnimated:(_Bool)arg1;
- (void)reloadDataAnimatingDifferences:(_Bool)arg1;

@optional
- (void)reloadSection:(WBSStartPageSection *)arg1 animated:(_Bool)arg2;
@end

