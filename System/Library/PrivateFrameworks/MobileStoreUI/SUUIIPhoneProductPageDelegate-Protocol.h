//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/NSObject-Protocol.h>

@class NSURL, SUUIIPhoneProductPageViewController, SUUIItem;

@protocol SUUIIPhoneProductPageDelegate <NSObject>

@optional
- (_Bool)iPhoneProductPage:(SUUIIPhoneProductPageViewController *)arg1 shouldOpenURL:(NSURL *)arg2;
- (_Bool)iPhoneProductPage:(SUUIIPhoneProductPageViewController *)arg1 shouldOpenItem:(SUUIItem *)arg2;
@end

