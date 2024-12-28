//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNUINavigationListView, NSIndexPath;

@protocol CNUINavigationListViewDelegate <NSObject>

@optional
- (void)navigationListView:(CNUINavigationListView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (void)navigationListView:(CNUINavigationListView *)arg1 accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg2;
- (_Bool)navigationListView:(CNUINavigationListView *)arg1 shouldSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)navigationListView:(CNUINavigationListView *)arg1 shouldHighlightRowAtIndexPath:(NSIndexPath *)arg2;
@end
