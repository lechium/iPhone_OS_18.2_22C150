//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TransparencyUI/AAUISpecifierProviderDelegate-Protocol.h>

@class NSString, NSURLRequest, PSSpecifier;
@protocol AAUISpecifierProvider;

@protocol TUIDeviceSpecifierProviderDelegate <AAUISpecifierProviderDelegate>
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 loadRequest:(NSURLRequest *)arg2 withIdentifier:(NSString *)arg3 specifier:(PSSpecifier *)arg4;
@end
