//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iMessageApps/NSObject-Protocol.h>

@class CKBrowserSwitcherFooterView, NSIndexPath;

@protocol CKBrowserSwitcherFooterViewDelegate <NSObject>
- (void)switcherView:(CKBrowserSwitcherFooterView *)arg1 didMagnify:(_Bool)arg2;
- (void)switcherView:(CKBrowserSwitcherFooterView *)arg1 didSelectPluginAtIndex:(NSIndexPath *)arg2;

@optional
- (NSIndexPath *)indexPathOfCurrentlySelectedPluginInSwitcherView:(CKBrowserSwitcherFooterView *)arg1;
@end
