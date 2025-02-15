//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/NSObject-Protocol.h>

@class NSString, SUUIURL, SUUIURLResolver, UIViewController;

@protocol SUUIURLResolverDelegate <NSObject>
- (void)URLResolver:(SUUIURLResolver *)arg1 showURL:(SUUIURL *)arg2 withTabIdentifier:(NSString *)arg3;
- (void)URLResolver:(SUUIURLResolver *)arg1 showTransientViewController:(UIViewController *)arg2;
- (UIViewController *)presentationViewControllerForURLResolver:(SUUIURLResolver *)arg1;

@optional
- (_Bool)URLResolver:(SUUIURLResolver *)arg1 shouldPerformDefaultActionForURL:(SUUIURL *)arg2;
- (void)URLResolver:(SUUIURLResolver *)arg1 didFinishWithResult:(_Bool)arg2;
@end

